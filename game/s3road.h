// Function in module: S3rdgrph.obj
// FUNCTION: COPTER_D 0x00541360
int32_t TimeOfTravelTable(unsigned short) {
// LINE 778:
	asm( 
"	      00541360    push ebp"
"	      00541361    mov ebp,esp"
"	      00541363    sub esp,4"
"	      00541366    push ebx"
"	      00541367    push esi"
"	      00541368    push edi"
);
// LINE 779:
	asm( 
"	      00541369    mov eax,[ebp+8]"
"	      0054136c    and eax,0FFFFh"
"	      00541371    mov [ebp-4],eax"
"	      00541374    jmp near ptr 005413E9h"
);
// LINE 791:
	asm( 
"	      00541379    mov eax,8"
"	      0054137e    jmp near ptr 00541522h"
);
// LINE 798:
	asm( 
"	      00541383    mov eax,0Ah"
"	      00541388    jmp near ptr 00541522h"
);
// LINE 808:
	asm( 
"	      0054138d    mov eax,8"
"	      00541392    jmp near ptr 00541522h"
);
// LINE 818:
	asm( 
"	      00541397    mov eax,4"
"	      0054139c    jmp near ptr 00541522h"
);
// LINE 832:
	asm( 
"	      005413a1    mov eax,8"
"	      005413a6    jmp near ptr 00541522h"
);
// LINE 840:
	asm( 
"	      005413ab    mov eax,8"
"	      005413b0    jmp near ptr 00541522h"
);
// LINE 850:
	asm( 
"	      005413b5    mov eax,0Ah"
"	      005413ba    jmp near ptr 00541522h"
);
// LINE 860:
	asm( 
"	      005413bf    mov eax,8"
"	      005413c4    jmp near ptr 00541522h"
);
// LINE 863:
	asm( 
"	      005413c9    mov eax,0Ah"
"	      005413ce    jmp near ptr 00541522h"
);
// LINE 869:
	asm( 
"	      005413d3    mov eax,4"
"	      005413d8    jmp near ptr 00541522h"
);
// LINE 873:
	asm( 
"	      005413dd    xor eax,eax"
"	      005413df    jmp near ptr 00541522h"
);
// LINE 874:
	asm( 
"	      005413e4    jmp near ptr 00541522h"
"	      005413e9    cmp dword ptr [ebp-4],2Bh"
"	      005413ed    jg near ptr 00541416h"
"	      005413f3    cmp dword ptr [ebp-4],27h"
"	      005413f7    jge near ptr 00541383h"
"	      005413fd    cmp dword ptr [ebp-4],1Dh"
"	      00541401    jl near ptr 005413DDh"
"	      00541407    cmp dword ptr [ebp-4],26h"
"	      0054140b    jle near ptr 00541379h"
"	      00541411    jmp near ptr 005413DDh"
"	      00541416    cmp dword ptr [ebp-4],50h"
"	      0054141a    jg near ptr 00541443h"
"	      00541420    cmp dword ptr [ebp-4],49h"
"	      00541424    jge near ptr 00541397h"
"	      0054142a    cmp dword ptr [ebp-4],3Fh"
"	      0054142e    jl near ptr 005413DDh"
"	      00541434    cmp dword ptr [ebp-4],46h"
"	      00541438    jle near ptr 0054138Dh"
"	      0054143e    jmp near ptr 005413DDh"
"	      00541443    cmp dword ptr [ebp-4],59h"
"	      00541447    jg near ptr 00541470h"
"	      0054144d    cmp dword ptr [ebp-4],57h"
"	      00541451    jge near ptr 005413ABh"
"	      00541457    cmp dword ptr [ebp-4],51h"
"	      0054145b    jl near ptr 005413DDh"
"	      00541461    cmp dword ptr [ebp-4],56h"
"	      00541465    jle near ptr 005413A1h"
"	      0054146b    jmp near ptr 005413DDh"
"	      00541470    cmp dword ptr [ebp-4],68h"
"	      00541474    jg near ptr 0054149Dh"
"	      0054147a    cmp dword ptr [ebp-4],61h"
"	      0054147e    jge near ptr 005413BFh"
"	      00541484    cmp dword ptr [ebp-4],5Dh"
"	      00541488    jl near ptr 005413DDh"
"	      0054148e    cmp dword ptr [ebp-4],60h"
"	      00541492    jle near ptr 005413B5h"
"	      00541498    jmp near ptr 005413DDh"
"	      0054149d    cmp dword ptr [ebp-4],8056h"
"	      005414a4    jg near ptr 005414DAh"
"	      005414aa    cmp dword ptr [ebp-4],8051h"
"	      005414b1    jge near ptr 005413A1h"
"	      005414b7    cmp dword ptr [ebp-4],69h"
"	      005414bb    je near ptr 005413C9h"
"	      005414c1    cmp dword ptr [ebp-4],6Ah"
"	      005414c5    jl near ptr 005413DDh"
"	      005414cb    cmp dword ptr [ebp-4],6Bh"
"	      005414cf    jle near ptr 005413D3h"
"	      005414d5    jmp near ptr 005413DDh"
"	      005414da    sub dword ptr [ebp-4],8057h"
"	      005414e1    cmp dword ptr [ebp-4],14h"
"	      005414e5    ja near ptr 005413DDh"
"	      005414eb    mov eax,[ebp-4]"
"	      005414ee    xor ecx,ecx"
"	      005414f0    mov cl,[eax+54150Dh]"
"	      005414f6    jmp dword ptr [ecx*4+5414FDh]"
"	      005414fd    stosd"
"	      005414fe    adc edx,[eax+eax-4Bh]"
"	      00541502    adc edx,[eax+eax-2Dh]"
"	      00541506    adc edx,[eax+eax-23h]"
"	      0054150a    adc edx,[eax+eax]"
"	      0054150e    add [eax],al"
"	      00541510    add eax,[ebx]"
"	      00541512    add eax,[ecx]"
"	      00541514    add [ecx],eax"
"	      00541516    add [ebx],eax"
"	      00541518    add eax,[ebx]"
"	      0054151a    add eax,[ebx]"
"	      0054151c    add eax,[ebx]"
"	      0054151e    add eax,[ebx]"
"	      00541520    add al,[edx]"
);
// LINE 876:
	asm( 
"	      00541522    pop edi"
"	      00541523    pop esi"
"	      00541524    pop ebx"
"	      00541525    leave"
"	      00541526    ret"
);
}

