// Function in module: scrnbuf.obj
// FUNCTION: COPTER_D 0x0049f710
void ScreenBuffer::SetNewModeType(enum tagModeType nNewCurrentModeType) {

	this->nCurrentModeType = nNewCurrentModeType;
	__asm        jmp    __RETURN;
__RETURN:
}

