// Function in module: Graphwin.obj
// FUNCTION: COPTER_D 0x004a7b60
int32_t GraphicWindowManager::IncrementBusyCount() {
// LINE 115:
	asm( 
"	      004a7b60    push ebp"
"	      004a7b61    mov ebp,esp"
"	      004a7b63    sub esp,4"
"	      004a7b66    push ebx"
"	      004a7b67    push esi"
"	      004a7b68    push edi"
"	      004a7b69    mov [ebp-4],ecx"
"	      004a7b6c    mov eax,[ebp-4]"
"	      004a7b6f    inc dword ptr [eax+4]"
"	      004a7b72    mov eax,[ebp-4]"
"	      004a7b75    mov eax,[eax+4]"
"	      004a7b78    jmp near ptr 004A7B7Dh"
"	      004a7b7d    pop edi"
"	      004a7b7e    pop esi"
"	      004a7b7f    pop ebx"
"	      004a7b80    leave"
"	      004a7b81    ret"
);
}

// Function in module: Graphwin.obj
// FUNCTION: COPTER_D 0x004a7b90
int32_t GraphicWindowManager::DecrementBusyCount() {
// LINE 116:
	asm( 
"	      004a7b90    push ebp"
"	      004a7b91    mov ebp,esp"
"	      004a7b93    sub esp,4"
"	      004a7b96    push ebx"
"	      004a7b97    push esi"
"	      004a7b98    push edi"
"	      004a7b99    mov [ebp-4],ecx"
"	      004a7b9c    mov eax,[ebp-4]"
"	      004a7b9f    dec dword ptr [eax+4]"
"	      004a7ba2    mov eax,[ebp-4]"
"	      004a7ba5    mov eax,[eax+4]"
"	      004a7ba8    jmp near ptr 004A7BADh"
"	      004a7bad    pop edi"
"	      004a7bae    pop esi"
"	      004a7baf    pop ebx"
"	      004a7bb0    leave"
"	      004a7bb1    ret"
);
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d7e0
void  GraphicWindow::SetParent(class GraphicWindow* windowNewParent) {
// LINE 323:
	asm( 
"	      0040d7e0    push ebp"
"	      0040d7e1    mov ebp,esp"
"	      0040d7e3    sub esp,4"
"	      0040d7e6    push ebx"
"	      0040d7e7    push esi"
"	      0040d7e8    push edi"
"	      0040d7e9    mov [ebp-4],ecx"
);
// LINE 324:
	asm( 
"	      0040d7ec    mov eax,[ebp+8]"
"	      0040d7ef    mov ecx,[ebp-4]"
"	      0040d7f2    mov [ecx+3Ch],eax"
);
// LINE 325:
	asm( 
"	      0040d7f5    jmp near ptr 0040D7FAh"
"	      0040d7fa    pop edi"
"	      0040d7fb    pop esi"
"	      0040d7fc    pop ebx"
"	      0040d7fd    leave"
"	      0040d7fe    ret 4"
);
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d810
void  GraphicWindow::SetBorderDrawing(int32_t bNewDrawBorder) {
// LINE 327:
	asm( 
"	      0040d810    push ebp"
"	      0040d811    mov ebp,esp"
"	      0040d813    sub esp,4"
"	      0040d816    push ebx"
"	      0040d817    push esi"
"	      0040d818    push edi"
"	      0040d819    mov [ebp-4],ecx"
);
// LINE 328:
	asm( 
"	      0040d81c    mov eax,[ebp+8]"
"	      0040d81f    mov ecx,[ebp-4]"
"	      0040d822    mov [ecx+6Ch],eax"
);
// LINE 329:
	asm( 
"	      0040d825    jmp near ptr 0040D82Ah"
"	      0040d82a    pop edi"
"	      0040d82b    pop esi"
"	      0040d82c    pop ebx"
"	      0040d82d    leave"
"	      0040d82e    ret 4"
);
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d840
void  GraphicWindow::SetWindowPosition(class MPoint& ptNewPosition) {
// LINE 335:
	asm( 
"	      0040d840    push ebp"
"	      0040d841    mov ebp,esp"
"	      0040d843    sub esp,14h"
"	      0040d846    push ebx"
"	      0040d847    push esi"
"	      0040d848    push edi"
"	      0040d849    mov [ebp-14h],ecx"
"	      0040d84c    mov eax,[ebp+8]"
"	      0040d84f    mov ecx,[eax]"
"	      0040d851    mov eax,[eax+4]"
"	      0040d854    mov [ebp-10h],ecx"
"	      0040d857    mov [ebp-0Ch],eax"
);
// LINE 336:
	asm( 
"	      0040d85a    mov eax,[ebp-10h]"
"	      0040d85d    mov ecx,[ebp-14h]"
"	      0040d860    sub eax,[ecx+10h]"
"	      0040d863    mov [ebp-8],eax"
"	      0040d866    mov eax,[ebp-0Ch]"
"	      0040d869    mov ecx,[ebp-14h]"
"	      0040d86c    sub eax,[ecx+14h]"
"	      0040d86f    mov [ebp-4],eax"
"	      0040d872    mov eax,[ebp-8]"
"	      0040d875    mov ecx,[ebp-14h]"
"	      0040d878    add [ecx+10h],eax"
"	      0040d87b    mov eax,[ebp-8]"
"	      0040d87e    mov ecx,[ebp-14h]"
"	      0040d881    add [ecx+18h],eax"
"	      0040d884    mov eax,[ebp-4]"
"	      0040d887    mov ecx,[ebp-14h]"
"	      0040d88a    add [ecx+14h],eax"
"	      0040d88d    mov eax,[ebp-4]"
"	      0040d890    mov ecx,[ebp-14h]"
"	      0040d893    add [ecx+1Ch],eax"
"	      0040d896    jmp near ptr 0040D89Bh"
);
// LINE 337:
	asm( 
"	      0040d89b    jmp near ptr 0040D8A0h"
"	      0040d8a0    pop edi"
"	      0040d8a1    pop esi"
"	      0040d8a2    pop ebx"
"	      0040d8a3    leave"
"	      0040d8a4    ret 4"
);
}

// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040d8b0
int  GraphicWindow::IsPointInWindow(long nXPosition, long nYPosition) {
// LINE 362:
	asm( 
"	      0040d8b0    push ebp"
"	      0040d8b1    mov ebp,esp"
"	      0040d8b3    sub esp,4"
"	      0040d8b6    push ebx"
"	      0040d8b7    push esi"
"	      0040d8b8    push edi"
"	      0040d8b9    mov [ebp-4],ecx"
);
// LINE 364:
	asm( 
"	      0040d8bc    cmp dword ptr [ebp+8],0"
"	      0040d8c0    jle near ptr 0040D90Eh"
"	      0040d8c6    jmp near ptr 0040D8CBh"
"	      0040d8cb    mov eax,[ebp-4]"
"	      0040d8ce    mov eax,[eax+18h]"
"	      0040d8d1    mov ecx,[ebp-4]"
"	      0040d8d4    sub eax,[ecx+10h]"
"	      0040d8d7    cmp eax,[ebp+8]"
"	      0040d8da    jle near ptr 0040D90Eh"
"	      0040d8e0    cmp dword ptr [ebp+0Ch],0"
"	      0040d8e4    jle near ptr 0040D90Eh"
"	      0040d8ea    jmp near ptr 0040D8EFh"
"	      0040d8ef    mov eax,[ebp-4]"
"	      0040d8f2    mov eax,[eax+1Ch]"
"	      0040d8f5    mov ecx,[ebp-4]"
"	      0040d8f8    sub eax,[ecx+14h]"
"	      0040d8fb    cmp eax,[ebp+0Ch]"
"	      0040d8fe    jle near ptr 0040D90Eh"
"	      0040d904    mov eax,1"
"	      0040d909    jmp near ptr 0040D910h"
"	      0040d90e    xor eax,eax"
"	      0040d910    jmp near ptr 0040D915h"
);
// LINE 365:
	asm( 
"	      0040d915    pop edi"
"	      0040d916    pop esi"
"	      0040d917    pop ebx"
"	      0040d918    leave"
"	      0040d919    ret 8"
);
}

