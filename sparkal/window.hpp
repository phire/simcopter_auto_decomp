// Function in module: gamewin.obj
// FUNCTION: COPTER_D 0x00468020
unsigned long CSparkalWindow::Sleep() {
// LINE 79:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x00468033;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: gamewin.obj
// FUNCTION: COPTER_D 0x00468040
unsigned long CSparkalWindow::WakeUp() {
// LINE 80:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x00468053;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

