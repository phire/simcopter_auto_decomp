// Function in module: Debug.obj
// FUNCTION: COPTER_D 0x004256d0
void execute(char * data) {
// LINE 45:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x14], 0;
	__asm        je     _T28;
// LINE 46:
	this->m_instance->CDebugWindow::HandleDebugCommand(data);
// LINE 47:
_T28:
	return;
}

