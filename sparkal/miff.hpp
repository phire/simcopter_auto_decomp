// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9c0
long MIFF::GetPresentRecordType() {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x114];
	__asm        jmp    _T1a;
_T1a:
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9e0
long MIFF::GetPresentRecordSize() {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x118];
	__asm        jmp    _T1a;
_T1a:
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca00
long MIFF::GetPresentRecordDataSize() {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x118];
	__asm        sub    eax, 8;
	__asm        jmp    _T1d;
_T1d:
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca30
long MIFF::GetPresentRecordIndex() {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x11C];
	__asm        jmp    _T1a;
_T1a:
}

