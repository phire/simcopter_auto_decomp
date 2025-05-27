// Function in module: Catalog.obj
// FUNCTION: COPTER_D 0x0047b5e0
void MPoint::MPoint() {
// LINE 279:
	asm( 
"	      0047b5e0    push ebp"
"	      0047b5e1    mov ebp,esp"
"	      0047b5e3    sub esp,4"
"	      0047b5e6    push ebx"
"	      0047b5e7    push esi"
"	      0047b5e8    push edi"
"	      0047b5e9    mov [ebp-4],ecx"
"	      0047b5ec    jmp near ptr 0047B5F1h"
"	      0047b5f1    jmp near ptr 0047B5F6h"
"	      0047b5f6    mov eax,[ebp-4]"
"	      0047b5f9    pop edi"
"	      0047b5fa    pop esi"
"	      0047b5fb    pop ebx"
"	      0047b5fc    leave"
"	      0047b5fd    ret"
);
}

// Function in module: Dialwin.obj
// FUNCTION: COPTER_D 0x0044fc60
void MRect::NormalizeRect() {
	long nTemp;

// LINE 589:
	asm( 
"	      0044fc60    push ebp"
"	      0044fc61    mov ebp,esp"
"	      0044fc63    sub esp,8"
"	      0044fc66    push ebx"
"	      0044fc67    push esi"
"	      0044fc68    push edi"
"	      0044fc69    mov [ebp-8],ecx"
);
// LINE 592:
	asm( 
"	      0044fc6c    mov eax,[ebp-8]"
"	      0044fc6f    mov ecx,[ebp-8]"
"	      0044fc72    mov ecx,[ecx]"
"	      0044fc74    cmp [eax+8],ecx"
"	      0044fc77    jge near ptr 0044FC99h"
);
// LINE 593:
	asm( 
"	      0044fc7d    mov eax,[ebp-8]"
"	      0044fc80    mov eax,[eax]"
"	      0044fc82    mov [ebp-4],eax"
);
// LINE 594:
	asm( 
"	      0044fc85    mov eax,[ebp-8]"
"	      0044fc88    mov eax,[eax+8]"
"	      0044fc8b    mov ecx,[ebp-8]"
"	      0044fc8e    mov [ecx],eax"
);
// LINE 595:
	asm( 
"	      0044fc90    mov eax,[ebp-4]"
"	      0044fc93    mov ecx,[ebp-8]"
"	      0044fc96    mov [ecx+8],eax"
);
// LINE 597:
	asm( 
"	      0044fc99    mov eax,[ebp-8]"
"	      0044fc9c    mov ecx,[ebp-8]"
"	      0044fc9f    mov ecx,[ecx+0Ch]"
"	      0044fca2    cmp [eax+4],ecx"
"	      0044fca5    jle near ptr 0044FCC9h"
);
// LINE 598:
	asm( 
"	      0044fcab    mov eax,[ebp-8]"
"	      0044fcae    mov eax,[eax+4]"
"	      0044fcb1    mov [ebp-4],eax"
);
// LINE 599:
	asm( 
"	      0044fcb4    mov eax,[ebp-8]"
"	      0044fcb7    mov eax,[eax+0Ch]"
"	      0044fcba    mov ecx,[ebp-8]"
"	      0044fcbd    mov [ecx+4],eax"
);
// LINE 600:
	asm( 
"	      0044fcc0    mov eax,[ebp-4]"
"	      0044fcc3    mov ecx,[ebp-8]"
"	      0044fcc6    mov [ecx+0Ch],eax"
);
// LINE 602:
	asm( 
"	      0044fcc9    jmp near ptr 0044FCCEh"
"	      0044fcce    pop edi"
"	      0044fccf    pop esi"
"	      0044fcd0    pop ebx"
"	      0044fcd1    leave"
"	      0044fcd2    ret"
);
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040dc80
void MRect::MRect() {
// LINE 329:
	asm( 
"	      0040dc80    push ebp"
"	      0040dc81    mov ebp,esp"
"	      0040dc83    sub esp,4"
"	      0040dc86    push ebx"
"	      0040dc87    push esi"
"	      0040dc88    push edi"
"	      0040dc89    mov [ebp-4],ecx"
"	      0040dc8c    jmp near ptr 0040DC91h"
"	      0040dc91    jmp near ptr 0040DC96h"
"	      0040dc96    mov eax,[ebp-4]"
"	      0040dc99    pop edi"
"	      0040dc9a    pop esi"
"	      0040dc9b    pop ebx"
"	      0040dc9c    leave"
"	      0040dc9d    ret"
);
}

