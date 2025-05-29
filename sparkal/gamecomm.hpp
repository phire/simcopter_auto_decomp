// Function in module: Gamecomm.obj
// FUNCTION: COPTER_D 0x0048e8a0
void CGameCommander::SetNewGameApp(class CGameApp* newGameApp) {
// LINE 197:
	asm( 
"	      0048e8a0    push ebp"
"	      0048e8a1    mov ebp,esp"
"	      0048e8a3    sub esp,4"
"	      0048e8a6    push ebx"
"	      0048e8a7    push esi"
"	      0048e8a8    push edi"
"	      0048e8a9    mov this,ecx"
"	      0048e8ac    mov eax,newGameApp"
"	      0048e8af    mov ecx,this"
"	      0048e8b2    mov [ecx+8],eax"
"	      0048e8b5    jmp near ptr 0048E8BAh"
"	      0048e8ba    pop edi"
"	      0048e8bb    pop esi"
"	      0048e8bc    pop ebx"
"	      0048e8bd    leave"
"	      0048e8be    ret 4"
);
}

