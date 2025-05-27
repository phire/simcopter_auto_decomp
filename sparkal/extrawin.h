// Function in module: Extrawin.obj
// FUNCTION: COPTER_D 0x00460de0
void MessageBoxWindowEdit::GetEditText(class basic_string<char>& sText) {
// LINE 403:
	asm( 
"	      00460de0    push ebp"
"	      00460de1    mov ebp,esp"
"	      00460de3    sub esp,4"
"	      00460de6    push ebx"
"	      00460de7    push esi"
"	      00460de8    push edi"
"	      00460de9    mov [ebp-4],ecx"
"	      00460dec    mov eax,[ebp+8]"
"	      00460def    push eax"
"	      00460df0    mov eax,[ebp-4]"
"	      00460df3    mov ecx,[ebp-4]"
"	      00460df6    mov ecx,[ecx+0A4h]"
"	      00460dfc    mov edx,[ecx]"
"	      00460dfe    mov ecx,[eax+0A4h]"
"	      00460e04    call dword ptr [edx+0F8h]"
"	      00460e0a    jmp near ptr 00460E0Fh"
"	      00460e0f    pop edi"
"	      00460e10    pop esi"
"	      00460e11    pop ebx"
"	      00460e12    leave"
"	      00460e13    ret 4"
);
}

// Function in module: Extrawin.obj
// FUNCTION: COPTER_D 0x00460e20
void MessageBoxWindowEdit::GetEditText(char * szText, unsigned long lLength) {
// LINE 404:
	asm( 
"	      00460e20    push ebp"
"	      00460e21    mov ebp,esp"
"	      00460e23    sub esp,4"
"	      00460e26    push ebx"
"	      00460e27    push esi"
"	      00460e28    push edi"
"	      00460e29    mov [ebp-4],ecx"
"	      00460e2c    mov eax,[ebp+0Ch]"
"	      00460e2f    push eax"
"	      00460e30    mov eax,[ebp+8]"
"	      00460e33    push eax"
"	      00460e34    mov eax,[ebp-4]"
"	      00460e37    mov ecx,[ebp-4]"
"	      00460e3a    mov ecx,[ecx+0A4h]"
"	      00460e40    mov edx,[ecx]"
"	      00460e42    mov ecx,[eax+0A4h]"
"	      00460e48    call dword ptr [edx+0F4h]"
"	      00460e4e    jmp near ptr 00460E53h"
"	      00460e53    pop edi"
"	      00460e54    pop esi"
"	      00460e55    pop ebx"
"	      00460e56    leave"
"	      00460e57    ret 8"
);
}

