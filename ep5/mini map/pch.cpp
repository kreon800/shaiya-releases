#include "pch.h"

//the asm hook for new mini maps
__declspec(naked) void miniHook()
{
	_asm
	{
		cmp ebx,0x6E //mapid 110
		je _map110
		//original code
		//doesn't support mini maps above 109
		cmp ebx,0x6D //cmp mapid 109
		mov dword ptr ds:[edi+0x07E0],0x01
		/*continues to load the map index and
                uses a jump table to load mini maps*/
		jmp miniReturn1
		_map110:
		//move the name of the tga into edx
		mov edx,dword ptr ds:[sz110]
		mov eax,dword ptr ds:[0x6C25E4]
		mov dword ptr[esp+0x0C],edx
		mov dword ptr[esp+0x10],eax
		jmp miniReturn2
	}
}
//the asm hook for new map names
__declspec(naked) void nameHook()
{
	_asm
	{
		cmp esi,0x6E //mapid 110
		je _map110
		//original code
		//doesn't support map names above 108
		cmp esi,0x6C //cmp mapid 108
		ja _map108 //jump if above id 108
		/*continues to parse lines from the
		sysmsg-uni.txt for the map names and
		uses a jump table to load the names*/
		jmp nameReturn2
		_map110:
		/*create new lines in the sysmsg-uni.txt 
		for pushing the names of your new maps*/
		push 0x278C //sysmsg-uni.txt line #10124
		call parseUniTxt //parses sysmsg-uni.txt
		mov edx,dword ptr ss:[esp+0x18]
		add esp,0x04
		_strLoop:
		//loop through the length of the string
		mov cl,byte ptr ds:[eax]
		inc eax
		mov byte ptr ds:[edx],cl
		inc edx
		test cl,cl
		//loop again if the result is not zero
		jnz _strLoop
		pop esi
		add esp,0x0C
		retn 0x08
		jmp nameReturn3
		_map108: //continue to original code
	        jmp nameReturn1
	}
}
//the main function
void mapFunc() {
	Hook((void*)0x4C0D55, miniHook, 13);
	Hook((void*)0x4D2E99, nameHook, 9);
}
