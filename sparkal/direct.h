// Function in module: Simradio.obj
// FUNCTION: COPTER_D 0x0043a7d0
int32_t Directory::ReadDirectoryDirectoryEntriesIntoStringList(/*packed*/ class list<basic_string<char>>& sDirectoryEntries, long lFilter) {
// LINE 200:
	__asm        and    lFilter, 3;
// LINE 201:
	__asm        or     lFilter, 4;
// LINE 202:
	return this->Directory::ReadDirectorySpecificEntriesIntoStringList(sDirectoryEntries, lFilter);
// LINE 203:
}

