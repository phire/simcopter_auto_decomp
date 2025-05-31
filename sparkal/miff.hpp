// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9c0
long MIFF::GetPresentRecordType() {
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x114];
	__asm        jmp    near ptr 0x004AC9DA;
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9e0
long MIFF::GetPresentRecordSize() {
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x118];
	__asm        jmp    near ptr 0x004AC9FA;
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca00
long MIFF::GetPresentRecordDataSize() {
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x118];
	__asm        sub    eax, 8;
	__asm        jmp    near ptr 0x004ACA1D;
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca30
long MIFF::GetPresentRecordIndex() {
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x11C];
	__asm        jmp    near ptr 0x004ACA4A;
}

