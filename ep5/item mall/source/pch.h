#pragma once

#define WIN32_LEAN_AND_MEAN

#include <sdkddkver.h>
#include <windows.h>

BOOL Hook(void * pAddr, void * pNAddr, int len = 5);
DWORD __stdcall ItemMallProc(_In_ LPVOID lpParameter);
void ItemMallFix();
