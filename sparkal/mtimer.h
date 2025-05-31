// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x00439bd0
void MTimer::MTimer(enum MTimer::TimerResolution nNewTimerResolution) {
	__asm        mov    eax, nNewTimerResolution;
	__asm        mov    ecx, this;
	__asm        mov    [ecx], eax;
// LINE 57:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
// LINE 58:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+8], 0;
// LINE 61:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0xC], 0;
// LINE 62:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        jne    near ptr 0x00439C2C;
// LINE 63:
	__asm        lea    eax, [ebp-0xC];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C3668];
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], eax;
	__asm        jmp    near ptr 0x00439C2C;
// LINE 65:
	__asm        jmp    near ptr 0x00439C31;
	__asm        mov    eax, this;
}

// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x00439c40
void MTimer::SetResolution(enum MTimer::TimerResolution nNewTimerResolution) {
// LINE 88:
	__asm        mov    eax, this;
	__asm        mov    ecx, nNewTimerResolution;
	__asm        cmp    [eax], ecx;
	__asm        je     near ptr 0x00439CB2;
// LINE 89:
	__asm        mov    eax, nNewTimerResolution;
	__asm        mov    ecx, this;
	__asm        mov    [ecx], eax;
// LINE 91:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        jne    near ptr 0x00439C99;
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0xC], 0;
	__asm        jne    near ptr 0x00439C99;
// LINE 92:
	__asm        lea    eax, [ebp-0xC];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C3668];
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], eax;
	__asm        jmp    near ptr 0x00439C99;
// LINE 94:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+8], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
	__asm        jmp    near ptr 0x00439CB2;
// LINE 96:
	__asm        jmp    near ptr 0x00439CB7;
}

