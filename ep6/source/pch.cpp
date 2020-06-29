#include "pch.h"
#include "database.h"

CDataBase g_DBobj;
DWORD dwReturnAddr1 = 0x47D157;
DWORD dwGetPoint = 0;
DWORD dwReturnAddr2 = 0x488D5F;
DWORD dwSetPoint = 0;
//the asm hook for getting the user's points
__declspec(naked) void GetHook()
{
	_asm
	{
		pushad //save the data stored in all 32 bit registers
		lea eax,[ecx+0x5AC0] //load the user's points into eax
		push eax //save the user's point data in eax              
		mov eax,[ecx+0x582C] //move the useruid into eax
		push eax //save the useruid data in eax              
		call dwGetPoint //query sql to get the user's points
		add esp,0x8 //add 8 bytes to the stack
		popad //restore previous data to all 32 bit registers
		//orginal code
		xor ebp,ebp
		cmp byte ptr[esi+0xA],0x0
		jmp dwReturnAddr1
	}
}
//the asm hook for updating the user's points
__declspec(naked) void SetHook()
{
	_asm
	{
		pushad //save the data stored in all 32 bit registers
		mov eax,dword ptr[edi+0x582C] //move the useruid into eax
		push eax //save the useruid data in eax                       
		call dwSetPoint //call the function that updates the points
		add esp,0x4 //add 4 bytes to the stack
		popad //restore previous data to all 32 bit registers
		jmp dwReturnAddr2
	}
}
//queries sql to get the user's points
void GetPoint(DWORD dwUid, PVOID pAddr)
{
	CString szSql;
	szSql.Format(L"SELECT Point FROM PS_UserData.dbo.Users_Master WHERE UserUID=%d", dwUid);
	*((DWORD*)pAddr) = wcstoul(g_DBobj.ExeSqlByCommand(szSql, L"Point"), 0, 10);
}
//updates the user's points
DWORD __stdcall UpdatePoint(_In_ LPVOID lpParameter)
{
	DWORD dwUid = (DWORD)lpParameter;
	char buff[90] = { 0 };
	ZeroMemory(buff, 90);

	*(PDWORD(&buff[4])) = DWORD(&buff[12]);
	*(PDWORD(&buff[12])) = 0x1B02000B;
	*(PDWORD(&buff[16])) = dwUid;

	DWORD dwTempCall = 0x406960;
	DWORD dwBuffAddr = (DWORD)buff;

	_asm
	{
		push dwBuffAddr
		mov ecx,0x0
		call dwTempCall
	}
	return 0;
}
//creates a thread for the update function
void SetPoint(DWORD dwUid)
{
	CreateThread(NULL, 0, UpdatePoint, (PVOID)dwUid, NULL, 0);
}
//the main function
DWORD __stdcall ShopConnect(_In_ LPVOID lpParameter)
{
	//checks the database connection
	if (!g_DBobj.LinkDataBase()) return 0;
	//writes functions in memory
	dwGetPoint = (DWORD)GetPoint;
	dwSetPoint = (DWORD)SetPoint;
	//defines addresses for asm hooks
	Hook(0x47D151, 6, (DWORD)GetHook);
	Hook(0x48876F, 5, (DWORD)SetHook);
	return 0;
}
