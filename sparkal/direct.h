// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x0043a7d0
int  Directory::ReadDirectoryDirectoryEntriesIntoStringList(class list<basic_string<char>>& sDirectoryEntries, long lFilter) {
// LINE 199:
	asm( 
"	      0043a7d0    push ebp"
"	      0043a7d1    mov ebp,esp"
"	      0043a7d3    sub esp,4"
"	      0043a7d6    push ebx"
"	      0043a7d7    push esi"
"	      0043a7d8    push edi"
"	      0043a7d9    mov this,ecx"
);
// LINE 200:
	asm( 
"	      0043a7dc    and lFilter,3"
);
// LINE 201:
	asm( 
"	      0043a7e0    or lFilter,4"
);
// LINE 202:
	asm( 
"	      0043a7e4    mov eax,lFilter"
"	      0043a7e7    push eax"
"	      0043a7e8    mov eax,sDirectoryEntries"
"	      0043a7eb    push eax"
"	      0043a7ec    mov ecx,this"
"	      0043a7ef    call 0048494Dh"
"	      0043a7f4    jmp near ptr 0043A7F9h"
);
// LINE 203:
	asm( 
"	      0043a7f9    pop edi"
"	      0043a7fa    pop esi"
"	      0043a7fb    pop ebx"
"	      0043a7fc    leave"
"	      0043a7fd    ret 8"
);
}

