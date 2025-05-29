// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9c0
long MIFF::GetPresentRecordType() {
// LINE 164:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x114];
	__asm        jmp    near ptr 0x004AC9DA;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9e0
long MIFF::GetPresentRecordSize() {
// LINE 165:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x118];
	__asm        jmp    near ptr 0x004AC9FA;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca00
long MIFF::GetPresentRecordDataSize() {
// LINE 166:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x118];
	__asm        sub    eax, 8;
	__asm        jmp    near ptr 0x004ACA1D;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca30
long MIFF::GetPresentRecordIndex() {
// LINE 167:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x11C];
	__asm        jmp    near ptr 0x004ACA4A;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

