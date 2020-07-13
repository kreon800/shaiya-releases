#include "pch.h"

//asm code for overwriting CustomGame.dll npc to-go
void __declspec(naked) npcHook() {
	__asm {
		cmp edi,0x5
		jg _code
		push ecx //save the current data in ecx
		lea ecx,[npcArray] //load the npc window array into ecx
		mov ecx,[ecx+edi*0x4] //move the window data into ecx
		//dword ptr ds:[0x9144E4] compiles as a game.exe address
		//otherwise, it'll get compiled as an address in the dll
		mov dword ptr ds:[0x9144E4],ecx //move the npc window id
		pop ecx //restore the previous data in ecx
		_code:
		call npcCall //original code
		jmp npcReturn
	}
}
//the main function
void npcFunc() {
	Hook((void*)0x522160, npcHook, 5);
}
