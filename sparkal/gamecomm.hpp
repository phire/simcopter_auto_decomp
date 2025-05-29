// Function in module: Gamecomm.obj
// FUNCTION: COPTER_D 0x0048e8a0
void CGameCommander::SetNewGameApp(class CGameApp* newGameApp) {
// LINE 197:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, newGameApp;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+8], eax;
	__asm        jmp    near ptr 0x0048E8BA;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    4;
}

