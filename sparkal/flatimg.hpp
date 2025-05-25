// Function in module: ddbuffer.obj
// FUNCTION: COPTER_D 0x00471570
void IFlatImage::SetTransparentColor(int32_t, long) {
// LINE 40:
	asm( 
"	      00471570    push ebp"
"	      00471571    mov ebp,esp"
"	      00471573    sub esp,4"
"	      00471576    push ebx"
"	      00471577    push esi"
"	      00471578    push edi"
"	      00471579    mov [ebp-4],ecx"
"	      0047157c    jmp near ptr 00471581h"
"	      00471581    pop edi"
"	      00471582    pop esi"
"	      00471583    pop ebx"
"	      00471584    leave"
"	      00471585    ret 8"
);
}

