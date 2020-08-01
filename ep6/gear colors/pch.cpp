#include "pch.h"

//asm hook for bag icons
void __declspec(naked) bIconHook() {
	__asm {
		push edx //save edx
		//first slot
		mov dl,byte ptr[eax+0x90E2FE]
		cmp dl,0x43 //blaze-burn lv1
		je _fire
		cmp dl,0x92 //blaze-light lv1
		je _fire
		cmp dl,0xB5 //blaze-burn lv2
		je _fire
		cmp dl,0xB9 //blaze-light lv2
		je _fire
		cmp dl,0xB1 //phoenix
		je _fire
		cmp dl,0x44 //water-fear lv1
		je _water
		cmp dl,0x93 //water-light lv1
		je _water
		cmp dl,0xB6 //water-fear lv2
		je _water
		cmp dl,0xBA //water-light lv2
		je _water
		cmp dl,0xB2 //hydra
		je _water
		cmp dl,0x45 //earth-shock lv1
		je _earth
		cmp dl,0x94 //earth-panic lv1
		je _earth
		cmp dl,0xB7 //earth-shock lv2
		je _earth
		cmp dl,0xBB //earth-panic lv2
		je _earth
		cmp dl,0xB3 //terra
		je _earth
		cmp dl,0x46 //wind-gale lv1
		je _wind
		cmp dl,0x95 //wind-scroll lv1
		je _wind
		cmp dl,0xB8 //wind-gale lv2
		je _wind
		cmp dl,0xBC //wind-scroll lv2
		je _wind
		cmp dl,0xB4 //storm
		je _wind
		//second slot
		mov dl,byte ptr[eax+0x90E2FF]
		cmp dl,0x43 //blaze-burn lv1
		je _fire
		cmp dl,0x92 //blaze-light lv1
		je _fire
		cmp dl,0xB5 //blaze-burn lv2
		je _fire
		cmp dl,0xB9 //blaze-light lv2
		je _fire
		cmp dl,0xB1 //phoenix
		je _fire
		cmp dl,0x44 //water-fear lv1
		je _water
		cmp dl,0x93 //water-light lv1
		je _water
		cmp dl,0xB6 //water-fear lv2
		je _water
		cmp dl,0xBA //water-light lv2
		je _water
		cmp dl,0xB2 //hydra
		je _water
		cmp dl,0x45 //earth-shock lv1
		je _earth
		cmp dl,0x94 //earth-panic lv1
		je _earth
		cmp dl,0xB7 //earth-shock lv2
		je _earth
		cmp dl,0xBB //earth-panic lv2
		je _earth
		cmp dl,0xB3 //terra
		je _earth
		cmp dl,0x46 //wind-gale lv1
		je _wind
		cmp dl,0x95 //wind-scroll lv1
		je _wind
		cmp dl,0xB8 //wind-gale lv2
		je _wind
		cmp dl,0xBC //wind-scroll lv2
		je _wind
		cmp dl,0xB4 //storm
		je _wind
		//third slot
		mov dl,byte ptr[eax+0x90E300]
		cmp dl,0x43 //blaze-burn lv1
		je _fire
		cmp dl,0x92 //blaze-light lv1
		je _fire
		cmp dl,0xB5 //blaze-burn lv2
		je _fire
		cmp dl,0xB9 //blaze-light lv2
		je _fire
		cmp dl,0xB1 //phoenix
		je _fire
		cmp dl,0x44 //water-fear lv1
		je _water
		cmp dl,0x93 //water-light lv1
		je _water
		cmp dl,0xB6 //water-fear lv2
		je _water
		cmp dl,0xBA //water-light lv2
		je _water
		cmp dl,0xB2 //hydra
		je _water
		cmp dl,0x45 //earth-shock lv1
		je _earth
		cmp dl,0x94 //earth-panic lv1
		je _earth
		cmp dl,0xB7 //earth-shock lv2
		je _earth
		cmp dl,0xBB //earth-panic lv2
		je _earth
		cmp dl,0xB3 //terra
		je _earth
		cmp dl,0x46 //wind-gale lv1
		je _wind
		cmp dl,0x95 //wind-scroll lv1
		je _wind
		cmp dl,0xB8 //wind-gale lv2
		je _wind
		cmp dl,0xBC //wind-scroll lv2
		je _wind
		cmp dl,0xB4 //storm
		je _wind
		//fourth slot
		mov dl,byte ptr[eax+0x90E301]
		cmp dl,0x43 //blaze-burn lv1
		je _fire
		cmp dl,0x92 //blaze-light lv1
		je _fire
		cmp dl,0xB5 //blaze-burn lv2
		je _fire
		cmp dl,0xB9 //blaze-light lv2
		je _fire
		cmp dl,0xB1 //phoenix
		je _fire
		cmp dl,0x44 //water-fear lv1
		je _water
		cmp dl,0x93 //water-light lv1
		je _water
		cmp dl,0xB6 //water-fear lv2
		je _water
		cmp dl,0xBA //water-light lv2
		je _water
		cmp dl,0xB2 //hydra
		je _water
		cmp dl,0x45 //earth-shock lv1
		je _earth
		cmp dl,0x94 //earth-panic lv1
		je _earth
		cmp dl,0xB7 //earth-shock lv2
		je _earth
		cmp dl,0xBB //earth-panic lv2
		je _earth
		cmp dl,0xB3 //terra
		je _earth
		cmp dl,0x46 //wind-gale lv1
		je _wind
		cmp dl,0x95 //wind-scroll lv1
		je _wind
		cmp dl,0xB8 //wind-gale lv2
		je _wind
		cmp dl,0xBC //wind-scroll lv2
		je _wind
		cmp dl,0xB4 //storm
		je _wind
		//fifth slot
		mov dl,byte ptr[eax+0x90E302]
		cmp dl,0x43 //blaze-burn lv1
		je _fire
		cmp dl,0x92 //blaze-light lv1
		je _fire
		cmp dl,0xB5 //blaze-burn lv2
		je _fire
		cmp dl,0xB9 //blaze-light lv2
		je _fire
		cmp dl,0xB1 //phoenix
		je _fire
		cmp dl,0x44 //water-fear lv1
		je _water
		cmp dl,0x93 //water-light lv1
		je _water
		cmp dl,0xB6 //water-fear lv2
		je _water
		cmp dl,0xBA //water-light lv2
		je _water
		cmp dl,0xB2 //hydra
		je _water
		cmp dl,0x45 //earth-shock lv1
		je _earth
		cmp dl,0x94 //earth-panic lv1
		je _earth
		cmp dl,0xB7 //earth-shock lv2
		je _earth
		cmp dl,0xBB //earth-panic lv2
		je _earth
		cmp dl,0xB3 //terra
		je _earth
		cmp dl,0x46 //wind-gale lv1
		je _wind
		cmp dl,0x95 //wind-scroll lv1
		je _wind
		cmp dl,0xB8 //wind-gale lv2
		je _wind
		cmp dl,0xBC //wind-scroll lv2
		je _wind
		cmp dl,0xB4 //storm
		je _wind
		//sixth slot
		mov dl,byte ptr[eax+0x90E303]
		cmp dl,0x43 //blaze-burn lv1
		je _fire
		cmp dl,0x92 //blaze-light lv1
		je _fire
		cmp dl,0xB5 //blaze-burn lv2
		je _fire
		cmp dl,0xB9 //blaze-light lv2
		je _fire
		cmp dl,0xB1 //phoenix
		je _fire
		cmp dl,0x44 //water-fear lv1
		je _water
		cmp dl,0x93 //water-light lv1
		je _water
		cmp dl,0xB6 //water-fear lv2
		je _water
		cmp dl,0xBA //water-light lv2
		je _water
		cmp dl,0xB2 //hydra
		je _water
		cmp dl,0x45 //earth-shock lv1
		je _earth
		cmp dl,0x94 //earth-panic lv1
		je _earth
		cmp dl,0xB7 //earth-shock lv2
		je _earth
		cmp dl,0xBB //earth-panic lv2
		je _earth
		cmp dl,0xB3 //terra
		je _earth
		cmp dl,0x46 //wind-gale lv1
		je _wind
		cmp dl,0x95 //wind-scroll lv1
		je _wind
		cmp dl,0xB8 //wind-gale lv2
		je _wind
		cmp dl,0xBC //wind-scroll lv2
		je _wind
		cmp dl,0xB4 //storm
		je _wind
		pop edx //restore edx
		//original code
		mov edx,dword ptr ss:[esp+0x1C]
		mov eax,dword ptr ss:[esp+0x10]
		jmp bIconRet //return

		_fire: //red
	        pop edx //restore edx
		mov edx,dword ptr ss:[esp+0x1C]
		mov eax,dword ptr ss:[esp+0x10]
		push 0x1
	        push 0x0
		push edx
		push ebx
		push edi
		push eax
		push ebp
		push ecx
		lea ecx,dword ptr ds:[esi+0x30]
		call iconRend
		mov ecx,dword ptr ss:[esp+0x10]
		push 0x20 //icon size
		push 0x20 //icon size
		push ecx //position
		push ebp //position
		push 0x50FF0000 //overlay color
		call overRend
		add esp,0x14
		jmp bIconJMP

		_water: //blue
		pop edx
		mov edx,dword ptr ss:[esp+0x1C]
		mov eax,dword ptr ss:[esp+0x10]
		push 0x1
		push 0x0
		push edx
		push ebx
		push edi
		push eax
		push ebp
		push ecx
		lea ecx,dword ptr ds:[esi+0x30]
		call iconRend
		mov ecx,dword ptr ss:[esp+0x10]
		push 0x20
		push 0x20
		push ecx
		push ebp
		push 0x5000FFFF
		call overRend
		add esp,0x14
		jmp bIconJMP

		_earth: //green
		pop edx
		mov edx,dword ptr ss:[esp+0x1C]
		mov eax,dword ptr ss:[esp+0x10]
		push 0x1
		push 0x0
		push edx
		push ebx
		push edi
		push eax
		push ebp
		push ecx
		lea ecx,dword ptr ds:[esi+0x30]
		call iconRend
		mov ecx,dword ptr ss:[esp+0x10]
		push 0x20
		push 0x20
		push ecx
		push ebp
		push 0x5000FF00
		call overRend
		add esp,0x14
		jmp bIconJMP

		_wind: //white
		pop edx
		mov edx,dword ptr ss:[esp+0x1C]
		mov eax,dword ptr ss:[esp+0x10]
		push 0x1
		push 0x0
		push edx
		push ebx
		push edi
		push eax
		push ebp
		push ecx
		lea ecx,dword ptr ds:[esi+0x30]
		call iconRend
		mov ecx,dword ptr ss:[esp+0x10]
		push 0x20
		push 0x20
		push ecx
		push ebp
		push 0x50FFFFFF
		call overRend
		add esp,0x14
		jmp bIconJMP
	}
}

//asm hook for skill bar icons
void __declspec(naked) sIconHook() {
	__asm {
		push eax
		//first slot
		mov al,byte ptr[esi+0x90E2FE]
		cmp al,0x43 //blaze-burn lv1
		je _fire
		cmp al,0x92 //blaze-light lv1
		je _fire
		cmp al,0xB5 //blaze-burn lv2
		je _fire
		cmp al,0xB9 //blaze-light lv2
		je _fire
		cmp al,0xB1 //phoenix
		je _fire
		cmp al,0x44 //water-fear lv1
		je _water
		cmp al,0x93 //water-light lv1
		je _water
		cmp al,0xB6 //water-fear lv2
		je _water
		cmp al,0xBA //water-light lv2
		je _water
		cmp al,0xB2 //hydra
		je _water
		cmp al,0x45 //earth-shock lv1
		je _earth
		cmp al,0x94 //earth-panic lv1
		je _earth
		cmp al,0xB7 //earth-shock lv2
		je _earth
		cmp al,0xBB //earth-panic lv2
		je _earth
		cmp al,0xB3 //terra
		je _earth
		cmp al,0x46 //wind-gale lv1
		je _wind
		cmp al,0x95 //wind-scroll lv1
		je _wind
		cmp al,0xB8 //wind-gale lv2
		je _wind
		cmp al,0xBC //wind-scroll lv2
		je _wind
		cmp al,0xB4 //storm
		je _wind
		//second slot
		mov al,byte ptr[esi+0x90E2FF]
		cmp al,0x43 //blaze-burn lv1
		je _fire
		cmp al,0x92 //blaze-light lv1
		je _fire
		cmp al,0xB5 //blaze-burn lv2
		je _fire
		cmp al,0xB9 //blaze-light lv2
		je _fire
		cmp al,0xB1 //phoenix
		je _fire
		cmp al,0x44 //water-fear lv1
		je _water
		cmp al,0x93 //water-light lv1
		je _water
		cmp al,0xB6 //water-fear lv2
		je _water
		cmp al,0xBA //water-light lv2
		je _water
		cmp al,0xB2 //hydra
		je _water
		cmp al,0x45 //earth-shock lv1
		je _earth
		cmp al,0x94 //earth-panic lv1
		je _earth
		cmp al,0xB7 //earth-shock lv2
		je _earth
		cmp al,0xBB //earth-panic lv2
		je _earth
		cmp al,0xB3 //terra
		je _earth
		cmp al,0x46 //wind-gale lv1
		je _wind
		cmp al,0x95 //wind-scroll lv1
		je _wind
		cmp al,0xB8 //wind-gale lv2
		je _wind
		cmp al,0xBC //wind-scroll lv2
		je _wind
		cmp al,0xB4 //storm
		je _wind
		//third slot
		mov al,byte ptr[esi+0x90E300]
		cmp al,0x43 //blaze-burn lv1
		je _fire
		cmp al,0x92 //blaze-light lv1
		je _fire
		cmp al,0xB5 //blaze-burn lv2
		je _fire
		cmp al,0xB9 //blaze-light lv2
		je _fire
		cmp al,0xB1 //phoenix
		je _fire
		cmp al,0x44 //water-fear lv1
		je _water
		cmp al,0x93 //water-light lv1
		je _water
		cmp al,0xB6 //water-fear lv2
		je _water
		cmp al,0xBA //water-light lv2
		je _water
		cmp al,0xB2 //hydra
		je _water
		cmp al,0x45 //earth-shock lv1
		je _earth
		cmp al,0x94 //earth-panic lv1
		je _earth
		cmp al,0xB7 //earth-shock lv2
		je _earth
		cmp al,0xBB //earth-panic lv2
		je _earth
		cmp al,0xB3 //terra
		je _earth
		cmp al,0x46 //wind-gale lv1
		je _wind
		cmp al,0x95 //wind-scroll lv1
		je _wind
		cmp al,0xB8 //wind-gale lv2
		je _wind
		cmp al,0xBC //wind-scroll lv2
		je _wind
		cmp al,0xB4 //storm
		je _wind
		//fourth slot
		mov al,byte ptr[esi+0x90E301]
		cmp al,0x43 //blaze-burn lv1
		je _fire
		cmp al,0x92 //blaze-light lv1
		je _fire
		cmp al,0xB5 //blaze-burn lv2
		je _fire
		cmp al,0xB9 //blaze-light lv2
		je _fire
		cmp al,0xB1 //phoenix
		je _fire
		cmp al,0x44 //water-fear lv1
		je _water
		cmp al,0x93 //water-light lv1
		je _water
		cmp al,0xB6 //water-fear lv2
		je _water
		cmp al,0xBA //water-light lv2
		je _water
		cmp al,0xB2 //hydra
		je _water
		cmp al,0x45 //earth-shock lv1
		je _earth
		cmp al,0x94 //earth-panic lv1
		je _earth
		cmp al,0xB7 //earth-shock lv2
		je _earth
		cmp al,0xBB //earth-panic lv2
		je _earth
		cmp al,0xB3 //terra
		je _earth
		cmp al,0x46 //wind-gale lv1
		je _wind
		cmp al,0x95 //wind-scroll lv1
		je _wind
		cmp al,0xB8 //wind-gale lv2
		je _wind
		cmp al,0xBC //wind-scroll lv2
		je _wind
		cmp al,0xB4 //storm
		je _wind
		//fifth slot
		mov al,byte ptr[esi+0x90E302]
		cmp al,0x43 //blaze-burn lv1
		je _fire
		cmp al,0x92 //blaze-light lv1
		je _fire
		cmp al,0xB5 //blaze-burn lv2
		je _fire
		cmp al,0xB9 //blaze-light lv2
		je _fire
		cmp al,0xB1 //phoenix
		je _fire
		cmp al,0x44 //water-fear lv1
		je _water
		cmp al,0x93 //water-light lv1
		je _water
		cmp al,0xB6 //water-fear lv2
		je _water
		cmp al,0xBA //water-light lv2
		je _water
		cmp al,0xB2 //hydra
		je _water
		cmp al,0x45 //earth-shock lv1
		je _earth
		cmp al,0x94 //earth-panic lv1
		je _earth
		cmp al,0xB7 //earth-shock lv2
		je _earth
		cmp al,0xBB //earth-panic lv2
		je _earth
		cmp al,0xB3 //terra
		je _earth
		cmp al,0x46 //wind-gale lv1
		je _wind
		cmp al,0x95 //wind-scroll lv1
		je _wind
		cmp al,0xB8 //wind-gale lv2
		je _wind
		cmp al,0xBC //wind-scroll lv2
		je _wind
		cmp al,0xB4 //storm
		je _wind
		//sixth slot
		mov al,byte ptr[esi+0x90E303]
		cmp al,0x43 //blaze-burn lv1
		je _fire
		cmp al,0x92 //blaze-light lv1
		je _fire
		cmp al,0xB5 //blaze-burn lv2
		je _fire
		cmp al,0xB9 //blaze-light lv2
		je _fire
		cmp al,0xB1 //phoenix
		je _fire
		cmp al,0x44 //water-fear lv1
		je _water
		cmp al,0x93 //water-light lv1
		je _water
		cmp al,0xB6 //water-fear lv2
		je _water
		cmp al,0xBA //water-light lv2
		je _water
		cmp al,0xB2 //hydra
		je _water
		cmp al,0x45 //earth-shock lv1
		je _earth
		cmp al,0x94 //earth-panic lv1
		je _earth
		cmp al,0xB7 //earth-shock lv2
		je _earth
		cmp al,0xBB //earth-panic lv2
		je _earth
		cmp al,0xB3 //terra
		je _earth
		cmp al,0x46 //wind-gale lv1
		je _wind
		cmp al,0x95 //wind-scroll lv1
		je _wind
		cmp al,0xB8 //wind-gale lv2
		je _wind
		cmp al,0xBC //wind-scroll lv2
		je _wind
		cmp al,0xB4 //storm
		je _wind
		pop eax
		//original code
		push 0x1
		push 0x0
		push eax
		jmp sIconRet //return

		_fire: //red
		pop eax
		push 0x1
		push 0x0
		push eax
		push ebx
		push ebp
		push ecx
		mov ecx,dword ptr ss:[esp+0x28]
		push edx
		push -0x1
		call iconRend
		//move the positions
		mov eax,dword ptr ss:[esp+0x18]
		mov ecx,dword ptr ss:[esp+0x1C]
		push 0x20 //icon size
		push 0x20 //icon size
		push eax //position
		push ecx //position
		push 0x50FF0000 //overlay color
		call overRend
		add esp,0x14
		jmp sIconJMP

		_water: //blue
		pop eax
		push 0x1
		push 0x0
		push eax
		push ebx
		push ebp
		push ecx
		mov ecx,dword ptr ss:[esp+0x28]
		push edx
		push -0x1
		call iconRend
		mov eax,dword ptr ss:[esp+0x18]
		mov ecx,dword ptr ss:[esp+0x1C]
		push 0x20
		push 0x20
		push eax
		push ecx
		push 0x5000FFFF
		call overRend
		add esp, 0x14
		jmp sIconJMP

		_earth: //green
		pop eax
		push 0x1
		push 0x0
		push eax
		push ebx
		push ebp
		push ecx
		mov ecx,dword ptr ss:[esp+0x28]
		push edx
		push -0x1
		call iconRend
		mov eax,dword ptr ss:[esp+0x18]
		mov ecx,dword ptr ss:[esp+0x1C]
		push 0x20
		push 0x20 
		push eax 
		push ecx 
		push 0x5000FF00
		call overRend
		add esp,0x14
		jmp sIconJMP

		_wind: //white
		pop eax
		push 0x1
		push 0x0
		push eax
		push ebx
		push ebp
		push ecx
		mov ecx,dword ptr ss:[esp+0x28]
		push edx
		push -0x1
		call iconRend
		mov eax,dword ptr ss:[esp+0x18]
		mov ecx,dword ptr ss:[esp+0x1C]
		push 0x20 
		push 0x20 
		push eax 
		push ecx 
		push 0x50FFFFFF
		call overRend
		add esp,0x14
		jmp sIconJMP
	}
}

//main function
void iconFunc() {
	Hook((void*)0x51826D, bIconHook, 8);
	Hook((void*)0x4FFCE3, sIconHook, 5);
}
