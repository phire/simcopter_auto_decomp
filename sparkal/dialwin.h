// Function in module: Dialwin.obj
// FUNCTION: COPTER_D 0x0044fce0
void DialHand::DialHand() {

	this->bHasChangedSinceLastDraw = 0x1;
	this->lCurrentValue = 0x0;
	this->nDialDirection = 0xffffffff;
	this->lMaxValue = 0x2710;
	this->lStartAngle = 0x0;
	this->lDialLength = 0x2;
	this->lDialWidth = 0x1;
	this->fAnglePerValue = 0x3f800000;
	__asm        jmp    _T60;
_T60:
	this->ptPosition.x = 0x0;
	this->ptPosition.y = 0x0;
	__asm        jmp    _T79;
_T79:
	__asm        jmp    _T7e;
_T7e:
	this->ptEndPosition.x = 0x0;
	this->ptEndPosition.y = 0x0;
	__asm        jmp    _T97;
// LINE 342:
_T97:
	this->nColorDial = 0x3f;
// LINE 343:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+8];
	__asm        mov    [ebp-0xC], eax;
	__asm        fild   dword ptr [ebp-0xC];
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x10], eax;
	__asm        fimul  dword ptr [ebp-0x10];
	__asm        mov    eax, this;
	__asm        fmul   dword ptr [eax+0x1C];
	__asm        call   __ftol;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x10];
	__asm        add    ecx, eax;
	__asm        mov    [ebp-4], ecx;
	__asm        mov    eax, [ebp-4];
	__asm        mov    [ebp-0x14], eax;
	__asm        fild   dword ptr [ebp-0x14];
	__asm        fmul   qword ptr ds:[0x58F720];
	__asm        sub    esp, 8;
	__asm        fstp   qword ptr [esp];
	__asm        call   _cos;
	__asm        add    esp, 8;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x14];
	__asm        mov    [ebp-0x18], eax;
	__asm        fimul  dword ptr [ebp-0x18];
	__asm        call   __ftol;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x20];
	__asm        add    ecx, eax;
	__asm        mov    eax, this;
	__asm        mov    [eax+0x28], ecx;
	__asm        mov    eax, this;
	__asm        mov    ebx, [eax+0x24];
	__asm        mov    eax, [ebp-4];
	__asm        mov    [ebp-0x1C], eax;
	__asm        fild   dword ptr [ebp-0x1C];
	__asm        fmul   qword ptr ds:[0x58F720];
	__asm        sub    esp, 8;
	__asm        fstp   qword ptr [esp];
	__asm        call   _sin;
	__asm        add    esp, 8;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x14];
	__asm        mov    [ebp-0x20], eax;
	__asm        fimul  dword ptr [ebp-0x20];
	__asm        call   __ftol;
	__asm        sub    ebx, eax;
	__asm        mov    eax, this;
	__asm        mov    [eax+0x2C], ebx;
	__asm        jmp    _T14c;
// LINE 344:
_T14c:
	return;

	__asm        mov    eax, this;
}

