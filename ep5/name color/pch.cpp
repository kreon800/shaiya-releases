#include "pch.h"
//add this to config.ini
/*
//0 = default
//1 = blue
//2 = green
//3 = yellow
//4 = orange
//5 = pink
//6 = purple
[NAME_COLOR]
COLOR=0
*/
//parse config.ini for the color value
void nameKey() {
	GetPrivateProfileStringA("NAME_COLOR", "COLOR", "", szColor, 255, ".\\CONFIG.ini");
}
//asm hook for name colors
__declspec(naked) void nameHook()
{
	_asm
	{
		call nameKey
		//move the result into al
		mov al,byte ptr[szColor]
		cmp al,szColor0
		je _nameExit
		cmp al,szColor1
		je _name1
		cmp al,szColor2
		je _name2
		cmp al,szColor3
		je _name3
		cmp al,szColor4
		je _name4
		cmp al,szColor5
		je _name5
		cmp al,szColor6
		je _name6

		_nameExit:
		mov al,[esi+0x298]
		jmp nameReturn

		_name1:
		mov dword ptr ds:[esp+0x18],0xFF00FFFF //blue
		jmp _nameExit

	        _name2:
		mov dword ptr ds:[esp+0x18],0xFF00FF00 //green
		jmp _nameExit

	        _name3:
		mov dword ptr ds:[esp+0x18],0xFFFFEE00 //yellow
		jmp _nameExit

	        _name4:
		mov dword ptr ds:[esp+0x18],0xFFFFAA00 //orange
		jmp _nameExit

	        _name5:
		mov dword ptr ds:[esp+0x18],0xFFEE00FF //pink
		jmp _nameExit

	        _name6:
		mov dword ptr ds:[esp+0x18],0xFFAA00EE //purple
                jmp _nameExit
	}
}
//main function
void nameFunc() {
	Hook((void*)0x44BA7B, nameHook, 6);
}
