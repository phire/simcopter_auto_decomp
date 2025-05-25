// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00551fa0
void (*)(void * __ptr32, long) YObjLang::GetSwizzler() {
// LINE 28:
	asm( 
"	      00551fa0    push ebp"
"	      00551fa1    mov ebp,esp"
"	      00551fa3    sub esp,4"
"	      00551fa6    push ebx"
"	      00551fa7    push esi"
"	      00551fa8    push edi"
"	      00551fa9    mov [ebp-4],ecx"
"	      00551fac    mov eax,560ABEh"
"	      00551fb1    jmp near ptr 00551FB6h"
"	      00551fb6    pop edi"
"	      00551fb7    pop esi"
"	      00551fb8    pop ebx"
"	      00551fb9    leave"
"	      00551fba    ret"
);
}

