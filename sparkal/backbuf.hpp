// Function in module: ddbuffer.obj
// FUNCTION: COPTER_D 0x00471590
unsigned long IBackBuffer::Swap(class CSparkalWindow*, long, long) {
// LINE 66:
	asm( 
"	      00471590    push ebp"
"	      00471591    mov ebp,esp"
"	      00471593    sub esp,4"
"	      00471596    push ebx"
"	      00471597    push esi"
"	      00471598    push edi"
"	      00471599    mov [ebp-4],ecx"
);
// LINE 67:
	asm( 
"	      0047159c    mov eax,[ebp+10h]"
"	      0047159f    push eax"
"	      004715a0    mov eax,[ebp+0Ch]"
"	      004715a3    push eax"
"	      004715a4    mov eax,[ebp-4]"
"	      004715a7    mov eax,[eax+0Ch]"
"	      004715aa    push eax"
"	      004715ab    mov eax,[ebp-4]"
"	      004715ae    mov eax,[eax+8]"
"	      004715b1    push eax"
"	      004715b2    push 0"
"	      004715b4    push 0"
"	      004715b6    mov eax,[ebp+8]"
"	      004715b9    push eax"
"	      004715ba    mov eax,[ebp-4]"
"	      004715bd    mov eax,[eax]"
"	      004715bf    mov ecx,[ebp-4]"
"	      004715c2    call dword ptr [eax+20h]"
"	      004715c5    jmp near ptr 004715CAh"
);
// LINE 68:
	asm( 
"	      004715ca    pop edi"
"	      004715cb    pop esi"
"	      004715cc    pop ebx"
"	      004715cd    leave"
"	      004715ce    ret 0Ch"
);
}

