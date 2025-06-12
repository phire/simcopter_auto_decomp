// Function in module: Menus.obj
// FUNCTION: COPTER_D 0x0049e290
int32_t UserMenuWindow::GetSelectionIndex() {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0xD4];
	__asm        jmp    _T1a;
_T1a:
}

// Function in module: Menus.obj
// FUNCTION: COPTER_D 0x0049e2b0
int32_t UserMenuWindow::GetSelectionValue() {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x98];
	__asm        mov    ecx, this;
	__asm        add    eax, [ecx+0xD4];
	__asm        jmp    _T23;
_T23:
}

