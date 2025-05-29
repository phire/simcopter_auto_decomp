// Function in module: Menus.obj
// FUNCTION: COPTER_D 0x0049e290
int32_t UserMenuWindow::GetSelectionIndex() {
// LINE 71:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0xD4];
	__asm        jmp    near ptr 0x0049E2AA;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Menus.obj
// FUNCTION: COPTER_D 0x0049e2b0
int32_t UserMenuWindow::GetSelectionValue() {
// LINE 72:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x98];
	__asm        mov    ecx, this;
	__asm        add    eax, [ecx+0xD4];
	__asm        jmp    near ptr 0x0049E2D3;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

