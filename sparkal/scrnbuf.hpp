// Function in module: scrnbuf.obj
// FUNCTION: COPTER_D 0x0049f710
void ScreenBuffer::SetNewModeType(enum tagModeType nNewCurrentModeType) {

	__asm        mov    eax, nNewCurrentModeType;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x14E], eax;
	__asm        jmp    near ptr 0x0049F72D;
}

