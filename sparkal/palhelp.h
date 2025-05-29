// Function in module: palhelp.obj
// FUNCTION: COPTER_D 0x00497b50
void SparkalPalette::GetRGBValue(int32_t nIndex, struct SparkalColor& colorValue) {
// LINE 107:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 108:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, nIndex;
	__asm        mov    eax, [eax+ecx*4];
	__asm        mov    ecx, colorValue;
	__asm        mov    [ecx], eax;
// LINE 109:
	__asm        jmp    near ptr 0x00497B72;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    8;
}

