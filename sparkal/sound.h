// Function in module: sound.obj
// FUNCTION: COPTER_D 0x00431b00
int32_t DigitalSound::GetSoundType() {
// LINE 212:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, 1;
	__asm        jmp    near ptr 0x00431B16;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

