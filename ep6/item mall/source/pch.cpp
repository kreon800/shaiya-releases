#include "pch.h"
#include "database.h"

CDataBase g_DBobj;
DWORD dwReturnAddr1 = 0x47D157;
DWORD dwReturnAddr2 = 0x488D5F;
//queries sql to get the user's points
void GetPoint(DWORD dwUid, PVOID pAddr)
{
	CString szSql;
	szSql.Format(L"SELECT Point FROM PS_UserData.dbo.Users_Master WHERE UserUID=%d", dwUid);
	*((DWORD*)pAddr) = wcstoul(g_DBobj.ExeSqlByCommand(szSql, L"Point"), 0, 10);
}
//creates a function that manages spending points
DWORD __stdcall ThreadProc2(_In_ LPVOID lpParameter)
{
	DWORD dwUid = (DWORD)lpParameter;
	char buff[90] = { 0 };
	ZeroMemory(buff, 90);
	//seems to be constructing a packet
	*(PDWORD(&buff[4])) = DWORD(&buff[12]);
	*(PDWORD(&buff[12])) = 0x1B02000B;
	*(PDWORD(&buff[16])) = dwUid;

	DWORD dwTempCall = 0x406960; //CClientToMgr::OnRecv
	DWORD dwBuffAddr = (DWORD)buff;

	_asm
	{
		push dwBuffAddr
		mov ecx,0x0
		call dwTempCall //CClientToMgr::OnRecv
	}
	return 0;
}
void UsePoint(DWORD dwUid)
{
	CreateThread(NULL, 0, ThreadProc2, (PVOID)dwUid, NULL, 0);
}
//the asm hook for getting the user's points
__declspec(naked) void GetHook()
{
	_asm
	{
		pushad //save the data stored in all 32 bit registers
		lea eax,[ecx+0x5AC0] //load the user's points into eax
		push eax //push the point argument           
		mov eax,[ecx+0x582C] //move the useruid into eax
		push eax //push the useruid argument            
		call GetPoint //query sql to get the user's points
		add esp,0x8 //add 8 bytes to the stack
		popad //restore previous data to all 32 bit registers
		//orginal code
		xor ebp,ebp
		cmp byte ptr[esi+0xA],0x0
		jmp dwReturnAddr1
	}
}
//the asm hook for using points
__declspec(naked) void UseHook()
{
	_asm
	{
		pushad //save the data stored in all 32 bit registers
		mov eax,dword ptr[edi+0x582C] //move the useruid into eax
		push eax //push the useruid argument                       
		call UsePoint //call the function that manages spending
		add esp,0x4 //add 4 bytes to the stack
		popad //restore previous data to all 32 bit registers
		jmp dwReturnAddr2
	}
}
//the main function
DWORD __stdcall ThreadProc1(_In_ LPVOID lpParameter)
{
	//checks the database connection
	if (!g_DBobj.LinkDataBase()) return 0;
	//defines addresses for asm hooks
	Hook((void*)0x47D151, GetHook, 6);
	Hook((void*)0x48876F, UseHook, 5);
	return 0;
}
