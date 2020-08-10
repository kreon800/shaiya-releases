#include "pch.h"

//asm hook for bag icons
void __declspec(naked) bIconHook() {
	__asm {
		push edx //save edx
		//first slot
		mov dl,byte ptr[eax+0x8666E2]
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
		mov dl,byte ptr[eax+0x8666E3]
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
		mov dl,byte ptr[eax+0x8666E4]
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
		mov dl,byte ptr[eax+0x8666E5]
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
		mov dl,byte ptr[eax+0x8666E6]
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
		mov dl,byte ptr[eax+0x8666E7]
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
    		mov eax,dword ptr ss:[esp+0x10]
    		push 0x1
		jmp bIconRet //return

		_fire: //red
	  	pop edx //restore edx
		mov eax,dword ptr ss:[esp+0x10]
		push 0x1
	  	push 0x0
    		lea ebp,dword ptr ds:[edi+0x2C]
    		push edx
    		mov edx,dword ptr ss:[esp+0x20]
    		push ebx
    		push esi
    		push eax
    		push edx
    		push ecx
    		mov ecx,ebp
		call iconRend
		mov ecx,dword ptr ss:[esp+0x10]
    		mov esi,dword ptr ss:[esp+0x14]
		push 0x20 //icon size
		push 0x20 //icon size
		push ecx //position
		push esi //position
		push 0x50FF0000 //overlay color
		call overRend
		add esp,0x14
		jmp bIconJMP

		_water: //blue
	  	pop edx
		mov eax,dword ptr ss:[esp+0x10]
		push 0x1
	  	push 0x0
    		lea ebp,dword ptr ds:[edi+0x2C]
    		push edx
    		mov edx,dword ptr ss:[esp+0x20]
    		push ebx
    		push esi
    		push eax
    		push edx
    		push ecx
    		mov ecx,ebp
		call iconRend
		mov ecx,dword ptr ss:[esp+0x10]
    		mov esi,dword ptr ss:[esp+0x14]
		push 0x20 
		push 0x20 
		push ecx
		push esi
		push 0x5000FFFF
		call overRend
		add esp,0x14
		jmp bIconJMP

		_earth: //green
	  	pop edx
		mov eax,dword ptr ss:[esp+0x10]
		push 0x1
	  	push 0x0
    		lea ebp,dword ptr ds:[edi+0x2C]
    		push edx
    		mov edx,dword ptr ss:[esp+0x20]
    		push ebx
    		push esi
    		push eax
    		push edx
    		push ecx
    		mov ecx,ebp
		call iconRend
		mov ecx,dword ptr ss:[esp+0x10]
    		mov esi,dword ptr ss:[esp+0x14]
		push 0x20 
		push 0x20 
		push ecx
		push esi
		push 0x5000FF00
		call overRend
		add esp,0x14
		jmp bIconJMP

		_wind: //white
	  	pop edx
		mov eax,dword ptr ss:[esp+0x10]
		push 0x1
	  	push 0x0
    		lea ebp,dword ptr ds:[edi+0x2C]
    		push edx
    		mov edx,dword ptr ss:[esp+0x20]
    		push ebx
    		push esi
    		push eax
    		push edx
    		push ecx
    		mov ecx,ebp
		call iconRend
		mov ecx,dword ptr ss:[esp+0x10]
    		mov esi,dword ptr ss:[esp+0x14]
		push 0x20 
		push 0x20 
		push ecx
		push esi
		push 0x50FFFFFF
		call overRend
		add esp,0x14
		jmp bIconJMP
	}
}

//asm hook for skill bar icons
void __declspec(naked) sIconHook() {
	__asm {
		push edx //save edx
		//first slot
		mov dl,byte ptr[esi+0x8666E2]
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
		mov dl,byte ptr[esi+0x8666E3]
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
		mov dl,byte ptr[esi+0x8666E4]
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
		mov dl,byte ptr[esi+0x8666E5]
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
		mov dl,byte ptr[esi+0x8666E6]
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
		mov dl,byte ptr[esi+0x8666E7]
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
		push 0x0
    		push edx
    		push ebx
    		push edi
		jmp sIconRet //return

		_fire: //red
    		pop edx //restore edx
    		push 0x0
    		push edx
    		push ebx
    		push edi
    		push eax
    		push ecx
		mov ecx,dword ptr ss:[esp+0x2C]
		push -0x1
		call iconRend
		mov ecx,dword ptr ss:[esp+0x18]
		mov eax,dword ptr ss:[esp+0x1C]
		push 0x20 //icon size
		push 0x20 //icon size
		push ecx //position
		push eax //position
		push 0x50FF0000 //overlay color
		call overRend
		add esp,0x14
		jmp sIconJMP

		_water: //blue
    		pop edx
    		push 0x0
    		push edx
    		push ebx
    		push edi
    		push eax
    		push ecx
		mov ecx,dword ptr ss:[esp+0x2C]
		push -0x1
		call iconRend
		mov ecx,dword ptr ss:[esp+0x18]
		mov eax,dword ptr ss:[esp+0x1C]
		push 0x20 
		push 0x20 
		push ecx 
		push eax
		push 0x5000FFFF
		call overRend
		add esp,0x14
		jmp sIconJMP

		_earth: //green
    		pop edx
    		push 0x0
    		push edx
    		push ebx
    		push edi
    		push eax
    		push ecx
		mov ecx,dword ptr ss:[esp+0x2C]
		push -0x1
		call iconRend
		mov ecx,dword ptr ss:[esp+0x18]
		mov eax,dword ptr ss:[esp+0x1C]
		push 0x20 
		push 0x20 
		push ecx 
		push eax
		push 0x5000FF00
		call overRend
		add esp,0x14
		jmp sIconJMP

		_wind: //white
    		pop edx
    		push 0x0
    		push edx
    		push ebx
    		push edi
    		push eax
    		push ecx
		mov ecx,dword ptr ss:[esp+0x2C]
		push -0x1
		call iconRend
		mov ecx,dword ptr ss:[esp+0x18]
		mov eax,dword ptr ss:[esp+0x1C]
		push 0x20 
		push 0x20 
		push ecx 
		push eax 
		push 0x50FFFFFF
		call overRend
		add esp,0x14
		jmp sIconJMP
	}
}

//main function
void iconFunc() {
	Hook((void*)0x4F6896, bIconHook, 6);
	Hook((void*)0x4E0395, sIconHook, 5);
}
