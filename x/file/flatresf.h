// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e660
void FlatResFile::FlatResFile() {
	// Function registers exception cleanup function at 0x0055e6d0

	__asm        mov    ecx, this;
	__asm        call   FlatFile::FlatFile;
	__asm        mov    dword ptr [ebp-4], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0x593508;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x114], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x110], 0;
	__asm        jmp    _T58;
_T58:
	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        mov    eax, this;
	__asm        jmp    __RETURN;
_L39766:
	__asm        mov    ecx, this;
	__asm        call   FlatFile::~FlatFile;
	__asm        ret;
_L39765:
// No fallthrough
	__asm        mov    eax, 0x596008;
	__asm        jmp    ___CxxFrameHandler;
__RETURN:
	__asm        mov    ecx, [ebp-0xC];
	__asm        mov    fs:[0], ecx;
}

