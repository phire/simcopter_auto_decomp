// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e660
void FlatResFile::FlatResFile() {
// LINE 38:
	asm( 
"	      0055e660    push ebp"
"	      0055e661    mov ebp,esp"
"	      0055e663    push 0FFFFFFFFh"
"	      0055e665    push 55E6D0h"
"	      0055e66a    mov eax,fs:[0]"
"	      0055e670    push eax"
"	      0055e671    mov fs:[0],esp"
"	      0055e678    sub esp,4"
"	      0055e67b    push ebx"
"	      0055e67c    push esi"
"	      0055e67d    push edi"
"	      0055e67e    mov this,ecx"
"	      0055e681    mov ecx,this"
"	      0055e684    call 0055C270h"
"	      0055e689    mov dword ptr [ebp-4],0"
"	      0055e690    mov eax,this"
"	      0055e693    mov dword ptr [eax],593508h"
"	      0055e699    mov eax,this"
"	      0055e69c    mov dword ptr [eax+114h],0"
"	      0055e6a6    mov eax,this"
"	      0055e6a9    mov dword ptr [eax+110h],0"
"	      0055e6b3    jmp near ptr 0055E6B8h"
"	      0055e6b8    mov dword ptr [ebp-4],0FFFFFFFFh"
"	      0055e6bf    mov eax,this"
"	      0055e6c2    jmp near ptr 0055E6DAh"
	);
_L39766:
	asm( 
"	      0055e6c7    mov ecx,this"
"	      0055e6ca    call 0055C2BBh"
"	      0055e6cf    ret"
	);
_L39765:
	asm( 
"	      0055e6d0    mov eax,596008h"
"	      0055e6d5    jmp near ptr 0056F590h"
"	      0055e6da    mov ecx,[ebp-0Ch]"
"	      0055e6dd    mov fs:[0],ecx"
"	      0055e6e4    pop edi"
"	      0055e6e5    pop esi"
"	      0055e6e6    pop ebx"
"	      0055e6e7    leave"
"	      0055e6e8    ret"
);
}

