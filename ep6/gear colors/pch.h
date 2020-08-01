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
DWORD bIconRet = 0x518275;
DWORD iconRend = 0x4B7240;
DWORD overRend = 0x4B6180;
DWORD bIconJMP = 0x518287;
DWORD sIconRet = 0x4FFCE8;
DWORD sIconJMP = 0x4FFCF7;

#endif
