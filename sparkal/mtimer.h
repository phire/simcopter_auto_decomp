// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x00439bd0
void MTimer::MTimer(enum MTimer::TimerResolution nNewTimerResolution) {

	this->nTimerResolution = nNewTimerResolution;
// LINE 57:
	this->lStartTime = 0x0;
// LINE 58:
	this->lTotalElapsedTime = 0x0;
// LINE 61:
	this->lFrequency = 0x0;
// LINE 62:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        jne    _T5c;
// LINE 63:
	__asm        lea    eax, [ebp-0xC];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C3668];
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], eax;
	__asm        jmp    _T5c;
// LINE 65:
_T5c:
	__asm        jmp    _T61;
_T61:
	__asm        mov    eax, this;
}

// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x00439c40
void MTimer::SetResolution(enum MTimer::TimerResolution nNewTimerResolution) {
// LINE 88:
	__asm        mov    eax, this;
	__asm        mov    ecx, nNewTimerResolution;
	__asm        cmp    [eax], ecx;
	__asm        je     _T72;
// LINE 89:
	this->nTimerResolution = nNewTimerResolution;
// LINE 91:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        jne    _T59;

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0xC], 0;
	__asm        jne    _T59;
// LINE 92:
	__asm        lea    eax, [ebp-0xC];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C3668];
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], eax;
	__asm        jmp    _T59;
// LINE 94:
_T59:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+8], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
	__asm        jmp    _T72;
// LINE 96:
_T72:
	__asm        jmp    _T77;
_T77:
}

