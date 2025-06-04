// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x0043a7d0
int  Directory::ReadDirectoryDirectoryEntriesIntoStringList(/*packed*/ class list<basic_string<char>>& sDirectoryEntries, long lFilter) {
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
	__asm        call   Directory::ReadDirectorySpecificEntriesIntoStringList;
	__asm        jmp    near ptr 0x0043A7F9;
// LINE 203:
}

