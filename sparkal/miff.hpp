// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9c0
long MIFF::GetPresentRecordType() {
// LINE 164:
	asm( 
"	      004ac9c0    push ebp"
"	      004ac9c1    mov ebp,esp"
"	      004ac9c3    sub esp,4"
"	      004ac9c6    push ebx"
"	      004ac9c7    push esi"
"	      004ac9c8    push edi"
"	      004ac9c9    mov this,ecx"
"	      004ac9cc    mov eax,this"
"	      004ac9cf    mov eax,[eax+114h]"
"	      004ac9d5    jmp near ptr 004AC9DAh"
"	      004ac9da    pop edi"
"	      004ac9db    pop esi"
"	      004ac9dc    pop ebx"
"	      004ac9dd    leave"
"	      004ac9de    ret"
);
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004ac9e0
long MIFF::GetPresentRecordSize() {
// LINE 165:
	asm( 
"	      004ac9e0    push ebp"
"	      004ac9e1    mov ebp,esp"
"	      004ac9e3    sub esp,4"
"	      004ac9e6    push ebx"
"	      004ac9e7    push esi"
"	      004ac9e8    push edi"
"	      004ac9e9    mov this,ecx"
"	      004ac9ec    mov eax,this"
"	      004ac9ef    mov eax,[eax+118h]"
"	      004ac9f5    jmp near ptr 004AC9FAh"
"	      004ac9fa    pop edi"
"	      004ac9fb    pop esi"
"	      004ac9fc    pop ebx"
"	      004ac9fd    leave"
"	      004ac9fe    ret"
);
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca00
long MIFF::GetPresentRecordDataSize() {
// LINE 166:
	asm( 
"	      004aca00    push ebp"
"	      004aca01    mov ebp,esp"
"	      004aca03    sub esp,4"
"	      004aca06    push ebx"
"	      004aca07    push esi"
"	      004aca08    push edi"
"	      004aca09    mov this,ecx"
"	      004aca0c    mov eax,this"
"	      004aca0f    mov eax,[eax+118h]"
"	      004aca15    sub eax,8"
"	      004aca18    jmp near ptr 004ACA1Dh"
"	      004aca1d    pop edi"
"	      004aca1e    pop esi"
"	      004aca1f    pop ebx"
"	      004aca20    leave"
"	      004aca21    ret"
);
}

// Function in module: Miff.obj
// FUNCTION: COPTER_D 0x004aca30
long MIFF::GetPresentRecordIndex() {
// LINE 167:
	asm( 
"	      004aca30    push ebp"
"	      004aca31    mov ebp,esp"
"	      004aca33    sub esp,4"
"	      004aca36    push ebx"
"	      004aca37    push esi"
"	      004aca38    push edi"
"	      004aca39    mov this,ecx"
"	      004aca3c    mov eax,this"
"	      004aca3f    mov eax,[eax+11Ch]"
"	      004aca45    jmp near ptr 004ACA4Ah"
"	      004aca4a    pop edi"
"	      004aca4b    pop esi"
"	      004aca4c    pop ebx"
"	      004aca4d    leave"
"	      004aca4e    ret"
);
}

