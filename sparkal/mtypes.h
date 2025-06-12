// Function in module: Catalog.obj
// FUNCTION: COPTER_D 0x0047b5e0
void MPoint::MPoint() {

	__asm        jmp    _T11;
_T11:
	return;
_T16:
	__asm        mov    eax, this;
}

// Function in module: Dialwin.obj
// FUNCTION: COPTER_D 0x0044fc60
void MRect::NormalizeRect() {
	/*bp-0x4*/   long nTemp;

// LINE 592:
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx];
	__asm        cmp    [eax+8], ecx;
	__asm        jge    _T39;
// LINE 593:
	nTemp = this->left;
// LINE 594:
	this->left = this->right;
// LINE 595:
	this->right = nTemp;
// LINE 597:
_T39:
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0xC];
	__asm        cmp    [eax+4], ecx;
	__asm        jle    _T69;
// LINE 598:
	nTemp = this->top;
// LINE 599:
	this->top = this->bottom;
// LINE 600:
	this->bottom = nTemp;
// LINE 602:
_T69:
	return;
_T6e:
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040dc80
void MRect::MRect() {

	__asm        jmp    _T11;
_T11:
	return;
_T16:
	__asm        mov    eax, this;
}

