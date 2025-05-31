// Function in module: Graphwin.obj
// FUNCTION: COPTER_D 0x004a7b60
int32_t GraphicWindowManager::IncrementBusyCount() {
	__asm        mov    eax, this;
	__asm        inc    dword ptr [eax+4];
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        jmp    near ptr 0x004A7B7D;
}

// Function in module: Graphwin.obj
// FUNCTION: COPTER_D 0x004a7b90
int32_t GraphicWindowManager::DecrementBusyCount() {
	__asm        mov    eax, this;
	__asm        dec    dword ptr [eax+4];
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        jmp    near ptr 0x004A7BAD;
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d7e0
void  GraphicWindow::SetParent(class GraphicWindow* windowNewParent) {
// LINE 324:
	__asm        mov    eax, windowNewParent;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x3C], eax;
// LINE 325:
	__asm        jmp    near ptr 0x0040D7FA;
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d810
void  GraphicWindow::SetBorderDrawing(int32_t bNewDrawBorder) {
// LINE 328:
	__asm        mov    eax, bNewDrawBorder;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x6C], eax;
// LINE 329:
	__asm        jmp    near ptr 0x0040D82A;
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d840
void  GraphicWindow::SetWindowPosition(class MPoint& ptNewPosition) {
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
	__asm        jmp    near ptr 0x0040D89B;
// LINE 337:
	__asm        jmp    near ptr 0x0040D8A0;
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d8b0
int  GraphicWindow::IsPointInWindow(long nXPosition, long nYPosition) {
// LINE 364:
	__asm        cmp    nXPosition, 0;
	__asm        jle    near ptr 0x0040D90E;
	__asm        jmp    near ptr 0x0040D8CB;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x18];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x10];
	__asm        cmp    eax, nXPosition;
	__asm        jle    near ptr 0x0040D90E;
	__asm        cmp    nYPosition, 0;
	__asm        jle    near ptr 0x0040D90E;
	__asm        jmp    near ptr 0x0040D8EF;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1C];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x14];
	__asm        cmp    eax, nYPosition;
	__asm        jle    near ptr 0x0040D90E;
	__asm        mov    eax, 1;
	__asm        jmp    near ptr 0x0040D910;
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x0040D915;
// LINE 365:
}

