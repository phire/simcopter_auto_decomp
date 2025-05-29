// Function in module: ddbuffer.obj
// FUNCTION: COPTER_D 0x00471590
unsigned long IBackBuffer::Swap(class CSparkalWindow* pDest, long DestLeft, long DestTop) {
// LINE 66:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 67:
	__asm        mov    eax, DestTop;
	__asm        push   eax;
	__asm        mov    eax, DestLeft;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0xC];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+8];
	__asm        push   eax;
	__asm        push   0;
	__asm        push   0;
	__asm        mov    eax, pDest;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+0x20];
	__asm        jmp    near ptr 0x004715CA;
// LINE 68:
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    0xC;
}

