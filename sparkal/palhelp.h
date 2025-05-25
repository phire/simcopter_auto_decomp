// Function in module: palhelp.obj
// FUNCTION: COPTER_D 0x00497b50
void SparkalPalette::GetRGBValue(int32_t, struct SparkalColor&) {
// LINE 107:
	asm( 
"	      00497b50    push ebp"
"	      00497b51    mov ebp,esp"
"	      00497b53    sub esp,4"
"	      00497b56    push ebx"
"	      00497b57    push esi"
"	      00497b58    push edi"
"	      00497b59    mov [ebp-4],ecx"
);
// LINE 108:
	asm( 
"	      00497b5c    mov eax,[ebp-4]"
"	      00497b5f    mov eax,[eax+4]"
"	      00497b62    mov ecx,[ebp+8]"
"	      00497b65    mov eax,[eax+ecx*4]"
"	      00497b68    mov ecx,[ebp+0Ch]"
"	      00497b6b    mov [ecx],eax"
);
// LINE 109:
	asm( 
"	      00497b6d    jmp near ptr 00497B72h"
"	      00497b72    pop edi"
"	      00497b73    pop esi"
"	      00497b74    pop ebx"
"	      00497b75    leave"
"	      00497b76    ret 8"
);
}

