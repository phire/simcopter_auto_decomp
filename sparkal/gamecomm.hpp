// Function in module: Gamecomm.obj
// FUNCTION: COPTER_D 0x0048e8a0
void CGameCommander::SetNewGameApp(/*unpacked*/ class CGameApp *newGameApp) {

	this->myGameApp = newGameApp;
	__asm        jmp    __RETURN;
__RETURN:
}

