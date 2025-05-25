// Function in module: Menus.obj
// FUNCTION: COPTER_D 0x0049e290
int32_t UserMenuWindow::GetSelectionIndex() {
// LINE 71:
	asm( 
"	      0049e290    push ebp"
"	      0049e291    mov ebp,esp"
"	      0049e293    sub esp,4"
"	      0049e296    push ebx"
"	      0049e297    push esi"
"	      0049e298    push edi"
"	      0049e299    mov [ebp-4],ecx"
"	      0049e29c    mov eax,[ebp-4]"
"	      0049e29f    mov eax,[eax+0D4h]"
"	      0049e2a5    jmp near ptr 0049E2AAh"
"	      0049e2aa    pop edi"
"	      0049e2ab    pop esi"
"	      0049e2ac    pop ebx"
"	      0049e2ad    leave"
"	      0049e2ae    ret"
);
}

// Function in module: Menus.obj
// FUNCTION: COPTER_D 0x0049e2b0
int32_t UserMenuWindow::GetSelectionValue() {
// LINE 72:
	asm( 
"	      0049e2b0    push ebp"
"	      0049e2b1    mov ebp,esp"
"	      0049e2b3    sub esp,4"
"	      0049e2b6    push ebx"
"	      0049e2b7    push esi"
"	      0049e2b8    push edi"
"	      0049e2b9    mov [ebp-4],ecx"
"	      0049e2bc    mov eax,[ebp-4]"
"	      0049e2bf    mov eax,[eax+98h]"
"	      0049e2c5    mov ecx,[ebp-4]"
"	      0049e2c8    add eax,[ecx+0D4h]"
"	      0049e2ce    jmp near ptr 0049E2D3h"
"	      0049e2d3    pop edi"
"	      0049e2d4    pop esi"
"	      0049e2d5    pop ebx"
"	      0049e2d6    leave"
"	      0049e2d7    ret"
);
}

