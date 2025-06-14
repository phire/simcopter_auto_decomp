// Function in module: Graphwin.obj
// FUNCTION: COPTER_D 0x004a7b60
int32_t GraphicWindowManager::IncrementBusyCount() {

	__asm        mov    eax, this;
	__asm        inc    dword ptr [eax+4];
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        jmp    __RETURN;
__RETURN:
}

// Function in module: Graphwin.obj
// FUNCTION: COPTER_D 0x004a7b90
int32_t GraphicWindowManager::DecrementBusyCount() {

	__asm        mov    eax, this;
	__asm        dec    dword ptr [eax+4];
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        jmp    __RETURN;
__RETURN:
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d7e0
void GraphicWindow::SetParent(/*unpacked*/ class GraphicWindow *windowNewParent) {
// LINE 324:
	this-><GraphicWindow+0x3c:4> = windowNewParent;
// LINE 325:
	return;
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d810
void GraphicWindow::SetBorderDrawing(int32_t bNewDrawBorder) {
// LINE 328:
	this-><GraphicWindow+0x6c:4> = bNewDrawBorder;
// LINE 329:
	return;
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d840
void GraphicWindow::SetWindowPosition(/*packed*/ class MPoint& ptNewPosition) {

	__asm        mov    eax, ptNewPosition;
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x10], ecx;
	__asm        mov    [ebp-0xC], eax;
// LINE 336:
	__asm        mov    eax, [ebp-0x10];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x10];
	__asm        mov    [ebp-8], eax;
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x14];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, [ebp-8];
	__asm        mov    ecx, this;
	__asm        add    [ecx+0x10], eax;
	__asm        mov    eax, [ebp-8];
	__asm        mov    ecx, this;
	__asm        add    [ecx+0x18], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    ecx, this;
	__asm        add    [ecx+0x14], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    ecx, this;
	__asm        add    [ecx+0x1C], eax;
	__asm        jmp    _T5b;
// LINE 337:
_T5b:
	return;
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d8b0
int32_t GraphicWindow::IsPointInWindow(long nXPosition, long nYPosition) {
// LINE 364:
	__asm        cmp    nXPosition, 0;
	__asm        jle    _T5e;

	__asm        jmp    _T1b;
_T1b:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x18];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x10];
	__asm        cmp    eax, nXPosition;
	__asm        jle    _T5e;

	__asm        cmp    nYPosition, 0;
	__asm        jle    _T5e;

	__asm        jmp    _T3f;
_T3f:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1C];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x14];
	__asm        cmp    eax, nYPosition;
	__asm        jle    _T5e;

	__asm        mov    eax, 1;
	__asm        jmp    _T60;
_T5e:
	__asm        xor    eax, eax;
_T60:
	__asm        jmp    __RETURN;
// LINE 365:
__RETURN:
}

