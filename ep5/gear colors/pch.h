#ifndef PCH_H
#define PCH_H

#define WIN32_LEAN_AND_MEAN 
#include <sdkddkver.h>
#include <windows.h>
//main function
void iconFunc();
//hook function
BOOL Hook(void * pAddr, void * pNAddr, int len = 5);
/////////////////////////
DWORD iconRend = 0x4A3400;
DWORD overRend = 0x4A2690;
DWORD bIconRet = 0x4F689C;
DWORD bIconJMP = 0x4F68B2;
DWORD sIconRet = 0x4E039A;
DWORD sIconJMP = 0x4E03A7;

#endif
