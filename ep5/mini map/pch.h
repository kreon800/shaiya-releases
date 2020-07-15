#ifndef PCH_H
#define PCH_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

BOOL Hook(void * pAddr, void * pNAddr, int len = 5);
//define the mini map file name as an array of bytes
unsigned char sz110[] = { 0x31, 0x31, 0x30, 0x2E, 0x74, 0x67, 0x61 };
//main function
void mapFunc();
//mini map jump address
DWORD miniReturn1 = 0x4C0D62;
DWORD miniReturn2 = 0x4C0FAF;
//map name jump address
DWORD nameReturn1 = 0x4D3851;
DWORD nameReturn2 = 0x4D2EA2;
DWORD nameReturn3 = 0x4D3851;
//call to read sysmsg-uni.txt
DWORD parseUniTxt = 0x41D4A0;

#endif
