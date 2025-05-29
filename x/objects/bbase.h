// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e6f0
void cBBase::SwizzleBBaseHeader(void * __ptr32 val, long size) {
	short size1;

// LINE 225:
	asm( 
"	      0055e6f0    push ebp"
"	      0055e6f1    mov ebp,esp"
"	      0055e6f3    sub esp,4"
"	      0055e6f6    push ebx"
"	      0055e6f7    push esi"
"	      0055e6f8    push edi"
);
// LINE 227:
	asm( 
"	      0055e6f9    mov size1,40h"
);
// LINE 228:
	asm( 
"	      0055e6ff    movsx eax,size1"
"	      0055e703    cmp eax,size"
"	      0055e706    jle near ptr 0055E728h"
"	      0055e70c    push 8C085h"
"	      0055e711    push 5BE230h"
"	      0055e716    push 0E4h"
"	      0055e71b    push 5BE258h"
"	      0055e720    call 00554F30h"
"	      0055e725    add esp,10h"
);
// LINE 230:
	asm( 
"	      0055e728    mov eax,val"
"	      0055e72b    push eax"
"	      0055e72c    call 00566906h"
"	      0055e731    add esp,4"
);
// LINE 231:
	asm( 
"	      0055e734    jmp near ptr 0055E739h"
"	      0055e739    pop edi"
"	      0055e73a    pop esi"
"	      0055e73b    pop ebx"
"	      0055e73c    leave"
"	      0055e73d    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f1e0
unsigned long cBBase::GetBodyType() {
// LINE 18:
	asm( 
"	      0055f1e0    push ebp"
"	      0055f1e1    mov ebp,esp"
"	      0055f1e3    sub esp,4"
"	      0055f1e6    push ebx"
"	      0055f1e7    push esi"
"	      0055f1e8    push edi"
"	      0055f1e9    mov this,ecx"
"	      0055f1ec    push 8C085h"
"	      0055f1f1    push 5BE330h"
"	      0055f1f6    push 12h"
"	      0055f1f8    push 5BE258h"
"	      0055f1fd    call 00554F30h"
"	      0055f202    add esp,10h"
"	      0055f205    xor eax,eax"
"	      0055f207    jmp near ptr 0055F20Ch"
"	      0055f20c    pop edi"
"	      0055f20d    pop esi"
"	      0055f20e    pop ebx"
"	      0055f20f    leave"
"	      0055f210    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f220
class cBList<cBBase>* cBBase::GetList() {
// LINE 21:
	asm( 
"	      0055f220    push ebp"
"	      0055f221    mov ebp,esp"
"	      0055f223    sub esp,4"
"	      0055f226    push ebx"
"	      0055f227    push esi"
"	      0055f228    push edi"
"	      0055f229    mov this,ecx"
"	      0055f22c    push 8C085h"
"	      0055f231    push 5BE358h"
"	      0055f236    push 15h"
"	      0055f238    push 5BE258h"
"	      0055f23d    call 00554F30h"
"	      0055f242    add esp,10h"
"	      0055f245    xor eax,eax"
"	      0055f247    jmp near ptr 0055F24Ch"
"	      0055f24c    pop edi"
"	      0055f24d    pop esi"
"	      0055f24e    pop ebx"
"	      0055f24f    leave"
"	      0055f250    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f260
unsigned short cBBase::CanDestroy() {
// LINE 23:
	asm( 
"	      0055f260    push ebp"
"	      0055f261    mov ebp,esp"
"	      0055f263    sub esp,4"
"	      0055f266    push ebx"
"	      0055f267    push esi"
"	      0055f268    push edi"
"	      0055f269    mov this,ecx"
"	      0055f26c    mov ax,1"
"	      0055f270    jmp near ptr 0055F275h"
"	      0055f275    pop edi"
"	      0055f276    pop esi"
"	      0055f277    pop ebx"
"	      0055f278    leave"
"	      0055f279    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f280
void cBBase::InstallArrayPointers(unsigned short fromdisk) {
// LINE 28:
	asm( 
"	      0055f280    push ebp"
"	      0055f281    mov ebp,esp"
"	      0055f283    sub esp,4"
"	      0055f286    push ebx"
"	      0055f287    push esi"
"	      0055f288    push edi"
"	      0055f289    mov this,ecx"
"	      0055f28c    push 8C085h"
"	      0055f291    push 5BE37Ch"
"	      0055f296    push 1Ch"
"	      0055f298    push 5BE258h"
"	      0055f29d    call 00554F30h"
"	      0055f2a2    add esp,10h"
"	      0055f2a5    jmp near ptr 0055F2AAh"
"	      0055f2aa    pop edi"
"	      0055f2ab    pop esi"
"	      0055f2ac    pop ebx"
"	      0055f2ad    leave"
"	      0055f2ae    ret 4"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f2c0
void cBBase::~cBBase() {
// LINE 43:
	asm( 
"	      0055f2c0    push ebp"
"	      0055f2c1    mov ebp,esp"
"	      0055f2c3    sub esp,4"
"	      0055f2c6    push ebx"
"	      0055f2c7    push esi"
"	      0055f2c8    push edi"
"	      0055f2c9    mov this,ecx"
"	      0055f2cc    mov eax,this"
"	      0055f2cf    mov dword ptr [eax],593688h"
);
// LINE 44:
	asm( 
"	      0055f2d5    mov eax,this"
"	      0055f2d8    cmp dword ptr [eax+4],0"
"	      0055f2dc    je near ptr 0055F300h"
);
// LINE 46:
	asm( 
"	      0055f2e2    mov eax,this"
"	      0055f2e5    mov eax,[eax+4]"
"	      0055f2e8    push eax"
"	      0055f2e9    call 00554A3Dh"
"	      0055f2ee    add esp,4"
);
// LINE 47:
	asm( 
"	      0055f2f1    mov eax,this"
"	      0055f2f4    mov eax,[eax+4]"
"	      0055f2f7    push eax"
"	      0055f2f8    call 005548C3h"
"	      0055f2fd    add esp,4"
);
// LINE 53:
	asm( 
"	      0055f300    jmp near ptr 0055F305h"
"	      0055f305    pop edi"
"	      0055f306    pop esi"
"	      0055f307    pop ebx"
"	      0055f308    leave"
"	      0055f309    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f310
void cBBase::Destroy() {
// LINE 56:
	asm( 
"	      0055f310    push ebp"
"	      0055f311    mov ebp,esp"
"	      0055f313    sub esp,34h"
"	      0055f316    push ebx"
"	      0055f317    push esi"
"	      0055f318    push edi"
"	      0055f319    mov this,ecx"
);
// LINE 57:
	asm( 
"	      0055f31c    mov eax,this"
"	      0055f31f    mov eax,[eax]"
"	      0055f321    mov ecx,this"
"	      0055f324    call dword ptr [eax+8]"
"	      0055f327    movzx eax,ax"
"	      0055f32a    test eax,eax"
"	      0055f32c    jne near ptr 0055F337h"
"	      0055f332    jmp near ptr 0055F4D4h"
);
// LINE 59:
	asm( 
"	      0055f337    mov eax,this"
"	      0055f33a    movsx eax,word ptr [eax+20h]"
"	      0055f33e    cmp eax,0FFFFFFFFh"
"	      0055f341    je near ptr 0055F3F9h"
);
// LINE 60:
// Block start:
	unsigned short fileOpened;
	void * __ptr32 h;
	asm( 
"	      0055f347    mov eax,this"
"	      0055f34a    mov eax,[eax]"
"	      0055f34c    mov ecx,this"
"	      0055f34f    call dword ptr [eax+4]"
"	      0055f352    mov eax,[eax+0Ch]"
"	      0055f355    push eax"
"	      0055f356    call 005674E0h"
"	      0055f35b    add esp,4"
"	      0055f35e    mov fileOpened,ax"
);
// LINE 61:
	asm( 
"	      0055f362    push 0"
"	      0055f364    mov eax,this"
"	      0055f367    mov ax,[eax+20h]"
"	      0055f36b    push eax"
"	      0055f36c    mov eax,this"
"	      0055f36f    mov eax,[eax]"
"	      0055f371    mov ecx,this"
"	      0055f374    call dword ptr [eax+4]"
"	      0055f377    mov eax,[eax+10h]"
"	      0055f37a    push eax"
"	      0055f37b    mov eax,this"
"	      0055f37e    mov eax,[eax]"
"	      0055f380    mov ecx,this"
"	      0055f383    call dword ptr [eax+4]"
"	      0055f386    mov ecx,[eax+0Ch]"
"	      0055f389    call 0055320Bh"
"	      0055f38e    mov h,eax"
);
// LINE 62:
	asm( 
"	      0055f391    cmp h,0"
"	      0055f395    jne near ptr 0055F3B4h"
"	      0055f39b    push 8C085h"
"	      0055f3a0    push 5BE3ACh"
"	      0055f3a5    push 3Eh"
"	      0055f3a7    push 5BE258h"
"	      0055f3ac    call 00554F30h"
"	      0055f3b1    add esp,10h"
"	      0055f3b4    mov eax,this"
"	      0055f3b7    mov eax,[eax]"
"	      0055f3b9    mov ecx,this"
"	      0055f3bc    call dword ptr [eax+4]"
"	      0055f3bf    mov eax,[eax+0Ch]"
"	      0055f3c2    mov [ebp-14h],eax"
);
// LINE 63:
	asm( 
"	      0055f3c5    jmp near ptr 0055F3CAh"
);
// LINE 64:
	asm( 
"	      0055f3ca    test reinterpret_cast<uint32_t>(fileOpened),0FFFFh"
"	      0055f3d1    je near ptr 0055F3F9h"
);
// LINE 65:
	asm( 
"	      0055f3d7    mov eax,this"
"	      0055f3da    mov eax,[eax]"
"	      0055f3dc    mov ecx,this"
"	      0055f3df    call dword ptr [eax+4]"
"	      0055f3e2    mov eax,[eax+0Ch]"
"	      0055f3e5    mov [ebp-0Ch],eax"
"	      0055f3e8    mov eax,[ebp-0Ch]"
"	      0055f3eb    mov eax,[eax]"
"	      0055f3ed    mov [ebp-10h],eax"
"	      0055f3f0    mov eax,[ebp-10h]"
"	      0055f3f3    mov ecx,[ebp-0Ch]"
"	      0055f3f6    call dword ptr [eax+0Ch]"
);
// LINE 67:
// Block end:
	asm( 
"	      0055f3f9    mov eax,this"
"	      0055f3fc    mov eax,[eax]"
"	      0055f3fe    mov ecx,this"
"	      0055f401    call dword ptr [eax+4]"
"	      0055f404    add eax,4"
"	      0055f407    mov [ebp-30h],eax"
"	      0055f40a    mov eax,[ebp-30h]"
"	      0055f40d    mov [ebp-24h],eax"
"	      0055f410    mov eax,[ebp-24h]"
"	      0055f413    cmp dword ptr [eax],0"
"	      0055f416    je near ptr 0055F49Dh"
"	      0055f41c    mov eax,[ebp-24h]"
"	      0055f41f    mov eax,[eax]"
"	      0055f421    mov ecx,this"
"	      0055f424    cmp [eax],ecx"
"	      0055f426    jne near ptr 0055F48Dh"
"	      0055f42c    mov eax,[ebp-24h]"
"	      0055f42f    mov eax,[eax]"
"	      0055f431    mov [ebp-20h],eax"
"	      0055f434    mov eax,[ebp-24h]"
"	      0055f437    mov eax,[eax]"
"	      0055f439    mov eax,[eax+4]"
"	      0055f43c    mov ecx,[ebp-24h]"
"	      0055f43f    mov [ecx],eax"
"	      0055f441    mov eax,[ebp-20h]"
"	      0055f444    mov [ebp-28h],eax"
"	      0055f447    mov eax,[ebp-28h]"
"	      0055f44a    mov [ebp-2Ch],eax"
"	      0055f44d    mov eax,[ebp-2Ch]"
"	      0055f450    push eax"
"	      0055f451    call 0056A740h"
"	      0055f456    add esp,4"
"	      0055f459    mov eax,[ebp-30h]"
"	      0055f45c    dec word ptr [eax+4]"
"	      0055f460    mov eax,[ebp-30h]"
"	      0055f463    movsx eax,word ptr [eax+4]"
"	      0055f467    test eax,eax"
"	      0055f469    jge near ptr 0055F488h"
"	      0055f46f    push 8C085h"
"	      0055f474    push 59A24Ch"
"	      0055f479    push 32h"
"	      0055f47b    push 59A254h"
"	      0055f480    call 00554F30h"
"	      0055f485    add esp,10h"
"	      0055f488    jmp near ptr 0055F4A2h"
"	      0055f48d    mov eax,[ebp-24h]"
"	      0055f490    mov eax,[eax]"
"	      0055f492    add eax,4"
"	      0055f495    mov [ebp-24h],eax"
"	      0055f498    jmp near ptr 0055F410h"
"	      0055f49d    jmp near ptr 0055F4A2h"
"	      0055f4a2    mov eax,this"
"	      0055f4a5    mov [ebp-1Ch],eax"
"	      0055f4a8    mov eax,[ebp-1Ch]"
"	      0055f4ab    mov [ebp-18h],eax"
"	      0055f4ae    cmp dword ptr [ebp-18h],0"
"	      0055f4b2    je near ptr 0055F4CAh"
"	      0055f4b8    push 1"
"	      0055f4ba    mov eax,[ebp-18h]"
"	      0055f4bd    mov eax,[eax]"
"	      0055f4bf    mov ecx,[ebp-18h]"
"	      0055f4c2    call dword ptr [eax+10h]"
"	      0055f4c5    jmp near ptr 0055F4CAh"
"	      0055f4ca    jmp near ptr 0055F4CFh"
);
// LINE 68:
	asm( 
"	      0055f4cf    jmp near ptr 0055F4D4h"
"	      0055f4d4    pop edi"
"	      0055f4d5    pop esi"
"	      0055f4d6    pop ebx"
"	      0055f4d7    leave"
"	      0055f4d8    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f4e0
void cBBase::Dirty() {
// LINE 75:
	asm( 
"	      0055f4e0    push ebp"
"	      0055f4e1    mov ebp,esp"
"	      0055f4e3    sub esp,4"
"	      0055f4e6    push ebx"
"	      0055f4e7    push esi"
"	      0055f4e8    push edi"
"	      0055f4e9    mov this,ecx"
);
// LINE 76:
	asm( 
"	      0055f4ec    mov eax,this"
"	      0055f4ef    mov word ptr [eax+22h],1"
);
// LINE 77:
	asm( 
"	      0055f4f5    jmp near ptr 0055F4FAh"
"	      0055f4fa    pop edi"
"	      0055f4fb    pop esi"
"	      0055f4fc    pop ebx"
"	      0055f4fd    leave"
"	      0055f4fe    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f500
unsigned short cBBase::IsDirty() {
// LINE 79:
	asm( 
"	      0055f500    push ebp"
"	      0055f501    mov ebp,esp"
"	      0055f503    sub esp,4"
"	      0055f506    push ebx"
"	      0055f507    push esi"
"	      0055f508    push edi"
"	      0055f509    mov this,ecx"
);
// LINE 80:
	asm( 
"	      0055f50c    mov eax,this"
"	      0055f50f    mov ax,[eax+22h]"
"	      0055f513    jmp near ptr 0055F518h"
);
// LINE 81:
	asm( 
"	      0055f518    pop edi"
"	      0055f519    pop esi"
"	      0055f51a    pop ebx"
"	      0055f51b    leave"
"	      0055f51c    ret"
);
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f520
void cBBase::WriteToDisk() {
// LINE 84:
	asm( 
"	      0055f520    push ebp"
"	      0055f521    mov ebp,esp"
"	      0055f523    sub esp,4"
"	      0055f526    push ebx"
"	      0055f527    push esi"
"	      0055f528    push edi"
"	      0055f529    mov this,ecx"
);
// LINE 113:
	asm( 
"	      0055f52c    jmp near ptr 0055F531h"
"	      0055f531    pop edi"
"	      0055f532    pop esi"
"	      0055f533    pop ebx"
"	      0055f534    leave"
"	      0055f535    ret"
);
}

