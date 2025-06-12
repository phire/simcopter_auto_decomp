// Function in module: Extrawin.obj
// FUNCTION: COPTER_D 0x00460de0
void MessageBoxWindowEdit::GetEditText(/*packed*/ class basic_string<char>& sText) {

	__asm        mov    eax, sText;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0xA4];
	__asm        mov    edx, [ecx];
	__asm        mov    ecx, [eax+0xA4];
	__asm        call   dword ptr [edx+0xF8];
	__asm        jmp    __RETURN;
__RETURN:
}

// Function in module: Extrawin.obj
// FUNCTION: COPTER_D 0x00460e20
void MessageBoxWindowEdit::GetEditText(char * szText, unsigned long lLength) {

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
	__asm        jmp    __RETURN;
__RETURN:
}

