// Function in module: scontrols.obj
// FUNCTION: COPTER_D 0x00471d20
int32_t ButtonWindow::GetState() {
// LINE 127:
	asm( 
"	      00471d20    push ebp"
"	      00471d21    mov ebp,esp"
"	      00471d23    sub esp,4"
"	      00471d26    push ebx"
"	      00471d27    push esi"
"	      00471d28    push edi"
"	      00471d29    mov this,ecx"
"	      00471d2c    mov eax,this"
"	      00471d2f    mov eax,[eax+74h]"
"	      00471d32    jmp near ptr 00471D37h"
"	      00471d37    pop edi"
"	      00471d38    pop esi"
"	      00471d39    pop ebx"
"	      00471d3a    leave"
"	      00471d3b    ret"
);
}

