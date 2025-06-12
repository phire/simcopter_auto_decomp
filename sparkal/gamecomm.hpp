// Function in module: Gamecomm.obj
// FUNCTION: COPTER_D 0x0048e8a0
void CGameCommander::SetNewGameApp(/*unpacked*/ class CGameApp *newGameApp) {

	__asm        mov    eax, newGameApp;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+8], eax;
	__asm        jmp    _T1a;
_T1a:
}

