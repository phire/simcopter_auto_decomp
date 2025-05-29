// Function in module: scrnbuf.obj
// FUNCTION: COPTER_D 0x0049f710
void ScreenBuffer::SetNewModeType(enum tagModeType nNewCurrentModeType) {
// LINE 42:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, nNewCurrentModeType;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x14E], eax;
	__asm        jmp    near ptr 0x0049F72D;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    4;
}

