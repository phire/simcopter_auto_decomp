// Function in module: Extrawin.obj
// FUNCTION: COPTER_D 0x00460de0
void MessageBoxWindowEdit::GetEditText(class basic_string<char>& sText) {
// LINE 403:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, sText;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0xA4];
	__asm        mov    edx, [ecx];
	__asm        mov    ecx, [eax+0xA4];
	__asm        call   dword ptr [edx+0xF8];
	__asm        jmp    near ptr 0x00460E0F;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    4;
}

// Function in module: Extrawin.obj
// FUNCTION: COPTER_D 0x00460e20
void MessageBoxWindowEdit::GetEditText(char * szText, unsigned long lLength) {
// LINE 404:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, lLength;
	__asm        push   eax;
	__asm        mov    eax, szText;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0xA4];
	__asm        mov    edx, [ecx];
	__asm        mov    ecx, [eax+0xA4];
	__asm        call   dword ptr [edx+0xF4];
	__asm        jmp    near ptr 0x00460E53;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    8;
}

