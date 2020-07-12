#pragma once

#define WIN32_LEAN_AND_MEAN

#include <sdkddkver.h>
#include <windows.h>
#include <atlstr.h>
#include <stdafx.h>
#include <comdef.h>
#include <vector>

void* Hook(DWORD address, int length, DWORD target);
DWORD __stdcall ThreadProc1(_In_ LPVOID lpParameter);
DWORD __stdcall ThreadProc2(_In_ LPVOID lpParameter);