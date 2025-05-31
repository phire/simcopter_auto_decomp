// Function in module: gamewin.obj
// FUNCTION: COPTER_D 0x00468020
unsigned long CSparkalWindow::Sleep() {

	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x00468033;
}

// Function in module: gamewin.obj
// FUNCTION: COPTER_D 0x00468040
unsigned long CSparkalWindow::WakeUp() {

	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x00468053;
}

