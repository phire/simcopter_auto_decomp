// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e740
void PtrList<cBBase>::Remove(class cBBase* data) {
	struct PtrList<cBBase>::PtrNode** srch;
	struct PtrList<cBBase>::PtrNode* del;

// LINE 42:
	asm( 
"	      0055e740    push ebp"
"	      0055e741    mov ebp,esp"
"	      0055e743    sub esp,14h"
"	      0055e746    push ebx"
"	      0055e747    push esi"
"	      0055e748    push edi"
"	      0055e749    mov this,ecx"
);
// LINE 43:
	asm( 
"	      0055e74c    mov eax,this"
"	      0055e74f    mov srch,eax"
);
// LINE 44:
	asm( 
"	      0055e752    mov eax,srch"
"	      0055e755    cmp dword ptr [eax],0"
"	      0055e758    je near ptr 0055E7DFh"
);
// LINE 45:
	asm( 
"	      0055e75e    mov eax,srch"
"	      0055e761    mov eax,[eax]"
"	      0055e763    mov ecx,data"
"	      0055e766    cmp [eax],ecx"
"	      0055e768    jne near ptr 0055E7CFh"
);
// LINE 46:
	asm( 
"	      0055e76e    mov eax,srch"
"	      0055e771    mov eax,[eax]"
"	      0055e773    mov del,eax"
);
// LINE 47:
	asm( 
"	      0055e776    mov eax,srch"
"	      0055e779    mov eax,[eax]"
"	      0055e77b    mov eax,[eax+4]"
"	      0055e77e    mov ecx,srch"
"	      0055e781    mov [ecx],eax"
);
// LINE 48:
	asm( 
"	      0055e783    mov eax,del"
"	      0055e786    mov [ebp-0Ch],eax"
"	      0055e789    mov eax,[ebp-0Ch]"
"	      0055e78c    mov [ebp-10h],eax"
"	      0055e78f    mov eax,[ebp-10h]"
"	      0055e792    push eax"
"	      0055e793    call 0056A740h"
"	      0055e798    add esp,4"
);
// LINE 49:
	asm( 
"	      0055e79b    mov eax,this"
"	      0055e79e    dec word ptr [eax+4]"
);
// LINE 50:
	asm( 
"	      0055e7a2    mov eax,this"
"	      0055e7a5    movsx eax,word ptr [eax+4]"
"	      0055e7a9    test eax,eax"
"	      0055e7ab    jge near ptr 0055E7CAh"
"	      0055e7b1    push 8C085h"
"	      0055e7b6    push 59A24Ch"
"	      0055e7bb    push 32h"
"	      0055e7bd    push 59A254h"
"	      0055e7c2    call 00554F30h"
"	      0055e7c7    add esp,10h"
);
// LINE 51:
	asm( 
"	      0055e7ca    jmp near ptr 0055E7E4h"
);
// LINE 53:
	asm( 
"	      0055e7cf    mov eax,srch"
"	      0055e7d2    mov eax,[eax]"
"	      0055e7d4    add eax,4"
"	      0055e7d7    mov srch,eax"
);
// LINE 54:
	asm( 
"	      0055e7da    jmp near ptr 0055E752h"
);
// LINE 55:
	asm( 
"	      0055e7df    jmp near ptr 0055E7E4h"
"	      0055e7e4    pop edi"
"	      0055e7e5    pop esi"
"	      0055e7e6    pop ebx"
"	      0055e7e7    leave"
"	      0055e7e8    ret 4"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e7f0
void PtrList<cCopterAnim>::Iter::Reset() {
// LINE 109:
	asm( 
"	      0055e7f0    push ebp"
"	      0055e7f1    mov ebp,esp"
"	      0055e7f3    sub esp,4"
"	      0055e7f6    push ebx"
"	      0055e7f7    push esi"
"	      0055e7f8    push edi"
"	      0055e7f9    mov this,ecx"
"	      0055e7fc    mov eax,this"
"	      0055e7ff    cmp dword ptr [eax],0"
"	      0055e802    je near ptr 0055E81Ah"
"	      0055e808    mov eax,this"
"	      0055e80b    mov eax,[eax]"
"	      0055e80d    mov eax,[eax]"
"	      0055e80f    mov ecx,this"
"	      0055e812    mov [ecx+4],eax"
"	      0055e815    jmp near ptr 0055E824h"
"	      0055e81a    mov eax,this"
"	      0055e81d    mov dword ptr [eax+4],0"
"	      0055e824    jmp near ptr 0055E829h"
"	      0055e829    pop edi"
"	      0055e82a    pop esi"
"	      0055e82b    pop ebx"
"	      0055e82c    leave"
"	      0055e82d    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e8d0
void PtrList<cCopterAnim>::~PtrList<cCopterAnim>() {
// LINE 21:
	asm( 
"	      0055e8d0    push ebp"
"	      0055e8d1    mov ebp,esp"
"	      0055e8d3    sub esp,10h"
"	      0055e8d6    push ebx"
"	      0055e8d7    push esi"
"	      0055e8d8    push edi"
"	      0055e8d9    mov this,ecx"
);
// LINE 22:
	asm( 
"	      0055e8dc    mov eax,this"
"	      0055e8df    cmp dword ptr [eax],0"
"	      0055e8e2    je near ptr 0055E949h"
"	      0055e8e8    mov eax,this"
"	      0055e8eb    mov eax,[eax]"
"	      0055e8ed    mov [ebp-4],eax"
"	      0055e8f0    mov eax,this"
"	      0055e8f3    mov eax,[eax]"
"	      0055e8f5    mov eax,[eax+4]"
"	      0055e8f8    mov ecx,this"
"	      0055e8fb    mov [ecx],eax"
"	      0055e8fd    mov eax,[ebp-4]"
"	      0055e900    mov [ebp-8],eax"
"	      0055e903    mov eax,[ebp-8]"
"	      0055e906    mov [ebp-0Ch],eax"
"	      0055e909    mov eax,[ebp-0Ch]"
"	      0055e90c    push eax"
"	      0055e90d    call 0056A740h"
"	      0055e912    add esp,4"
"	      0055e915    mov eax,this"
"	      0055e918    dec word ptr [eax+4]"
"	      0055e91c    mov eax,this"
"	      0055e91f    movsx eax,word ptr [eax+4]"
"	      0055e923    test eax,eax"
"	      0055e925    jge near ptr 0055E944h"
"	      0055e92b    push 8C085h"
"	      0055e930    push 59A24Ch"
"	      0055e935    push 26h"
"	      0055e937    push 59A254h"
"	      0055e93c    call 00554F30h"
"	      0055e941    add esp,10h"
"	      0055e944    jmp near ptr 0055E8DCh"
"	      0055e949    mov eax,this"
"	      0055e94c    movsx eax,word ptr [eax+4]"
"	      0055e950    test eax,eax"
"	      0055e952    je near ptr 0055E971h"
"	      0055e958    push 8C085h"
"	      0055e95d    push 59A24Ch"
"	      0055e962    push 28h"
"	      0055e964    push 59A254h"
"	      0055e969    call 00554F30h"
"	      0055e96e    add esp,10h"
"	      0055e971    jmp near ptr 0055E976h"
);
// LINE 23:
	asm( 
"	      0055e976    mov eax,this"
"	      0055e979    movsx eax,word ptr [eax+4]"
"	      0055e97d    test eax,eax"
"	      0055e97f    je near ptr 0055E99Eh"
"	      0055e985    push 8C085h"
"	      0055e98a    push 59A274h"
"	      0055e98f    push 17h"
"	      0055e991    push 59A254h"
"	      0055e996    call 00554F30h"
"	      0055e99b    add esp,10h"
);
// LINE 24:
	asm( 
"	      0055e99e    jmp near ptr 0055E9A3h"
"	      0055e9a3    pop edi"
"	      0055e9a4    pop esi"
"	      0055e9a5    pop ebx"
"	      0055e9a6    leave"
"	      0055e9a7    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fcb0
void PtrList<cCopterBody>::~PtrList<cCopterBody>() {
// LINE 21:
	asm( 
"	      0055fcb0    push ebp"
"	      0055fcb1    mov ebp,esp"
"	      0055fcb3    sub esp,10h"
"	      0055fcb6    push ebx"
"	      0055fcb7    push esi"
"	      0055fcb8    push edi"
"	      0055fcb9    mov this,ecx"
);
// LINE 22:
	asm( 
"	      0055fcbc    mov eax,this"
"	      0055fcbf    cmp dword ptr [eax],0"
"	      0055fcc2    je near ptr 0055FD29h"
"	      0055fcc8    mov eax,this"
"	      0055fccb    mov eax,[eax]"
"	      0055fccd    mov [ebp-4],eax"
"	      0055fcd0    mov eax,this"
"	      0055fcd3    mov eax,[eax]"
"	      0055fcd5    mov eax,[eax+4]"
"	      0055fcd8    mov ecx,this"
"	      0055fcdb    mov [ecx],eax"
"	      0055fcdd    mov eax,[ebp-4]"
"	      0055fce0    mov [ebp-8],eax"
"	      0055fce3    mov eax,[ebp-8]"
"	      0055fce6    mov [ebp-0Ch],eax"
"	      0055fce9    mov eax,[ebp-0Ch]"
"	      0055fcec    push eax"
"	      0055fced    call 0056A740h"
"	      0055fcf2    add esp,4"
"	      0055fcf5    mov eax,this"
"	      0055fcf8    dec word ptr [eax+4]"
"	      0055fcfc    mov eax,this"
"	      0055fcff    movsx eax,word ptr [eax+4]"
"	      0055fd03    test eax,eax"
"	      0055fd05    jge near ptr 0055FD24h"
"	      0055fd0b    push 8C085h"
"	      0055fd10    push 59A24Ch"
"	      0055fd15    push 26h"
"	      0055fd17    push 59A254h"
"	      0055fd1c    call 00554F30h"
"	      0055fd21    add esp,10h"
"	      0055fd24    jmp near ptr 0055FCBCh"
"	      0055fd29    mov eax,this"
"	      0055fd2c    movsx eax,word ptr [eax+4]"
"	      0055fd30    test eax,eax"
"	      0055fd32    je near ptr 0055FD51h"
"	      0055fd38    push 8C085h"
"	      0055fd3d    push 59A24Ch"
"	      0055fd42    push 28h"
"	      0055fd44    push 59A254h"
"	      0055fd49    call 00554F30h"
"	      0055fd4e    add esp,10h"
"	      0055fd51    jmp near ptr 0055FD56h"
);
// LINE 23:
	asm( 
"	      0055fd56    mov eax,this"
"	      0055fd59    movsx eax,word ptr [eax+4]"
"	      0055fd5d    test eax,eax"
"	      0055fd5f    je near ptr 0055FD7Eh"
"	      0055fd65    push 8C085h"
"	      0055fd6a    push 59A274h"
"	      0055fd6f    push 17h"
"	      0055fd71    push 59A254h"
"	      0055fd76    call 00554F30h"
"	      0055fd7b    add esp,10h"
);
// LINE 24:
	asm( 
"	      0055fd7e    jmp near ptr 0055FD83h"
"	      0055fd83    pop edi"
"	      0055fd84    pop esi"
"	      0055fd85    pop ebx"
"	      0055fd86    leave"
"	      0055fd87    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fd90
void PtrList<cCopterBody>::Iter::Reset() {
// LINE 109:
	asm( 
"	      0055fd90    push ebp"
"	      0055fd91    mov ebp,esp"
"	      0055fd93    sub esp,4"
"	      0055fd96    push ebx"
"	      0055fd97    push esi"
"	      0055fd98    push edi"
"	      0055fd99    mov this,ecx"
"	      0055fd9c    mov eax,this"
"	      0055fd9f    cmp dword ptr [eax],0"
"	      0055fda2    je near ptr 0055FDBAh"
"	      0055fda8    mov eax,this"
"	      0055fdab    mov eax,[eax]"
"	      0055fdad    mov eax,[eax]"
"	      0055fdaf    mov ecx,this"
"	      0055fdb2    mov [ecx+4],eax"
"	      0055fdb5    jmp near ptr 0055FDC4h"
"	      0055fdba    mov eax,this"
"	      0055fdbd    mov dword ptr [eax+4],0"
"	      0055fdc4    jmp near ptr 0055FDC9h"
"	      0055fdc9    pop edi"
"	      0055fdca    pop esi"
"	      0055fdcb    pop ebx"
"	      0055fdcc    leave"
"	      0055fdcd    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00551de0
void PtrList<StdResLoader>::~PtrList<StdResLoader>() {
// LINE 21:
	asm( 
"	      00551de0    push ebp"
"	      00551de1    mov ebp,esp"
"	      00551de3    sub esp,10h"
"	      00551de6    push ebx"
"	      00551de7    push esi"
"	      00551de8    push edi"
"	      00551de9    mov this,ecx"
);
// LINE 22:
	asm( 
"	      00551dec    mov eax,this"
"	      00551def    cmp dword ptr [eax],0"
"	      00551df2    je near ptr 00551E59h"
"	      00551df8    mov eax,this"
"	      00551dfb    mov eax,[eax]"
"	      00551dfd    mov [ebp-4],eax"
"	      00551e00    mov eax,this"
"	      00551e03    mov eax,[eax]"
"	      00551e05    mov eax,[eax+4]"
"	      00551e08    mov ecx,this"
"	      00551e0b    mov [ecx],eax"
"	      00551e0d    mov eax,[ebp-4]"
"	      00551e10    mov [ebp-8],eax"
"	      00551e13    mov eax,[ebp-8]"
"	      00551e16    mov [ebp-0Ch],eax"
"	      00551e19    mov eax,[ebp-0Ch]"
"	      00551e1c    push eax"
"	      00551e1d    call 0056A740h"
"	      00551e22    add esp,4"
"	      00551e25    mov eax,this"
"	      00551e28    dec word ptr [eax+4]"
"	      00551e2c    mov eax,this"
"	      00551e2f    movsx eax,word ptr [eax+4]"
"	      00551e33    test eax,eax"
"	      00551e35    jge near ptr 00551E54h"
"	      00551e3b    push 8C085h"
"	      00551e40    push 59A24Ch"
"	      00551e45    push 26h"
"	      00551e47    push 59A254h"
"	      00551e4c    call 00554F30h"
"	      00551e51    add esp,10h"
"	      00551e54    jmp near ptr 00551DECh"
"	      00551e59    mov eax,this"
"	      00551e5c    movsx eax,word ptr [eax+4]"
"	      00551e60    test eax,eax"
"	      00551e62    je near ptr 00551E81h"
"	      00551e68    push 8C085h"
"	      00551e6d    push 59A24Ch"
"	      00551e72    push 28h"
"	      00551e74    push 59A254h"
"	      00551e79    call 00554F30h"
"	      00551e7e    add esp,10h"
"	      00551e81    jmp near ptr 00551E86h"
);
// LINE 23:
	asm( 
"	      00551e86    mov eax,this"
"	      00551e89    movsx eax,word ptr [eax+4]"
"	      00551e8d    test eax,eax"
"	      00551e8f    je near ptr 00551EAEh"
"	      00551e95    push 8C085h"
"	      00551e9a    push 59A274h"
"	      00551e9f    push 17h"
"	      00551ea1    push 59A254h"
"	      00551ea6    call 00554F30h"
"	      00551eab    add esp,10h"
);
// LINE 24:
	asm( 
"	      00551eae    jmp near ptr 00551EB3h"
"	      00551eb3    pop edi"
"	      00551eb4    pop esi"
"	      00551eb5    pop ebx"
"	      00551eb6    leave"
"	      00551eb7    ret"
);
}

