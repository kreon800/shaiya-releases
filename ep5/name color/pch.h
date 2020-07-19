#ifndef PCH_H
#define PCH_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
//hook function
BOOL Hook(void * pAddr, void * pNAddr, int len = 5);
//main function
void nameFunc();
//result buffer
char szColor[255];
//return values
unsigned char szColor0[] = "0";
unsigned char szColor1[] = "1";
unsigned char szColor2[] = "2";
unsigned char szColor3[] = "3";
unsigned char szColor4[] = "4";
unsigned char szColor5[] = "5";
unsigned char szColor6[] = "6";
//game.exe address
DWORD nameReturn = 0x44BA81;

#endif
