// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00551fa0
void (*)(void * __ptr32, long) YObjLang::GetSwizzler() {
// LINE 28:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, 0x560ABE;
	__asm        jmp    near ptr 0x00551FB6;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

