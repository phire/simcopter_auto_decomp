// Function in module: Debug.obj
// FUNCTION: COPTER_D 0x004256d0
void execute(char * data) {
// LINE 44:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 45:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x14], 0;
	__asm        je     near ptr 0x004256F8;
// LINE 46:
	__asm        mov    eax, data;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, [eax+0x14];
	__asm        call   0x00422280;
// LINE 47:
	__asm        jmp    near ptr 0x004256FD;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    4;
}

