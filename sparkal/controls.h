// Function in module: scontrols.obj
// FUNCTION: COPTER_D 0x00471d20
int32_t ButtonWindow::GetState() {
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x74];
	__asm        jmp    near ptr 0x00471D37;
}

