// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x00439bd0
void MTimer::MTimer(enum MTimer::TimerResolution nNewTimerResolution) {
// LINE 56:
	asm( 
"	      00439bd0    push ebp"
"	      00439bd1    mov ebp,esp"
"	      00439bd3    sub esp,10h"
"	      00439bd6    push ebx"
"	      00439bd7    push esi"
"	      00439bd8    push edi"
"	      00439bd9    mov this,ecx"
"	      00439bdc    mov eax,nNewTimerResolution"
"	      00439bdf    mov ecx,this"
"	      00439be2    mov [ecx],eax"
);
// LINE 57:
	asm( 
"	      00439be4    mov eax,this"
"	      00439be7    mov dword ptr [eax+4],0"
);
// LINE 58:
	asm( 
"	      00439bee    mov eax,this"
"	      00439bf1    mov dword ptr [eax+8],0"
);
// LINE 61:
	asm( 
"	      00439bf8    mov eax,this"
"	      00439bfb    mov dword ptr [eax+0Ch],0"
);
// LINE 62:
	asm( 
"	      00439c02    mov eax,this"
"	      00439c05    cmp dword ptr [eax],0"
"	      00439c08    jne near ptr 00439C2Ch"
);
// LINE 63:
	asm( 
"	      00439c0e    lea eax,[ebp-0Ch]"
"	      00439c11    push eax"
"	      00439c12    call dword ptr ds:[6C3668h]"
"	      00439c18    mov eax,[ebp-0Ch]"
"	      00439c1b    mov [ebp-4],eax"
"	      00439c1e    mov eax,[ebp-4]"
"	      00439c21    mov ecx,this"
"	      00439c24    mov [ecx+0Ch],eax"
"	      00439c27    jmp near ptr 00439C2Ch"
);
// LINE 65:
	asm( 
"	      00439c2c    jmp near ptr 00439C31h"
"	      00439c31    mov eax,this"
"	      00439c34    pop edi"
"	      00439c35    pop esi"
"	      00439c36    pop ebx"
"	      00439c37    leave"
"	      00439c38    ret 4"
);
}

// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x00439c40
void MTimer::SetResolution(enum MTimer::TimerResolution nNewTimerResolution) {
// LINE 87:
	asm( 
"	      00439c40    push ebp"
"	      00439c41    mov ebp,esp"
"	      00439c43    sub esp,10h"
"	      00439c46    push ebx"
"	      00439c47    push esi"
"	      00439c48    push edi"
"	      00439c49    mov this,ecx"
);
// LINE 88:
	asm( 
"	      00439c4c    mov eax,this"
"	      00439c4f    mov ecx,nNewTimerResolution"
"	      00439c52    cmp [eax],ecx"
"	      00439c54    je near ptr 00439CB2h"
);
// LINE 89:
	asm( 
"	      00439c5a    mov eax,nNewTimerResolution"
"	      00439c5d    mov ecx,this"
"	      00439c60    mov [ecx],eax"
);
// LINE 91:
	asm( 
"	      00439c62    mov eax,this"
"	      00439c65    cmp dword ptr [eax],0"
"	      00439c68    jne near ptr 00439C99h"
"	      00439c6e    mov eax,this"
"	      00439c71    cmp dword ptr [eax+0Ch],0"
"	      00439c75    jne near ptr 00439C99h"
);
// LINE 92:
	asm( 
"	      00439c7b    lea eax,[ebp-0Ch]"
"	      00439c7e    push eax"
"	      00439c7f    call dword ptr ds:[6C3668h]"
"	      00439c85    mov eax,[ebp-0Ch]"
"	      00439c88    mov [ebp-4],eax"
"	      00439c8b    mov eax,[ebp-4]"
"	      00439c8e    mov ecx,this"
"	      00439c91    mov [ecx+0Ch],eax"
"	      00439c94    jmp near ptr 00439C99h"
);
// LINE 94:
	asm( 
"	      00439c99    mov eax,this"
"	      00439c9c    mov dword ptr [eax+8],0"
"	      00439ca3    mov eax,this"
"	      00439ca6    mov dword ptr [eax+4],0"
"	      00439cad    jmp near ptr 00439CB2h"
);
// LINE 96:
	asm( 
"	      00439cb2    jmp near ptr 00439CB7h"
"	      00439cb7    pop edi"
"	      00439cb8    pop esi"
"	      00439cb9    pop ebx"
"	      00439cba    leave"
"	      00439cbb    ret 4"
);
}

