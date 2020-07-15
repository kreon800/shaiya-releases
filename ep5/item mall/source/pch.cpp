#include "pch.h"

DWORD dwReturnAddr = 0x488D5F;

DWORD __stdcall ItemMallProc(_In_ LPVOID lpParameter)
{
	//define the useruid as the parameter
	DWORD dwUid = (DWORD)lpParameter;
	//create a 90 byte buffer filled with zeros
	char buff[90] = { 0 };
	ZeroMemory(buff, 90);
	//seems to be constructing a packet buffer
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
//function argument = useruid
void ItemMallFunc(DWORD dwUid)
{
	CreateThread(NULL, 0, ItemMallProc, (PVOID)dwUid, NULL, 0);
}

__declspec(naked) void ItemMallHook()
{
	_asm
	{
		pushad //save all 32 bit registers
		mov eax,dword ptr[edi+0x582C] //move useruid into eax
		push eax //push the useruid as the function argument                       
		call ItemMallFunc //call the packet buffer function
		add esp,0x4 //return 4 bytes to the stack
		popad //restore all 32 bit registers
		jmp dwReturnAddr
	}
}
//the main function
void ItemMallFix() {
	Hook((void*)0x48876F, ItemMallHook, 5);
}
