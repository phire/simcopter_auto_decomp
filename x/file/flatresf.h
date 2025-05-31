// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e660
void FlatResFile::FlatResFile() {
	// Couldn't match prolog
// LINE 38:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   0xFFFFFFFF;
	__asm        push   0x55E6D0;
	__asm        mov    eax, fs:[0];
	__asm        push   eax;
	__asm        mov    fs:[0], esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    ecx, this;
	__asm        call   0x0055C270;
	__asm        mov    dword ptr [ebp-4], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0x593508;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x114], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x110], 0;
	__asm        jmp    near ptr 0x0055E6B8;
	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        mov    eax, this;
	__asm        jmp    near ptr 0x0055E6DA;
_L39766:
	__asm        mov    ecx, this;
	__asm        call   0x0055C2BB;
	__asm        ret;
_L39765:
	__asm        mov    eax, 0x596008;
	__asm        jmp    near ptr 0x0056F590;
	__asm        mov    ecx, [ebp-0xC];
	__asm        mov    fs:[0], ecx;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

