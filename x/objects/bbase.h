// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e6f0
void cBBase::SwizzleBBaseHeader(void * __ptr32 val, long size) {
	/*bp-0x4*/   short size1;

// LINE 227:
	size1 = 0x40;
// LINE 228:
	__asm        movsx  eax, size1;
	__asm        cmp    eax, size;
	__asm        jle    _T38;

	doAssert(0x5be258, 0xe4, 0x5be230, 0x8c085);
// LINE 230:
_T38:
	Swizzle4(val);
// LINE 231:
	return;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f1e0
unsigned long cBBase::GetBodyType() {

	__asm        push   0x8C085;
	__asm        push   0x5BE330;
	__asm        push   0x12;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        xor    eax, eax;
	__asm        jmp    __RETURN;
__RETURN:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f220
/*unpacked*/ class cBList<cBBase>* cBBase::GetList() {

	__asm        push   0x8C085;
	__asm        push   0x5BE358;
	__asm        push   0x15;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        xor    eax, eax;
	__asm        jmp    __RETURN;
__RETURN:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f260
unsigned short cBBase::CanDestroy() {

	return 0x1;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f280
void cBBase::InstallArrayPointers(unsigned short fromdisk) {

	doAssert(0x5be258, 0x1c, 0x5be37c, 0x8c085);
	__asm        jmp    __RETURN;
__RETURN:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f2c0
void cBBase::~cBBase() {

	this-><vftable> = 0x593688;
// LINE 44:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+4], 0;
	__asm        je     _T40;
// LINE 46:
	Memory::HUnlock(this->fDataHandle);
// LINE 47:
	Memory::HFree(this->fDataHandle);
// LINE 53:
_T40:
	return;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f310
void cBBase::Destroy() {
// LINE 57:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+8];
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        jne    _T27;

	return;
// LINE 59:
_T27:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0x20];
	__asm        cmp    eax, 0xFFFFFFFF;
	__asm        je     _Te9;
// LINE 60:
// Block start:
	/*bp-0x4*/   void * __ptr32 h;
	/*bp-0x8*/   unsigned short fileOpened;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        push   eax;
	__asm        call   OpenFile;
	__asm        add    esp, 4;
	__asm        mov    fileOpened, ax;
// LINE 61:
	__asm        push   0;
	__asm        mov    eax, this;
	__asm        mov    ax, [eax+0x20];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0x10];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::GetByID;
	__asm        mov    h, eax;
// LINE 62:
	__asm        cmp    h, 0;
	__asm        jne    _Ta4;

	doAssert(0x5be258, 0x3e, 0x5be3ac, 0x8c085);
_Ta4:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ebp-0x14], eax;
// LINE 63:
	__asm        jmp    _Tba;
// LINE 64:
_Tba:
	__asm        test   reinterpret_cast<uint32_t>(fileOpened), 0xFFFF;
	__asm        je     _Te9;
// LINE 65:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ebp-0xC], eax;
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x10], eax;
	__asm        mov    eax, [ebp-0x10];
	__asm        mov    ecx, [ebp-0xC];
	__asm        call   dword ptr [eax+0xC];
// LINE 67:
// Block end:
_Te9:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x30], eax;
	__asm        mov    eax, [ebp-0x30];
	__asm        mov    [ebp-0x24], eax;
__WHILE_100:
	__asm        mov    eax, [ebp-0x24];
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T18d;

	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        cmp    [eax], ecx;
	__asm        jne    _T17d;

	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x20], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, [ebp-0x24];
	__asm        mov    [ecx], eax;
	__asm        mov    eax, [ebp-0x20];
	__asm        mov    [ebp-0x28], eax;
	__asm        mov    eax, [ebp-0x28];
	__asm        mov    [ebp-0x2C], eax;
	__asm        mov    eax, [ebp-0x2C];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        mov    eax, [ebp-0x30];
	__asm        dec    word ptr [eax+4];
	__asm        mov    eax, [ebp-0x30];
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jge    _T178;

	doAssert(0x59a254, 0x32, 0x59a24c, 0x8c085);
_T178:
	__asm        jmp    _T192;
_T17d:
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x24], eax;
	__asm        jmp    __WHILE_100;
_T18d:
	__asm        jmp    _T192;
_T192:
	__asm        mov    eax, this;
	__asm        mov    [ebp-0x1C], eax;
	__asm        mov    eax, [ebp-0x1C];
	__asm        mov    [ebp-0x18], eax;
	__asm        cmp    dword ptr [ebp-0x18], 0;
	__asm        je     _T1ba;

	__asm        push   1;
	__asm        mov    eax, [ebp-0x18];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x18];
	__asm        call   dword ptr [eax+0x10];
	__asm        jmp    _T1ba;
_T1ba:
	__asm        jmp    _T1bf;
// LINE 68:
_T1bf:
	return;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f4e0
void cBBase::Dirty() {
// LINE 76:
	this->fDataChanged = 0x1;
// LINE 77:
	return;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f500
unsigned short cBBase::IsDirty() {
// LINE 80:
	return this->fDataChanged;
// LINE 81:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f520
void cBBase::WriteToDisk() {
// LINE 113:
	return;
}

