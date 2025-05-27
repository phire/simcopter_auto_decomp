// Function in module: scrnbuf.obj
// FUNCTION: COPTER_D 0x0049f710
void ScreenBuffer::SetNewModeType(enum tagModeType nNewCurrentModeType) {
// LINE 42:
	asm( 
"	      0049f710    push ebp"
"	      0049f711    mov ebp,esp"
"	      0049f713    sub esp,4"
"	      0049f716    push ebx"
"	      0049f717    push esi"
"	      0049f718    push edi"
"	      0049f719    mov [ebp-4],ecx"
"	      0049f71c    mov eax,[ebp+8]"
"	      0049f71f    mov ecx,[ebp-4]"
"	      0049f722    mov [ecx+14Eh],eax"
"	      0049f728    jmp near ptr 0049F72Dh"
"	      0049f72d    pop edi"
"	      0049f72e    pop esi"
"	      0049f72f    pop ebx"
"	      0049f730    leave"
"	      0049f731    ret 4"
);
}

