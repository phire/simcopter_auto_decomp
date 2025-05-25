// Function in module: gamewin.obj
// FUNCTION: COPTER_D 0x00468020
unsigned long CSparkalWindow::Sleep() {
// LINE 79:
	asm( 
"	      00468020    push ebp"
"	      00468021    mov ebp,esp"
"	      00468023    sub esp,4"
"	      00468026    push ebx"
"	      00468027    push esi"
"	      00468028    push edi"
"	      00468029    mov [ebp-4],ecx"
"	      0046802c    xor eax,eax"
"	      0046802e    jmp near ptr 00468033h"
"	      00468033    pop edi"
"	      00468034    pop esi"
"	      00468035    pop ebx"
"	      00468036    leave"
"	      00468037    ret"
);
}

// Function in module: gamewin.obj
// FUNCTION: COPTER_D 0x00468040
unsigned long CSparkalWindow::WakeUp() {
// LINE 80:
	asm( 
"	      00468040    push ebp"
"	      00468041    mov ebp,esp"
"	      00468043    sub esp,4"
"	      00468046    push ebx"
"	      00468047    push esi"
"	      00468048    push edi"
"	      00468049    mov [ebp-4],ecx"
"	      0046804c    xor eax,eax"
"	      0046804e    jmp near ptr 00468053h"
"	      00468053    pop edi"
"	      00468054    pop esi"
"	      00468055    pop ebx"
"	      00468056    leave"
"	      00468057    ret"
);
}

