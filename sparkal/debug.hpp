// Function in module: Debug.obj
// FUNCTION: COPTER_D 0x004256d0
void execute(char * data) {
// LINE 44:
	asm( 
"	      004256d0    push ebp"
"	      004256d1    mov ebp,esp"
"	      004256d3    sub esp,4"
"	      004256d6    push ebx"
"	      004256d7    push esi"
"	      004256d8    push edi"
"	      004256d9    mov this,ecx"
);
// LINE 45:
	asm( 
"	      004256dc    mov eax,this"
"	      004256df    cmp dword ptr [eax+14h],0"
"	      004256e3    je near ptr 004256F8h"
);
// LINE 46:
	asm( 
"	      004256e9    mov eax,data"
"	      004256ec    push eax"
"	      004256ed    mov eax,this"
"	      004256f0    mov ecx,[eax+14h]"
"	      004256f3    call 00422280h"
);
// LINE 47:
	asm( 
"	      004256f8    jmp near ptr 004256FDh"
"	      004256fd    pop edi"
"	      004256fe    pop esi"
"	      004256ff    pop ebx"
"	      00425700    leave"
"	      00425701    ret 4"
);
}

