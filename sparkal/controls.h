// Function in module: scontrols.obj
// FUNCTION: COPTER_D 0x00471d20
int32_t ButtonWindow::GetState() {
// LINE 127:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x74];
	__asm        jmp    near ptr 0x00471D37;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

