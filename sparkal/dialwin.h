// Function in module: Dialwin.obj
// FUNCTION: COPTER_D 0x0044fce0
void DialHand::DialHand() {

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 1;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+8], 0xFFFFFFFF;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0xC], 0x2710;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x10], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x14], 2;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x18], 1;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x1C], 0x3F800000;
	__asm        jmp    _T60;
_T60:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x20], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x24], 0;
	__asm        jmp    _T79;
_T79:
	__asm        jmp    _T7e;
_T7e:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x28], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x2C], 0;
	__asm        jmp    _T97;
// LINE 342:
_T97:
	this->nColorDial = 0x3f;
// LINE 343:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+8];
	__asm        mov    [ebp-0xC], eax;
	__asm        fild   dword ptr [ebp-0xC];
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x10], eax;
	__asm        fimul  dword ptr [ebp-0x10];
	__asm        mov    eax, this;
	__asm        fmul   dword ptr [eax+0x1C];
	__asm        call   0x0056EBE8;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x10];
	__asm        add    ecx, eax;
	__asm        mov    [ebp-4], ecx;
	__asm        mov    eax, [ebp-4];
	__asm        mov    [ebp-0x14], eax;
	__asm        fild   dword ptr [ebp-0x14];
	__asm        fmul   qword ptr ds:[0x58F720];
	__asm        sub    esp, 8;
	__asm        fstp   qword ptr [esp];
	__asm        call   0x0056F32A;
	__asm        add    esp, 8;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x14];
	__asm        mov    [ebp-0x18], eax;
	__asm        fimul  dword ptr [ebp-0x18];
	__asm        call   0x0056EBE8;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x20];
	__asm        add    ecx, eax;
	__asm        mov    eax, this;
	__asm        mov    [eax+0x28], ecx;
	__asm        mov    eax, this;
	__asm        mov    ebx, [eax+0x24];
	__asm        mov    eax, [ebp-4];
	__asm        mov    [ebp-0x1C], eax;
	__asm        fild   dword ptr [ebp-0x1C];
	__asm        fmul   qword ptr ds:[0x58F720];
	__asm        sub    esp, 8;
	__asm        fstp   qword ptr [esp];
	__asm        call   0x0056F320;
	__asm        add    esp, 8;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x14];
	__asm        mov    [ebp-0x20], eax;
	__asm        fimul  dword ptr [ebp-0x20];
	__asm        call   0x0056EBE8;
	__asm        sub    ebx, eax;
	__asm        mov    eax, this;
	__asm        mov    [eax+0x2C], ebx;
	__asm        jmp    _T14c;
// LINE 344:
_T14c:
	__asm        jmp    _T151;
_T151:
	__asm        mov    eax, this;
}

