// Function in module: ddbuffer.obj
// FUNCTION: COPTER_D 0x00471570
void IFlatImage::SetTransparentColor(int32_t enable, long paletteIndex) {
// LINE 40:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        jmp    near ptr 0x00471581;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    8;
}

