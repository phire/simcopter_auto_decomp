// Function in module: sound.obj
// FUNCTION: COPTER_D 0x00431b00
int32_t DigitalSound::GetSoundType() {
// LINE 212:
	asm( 
"	      00431b00    push ebp"
"	      00431b01    mov ebp,esp"
"	      00431b03    sub esp,4"
"	      00431b06    push ebx"
"	      00431b07    push esi"
"	      00431b08    push edi"
"	      00431b09    mov this,ecx"
"	      00431b0c    mov eax,1"
"	      00431b11    jmp near ptr 00431B16h"
"	      00431b16    pop edi"
"	      00431b17    pop esi"
"	      00431b18    pop ebx"
"	      00431b19    leave"
"	      00431b1a    ret"
);
}

