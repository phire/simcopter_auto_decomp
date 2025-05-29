// Function in module: Ylingo.obj
// FUNCTION: COPTER_D 0x00560bb0
unsigned short  Language::IsSingleExit(struct Behavior::Node* node) {
// LINE 20:
	asm( 
"	      00560bb0    push ebp"
"	      00560bb1    mov ebp,esp"
"	      00560bb3    sub esp,4"
"	      00560bb6    push ebx"
"	      00560bb7    push esi"
"	      00560bb8    push edi"
"	      00560bb9    mov this,ecx"
"	      00560bbc    xor ax,ax"
"	      00560bbf    jmp near ptr 00560BC4h"
"	      00560bc4    pop edi"
"	      00560bc5    pop esi"
"	      00560bc6    pop ebx"
"	      00560bc7    leave"
"	      00560bc8    ret 4"
);
}

// Function in module: Ylingo.obj
// FUNCTION: COPTER_D 0x00560bd0
void (__cdecl *  Language::GetSwizzler() {
// LINE 21:
	asm( 
"	      00560bd0    push ebp"
"	      00560bd1    mov ebp,esp"
"	      00560bd3    sub esp,4"
"	      00560bd6    push ebx"
"	      00560bd7    push esi"
"	      00560bd8    push edi"
"	      00560bd9    mov this,ecx"
"	      00560bdc    xor eax,eax"
"	      00560bde    jmp near ptr 00560BE3h"
"	      00560be3    pop edi"
"	      00560be4    pop esi"
"	      00560be5    pop ebx"
"	      00560be6    leave"
"	      00560be7    ret"
);
}

