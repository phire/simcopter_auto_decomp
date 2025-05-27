// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f5b0
void cCopterAnim::Destroy() {
// LINE 223:
	asm( 
"	      0055f5b0    push ebp"
"	      0055f5b1    mov ebp,esp"
"	      0055f5b3    sub esp,4"
"	      0055f5b6    push ebx"
"	      0055f5b7    push esi"
"	      0055f5b8    push edi"
"	      0055f5b9    mov [ebp-4],ecx"
);
// LINE 224:
	asm( 
"	      0055f5bc    push 8C085h"
"	      0055f5c1    push 5BE3FCh"
"	      0055f5c6    push 0E0h"
"	      0055f5cb    push 5BE3D8h"
"	      0055f5d0    call 00554F30h"
"	      0055f5d5    add esp,10h"
);
// LINE 225:
	asm( 
"	      0055f5d8    jmp near ptr 0055F5DDh"
"	      0055f5dd    pop edi"
"	      0055f5de    pop esi"
"	      0055f5df    pop ebx"
"	      0055f5e0    leave"
"	      0055f5e1    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f5f0
void cCopterAnim::WriteToDisk() {
// LINE 227:
	asm( 
"	      0055f5f0    push ebp"
"	      0055f5f1    mov ebp,esp"
"	      0055f5f3    sub esp,4"
"	      0055f5f6    push ebx"
"	      0055f5f7    push esi"
"	      0055f5f8    push edi"
"	      0055f5f9    mov [ebp-4],ecx"
);
// LINE 228:
	asm( 
"	      0055f5fc    mov eax,[ebp-4]"
"	      0055f5ff    mov ecx,[ebp-4]"
"	      0055f602    mov ecx,[ecx+28h]"
"	      0055f605    mov edx,[ecx]"
"	      0055f607    mov ecx,[eax+28h]"
"	      0055f60a    call dword ptr [edx]"
);
// LINE 229:
	asm( 
"	      0055f60c    jmp near ptr 0055F611h"
);
// LINE 230:
	asm( 
"	      0055f611    jmp near ptr 0055F616h"
"	      0055f616    pop edi"
"	      0055f617    pop esi"
"	      0055f618    pop ebx"
"	      0055f619    leave"
"	      0055f61a    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f620
unsigned short cCopterAnim::IsDirty() {
// LINE 231:
	asm( 
"	      0055f620    push ebp"
"	      0055f621    mov ebp,esp"
"	      0055f623    sub esp,4"
"	      0055f626    push ebx"
"	      0055f627    push esi"
"	      0055f628    push edi"
"	      0055f629    mov [ebp-4],ecx"
"	      0055f62c    push 8C085h"
"	      0055f631    push 5BE44Ch"
"	      0055f636    push 0E7h"
"	      0055f63b    push 5BE3D8h"
"	      0055f640    call 00554F30h"
"	      0055f645    add esp,10h"
"	      0055f648    xor ax,ax"
"	      0055f64b    jmp near ptr 0055F650h"
"	      0055f650    pop edi"
"	      0055f651    pop esi"
"	      0055f652    pop ebx"
"	      0055f653    leave"
"	      0055f654    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f660
unsigned long cCopterAnim::GetBodyType() {
// LINE 233:
	asm( 
"	      0055f660    push ebp"
"	      0055f661    mov ebp,esp"
"	      0055f663    sub esp,4"
"	      0055f666    push ebx"
"	      0055f667    push esi"
"	      0055f668    push edi"
"	      0055f669    mov [ebp-4],ecx"
"	      0055f66c    push 8C085h"
"	      0055f671    push 5BE470h"
"	      0055f676    push 0E9h"
"	      0055f67b    push 5BE3D8h"
"	      0055f680    call 00554F30h"
"	      0055f685    add esp,10h"
"	      0055f688    xor eax,eax"
"	      0055f68a    jmp near ptr 0055F68Fh"
"	      0055f68f    pop edi"
"	      0055f690    pop esi"
"	      0055f691    pop ebx"
"	      0055f692    leave"
"	      0055f693    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f6a0
class cBList<cBBase>* cCopterAnim::GetList() {
// LINE 237:
	asm( 
"	      0055f6a0    push ebp"
"	      0055f6a1    mov ebp,esp"
"	      0055f6a3    sub esp,4"
"	      0055f6a6    push ebx"
"	      0055f6a7    push esi"
"	      0055f6a8    push edi"
"	      0055f6a9    mov [ebp-4],ecx"
"	      0055f6ac    mov eax,ds:[5BF6D4h]"
"	      0055f6b1    jmp near ptr 0055F6B6h"
"	      0055f6b6    pop edi"
"	      0055f6b7    pop esi"
"	      0055f6b8    pop ebx"
"	      0055f6b9    leave"
"	      0055f6ba    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f6c0
struct PrivAnimPartInfo* cCopterAnim::GetPartInfo(short framenum, short partnum) {
// LINE 239:
	asm( 
"	      0055f6c0    push ebp"
"	      0055f6c1    mov ebp,esp"
"	      0055f6c3    sub esp,8"
"	      0055f6c6    push ebx"
"	      0055f6c7    push esi"
"	      0055f6c8    push edi"
"	      0055f6c9    mov [ebp-8],ecx"
"	      0055f6cc    mov eax,[ebp-8]"
"	      0055f6cf    mov eax,[eax+28h]"
"	      0055f6d2    mov [ebp-4],eax"
"	      0055f6d5    mov eax,[ebp-4]"
"	      0055f6d8    mov eax,[eax+0Ch]"
"	      0055f6db    add eax,8"
"	      0055f6de    mov ecx,[ebp-4]"
"	      0055f6e1    cmp eax,[ecx+4]"
"	      0055f6e4    je near ptr 0055F706h"
"	      0055f6ea    push 8C085h"
"	      0055f6ef    push 5BE4B8h"
"	      0055f6f4    push 1A4h"
"	      0055f6f9    push 5BE4F0h"
"	      0055f6fe    call 00554F30h"
"	      0055f703    add esp,10h"
"	      0055f706    mov eax,[ebp-4]"
"	      0055f709    movsx ecx,word ptr [ebp+8]"
"	      0055f70d    cmp [eax+14h],ecx"
"	      0055f710    jle near ptr 0055F73Eh"
"	      0055f716    mov eax,[ebp-4]"
"	      0055f719    movsx ecx,word ptr [ebp+0Ch]"
"	      0055f71d    cmp [eax+10h],ecx"
"	      0055f720    jle near ptr 0055F73Eh"
"	      0055f726    movsx eax,word ptr [ebp+8]"
"	      0055f72a    test eax,eax"
"	      0055f72c    jl near ptr 0055F73Eh"
"	      0055f732    movsx eax,word ptr [ebp+0Ch]"
"	      0055f736    test eax,eax"
"	      0055f738    jge near ptr 0055F75Ah"
"	      0055f73e    push 8C085h"
"	      0055f743    push 5BE49Ch"
"	      0055f748    push 1A6h"
"	      0055f74d    push 5BE4F0h"
"	      0055f752    call 00554F30h"
"	      0055f757    add esp,10h"
"	      0055f75a    jmp near ptr 0055F75Fh"
"	      0055f75f    movsx eax,word ptr [ebp+8]"
"	      0055f763    mov ecx,[ebp-4]"
"	      0055f766    mov ecx,[ecx+4]"
"	      0055f769    mov eax,[ecx+eax*4]"
"	      0055f76c    movsx ecx,word ptr [ebp+0Ch]"
"	      0055f770    lea eax,[eax+ecx*8]"
"	      0055f773    jmp near ptr 0055F778h"
"	      0055f778    pop edi"
"	      0055f779    pop esi"
"	      0055f77a    pop ebx"
"	      0055f77b    leave"
"	      0055f77c    ret 8"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f780
struct PrivAnimPartInfo* cCopterAnim::GetPartInfoBasePtr(short framenum) {
// LINE 240:
	asm( 
"	      0055f780    push ebp"
"	      0055f781    mov ebp,esp"
"	      0055f783    sub esp,8"
"	      0055f786    push ebx"
"	      0055f787    push esi"
"	      0055f788    push edi"
"	      0055f789    mov [ebp-8],ecx"
"	      0055f78c    mov eax,[ebp-8]"
"	      0055f78f    mov eax,[eax+28h]"
"	      0055f792    mov [ebp-4],eax"
"	      0055f795    mov eax,[ebp-4]"
"	      0055f798    mov eax,[eax+0Ch]"
"	      0055f79b    add eax,8"
"	      0055f79e    mov ecx,[ebp-4]"
"	      0055f7a1    cmp eax,[ecx+4]"
"	      0055f7a4    je near ptr 0055F7C6h"
"	      0055f7aa    push 8C085h"
"	      0055f7af    push 5BE4B8h"
"	      0055f7b4    push 1A4h"
"	      0055f7b9    push 5BE4F0h"
"	      0055f7be    call 00554F30h"
"	      0055f7c3    add esp,10h"
"	      0055f7c6    mov eax,[ebp-4]"
"	      0055f7c9    movsx ecx,word ptr [ebp+8]"
"	      0055f7cd    cmp [eax+14h],ecx"
"	      0055f7d0    jle near ptr 0055F7F4h"
"	      0055f7d6    mov eax,[ebp-4]"
"	      0055f7d9    cmp dword ptr [eax+10h],0"
"	      0055f7dd    jle near ptr 0055F7F4h"
"	      0055f7e3    movsx eax,word ptr [ebp+8]"
"	      0055f7e7    test eax,eax"
"	      0055f7e9    jl near ptr 0055F7F4h"
"	      0055f7ef    jmp near ptr 0055F810h"
"	      0055f7f4    push 8C085h"
"	      0055f7f9    push 5BE49Ch"
"	      0055f7fe    push 1A6h"
"	      0055f803    push 5BE4F0h"
"	      0055f808    call 00554F30h"
"	      0055f80d    add esp,10h"
"	      0055f810    jmp near ptr 0055F815h"
"	      0055f815    movsx eax,word ptr [ebp+8]"
"	      0055f819    mov ecx,[ebp-4]"
"	      0055f81c    mov ecx,[ecx+4]"
"	      0055f81f    mov eax,[ecx+eax*4]"
"	      0055f822    jmp near ptr 0055F827h"
"	      0055f827    pop edi"
"	      0055f828    pop esi"
"	      0055f829    pop ebx"
"	      0055f82a    leave"
"	      0055f82b    ret 4"
);
}

