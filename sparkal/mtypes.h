// Function in module: Catalog.obj
// FUNCTION: COPTER_D 0x0047b5e0
void MPoint::MPoint() {

	__asm        jmp    near ptr 0x0047B5F1;

	__asm        jmp    near ptr 0x0047B5F6;

	__asm        mov    eax, this;
}

// Function in module: Dialwin.obj
// FUNCTION: COPTER_D 0x0044fc60
void MRect::NormalizeRect() {
	long nTemp;

// LINE 592:
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx];
	__asm        cmp    [eax+8], ecx;
	__asm        jge    near ptr 0x0044FC99;
// LINE 593:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    nTemp, eax;
// LINE 594:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+8];
	__asm        mov    ecx, this;
	__asm        mov    [ecx], eax;
// LINE 595:
	__asm        mov    eax, nTemp;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+8], eax;
// LINE 597:
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0xC];
	__asm        cmp    [eax+4], ecx;
	__asm        jle    near ptr 0x0044FCC9;
// LINE 598:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    nTemp, eax;
// LINE 599:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
// LINE 600:
	__asm        mov    eax, nTemp;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], eax;
// LINE 602:
	__asm        jmp    near ptr 0x0044FCCE;
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040dc80
void MRect::MRect() {

	__asm        jmp    near ptr 0x0040DC91;

	__asm        jmp    near ptr 0x0040DC96;

	__asm        mov    eax, this;
}

