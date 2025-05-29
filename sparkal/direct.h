// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x0043a7d0
int  Directory::ReadDirectoryDirectoryEntriesIntoStringList(class list<basic_string<char>>& sDirectoryEntries, long lFilter) {
// LINE 199:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 200:
	__asm        and    lFilter, 3;
// LINE 201:
	__asm        or     lFilter, 4;
// LINE 202:
	__asm        mov    eax, lFilter;
	__asm        push   eax;
	__asm        mov    eax, sDirectoryEntries;
	__asm        push   eax;
	__asm        mov    ecx, this;
	__asm        call   0x0048494D;
	__asm        jmp    near ptr 0x0043A7F9;
// LINE 203:
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    8;
}

