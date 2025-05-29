// Function in module: Ylingo.obj
// FUNCTION: COPTER_D 0x00560bb0
unsigned short  Language::IsSingleExit(struct Behavior::Node* node) {
// LINE 20:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        xor    ax, ax;
	__asm        jmp    near ptr 0x00560BC4;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    4;
}

// Function in module: Ylingo.obj
// FUNCTION: COPTER_D 0x00560bd0
void (__cdecl *  Language::GetSwizzler() {
// LINE 21:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x00560BE3;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

