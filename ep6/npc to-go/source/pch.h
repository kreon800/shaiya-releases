#ifndef PCH_H
#define PCH_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

void npcFunc();
BOOL Hook(void * pAddr, void * pNAddr, int len = 5);
//store the npc window ids in an array of integers
int npcArray[6] = { 102, 121, 103, 110, 111, 101 };
//define call and return addresses in the game.exe
DWORD npcCall = 0x51C070;
DWORD npcReturn = 0x522165;

#endif
