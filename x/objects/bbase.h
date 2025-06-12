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

	__asm        push   0x8C085;
	__asm        push   0x5BE230;
	__asm        push   0xE4;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 230:
_T38:
	__asm        mov    eax, val;
	__asm        push   eax;
	__asm        call   Swizzle4;
	__asm        add    esp, 4;
// LINE 231:
	__asm        jmp    _T49;
_T49:
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
	__asm        jmp    _T2c;
_T2c:
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
	__asm        jmp    _T2c;
_T2c:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f260
unsigned short cBBase::CanDestroy() {

	__asm        mov    ax, 1;
	__asm        jmp    _T15;
_T15:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f280
void cBBase::InstallArrayPointers(unsigned short fromdisk) {

	__asm        push   0x8C085;
	__asm        push   0x5BE37C;
	__asm        push   0x1C;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        jmp    _T2a;
_T2a:
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
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        call   Memory::HUnlock;
	__asm        add    esp, 4;
// LINE 47:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        call   Memory::HFree;
	__asm        add    esp, 4;
// LINE 53:
_T40:
	__asm        jmp    _T45;
_T45:
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

	__asm        jmp    _T1c4;
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

	__asm        push   0x8C085;
	__asm        push   0x5BE3AC;
	__asm        push   0x3E;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
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
_T100:
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

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x32;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T178:
	__asm        jmp    _T192;
_T17d:
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x24], eax;
	__asm        jmp    _T100;
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
	__asm        jmp    _T1c4;
_T1c4:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f4e0
void cBBase::Dirty() {
// LINE 76:
	this->fDataChanged = 0x1;
// LINE 77:
	__asm        jmp    _T1a;
_T1a:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f500
unsigned short cBBase::IsDirty() {
// LINE 80:
	__asm        mov    eax, this;
	__asm        mov    ax, [eax+0x22];
	__asm        jmp    _T18;
// LINE 81:
_T18:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f520
void cBBase::WriteToDisk() {
// LINE 113:
	__asm        jmp    _T11;
_T11:
}

