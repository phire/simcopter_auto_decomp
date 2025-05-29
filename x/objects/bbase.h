// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e6f0
void cBBase::SwizzleBBaseHeader(void * __ptr32 val, long size) {
	short size1;

// LINE 225:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
// LINE 227:
	__asm        mov    size1, 0x40;
// LINE 228:
	__asm        movsx  eax, size1;
	__asm        cmp    eax, size;
	__asm        jle    near ptr 0x0055E728;
	__asm        push   0x8C085;
	__asm        push   0x5BE230;
	__asm        push   0xE4;
	__asm        push   0x5BE258;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 230:
	__asm        mov    eax, val;
	__asm        push   eax;
	__asm        call   0x00566906;
	__asm        add    esp, 4;
// LINE 231:
	__asm        jmp    near ptr 0x0055E739;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f1e0
unsigned long cBBase::GetBodyType() {
// LINE 18:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        push   0x8C085;
	__asm        push   0x5BE330;
	__asm        push   0x12;
	__asm        push   0x5BE258;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x0055F20C;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f220
class cBList<cBBase>* cBBase::GetList() {
// LINE 21:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        push   0x8C085;
	__asm        push   0x5BE358;
	__asm        push   0x15;
	__asm        push   0x5BE258;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x0055F24C;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f260
unsigned short cBBase::CanDestroy() {
// LINE 23:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    ax, 1;
	__asm        jmp    near ptr 0x0055F275;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f280
void cBBase::InstallArrayPointers(unsigned short fromdisk) {
// LINE 28:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        push   0x8C085;
	__asm        push   0x5BE37C;
	__asm        push   0x1C;
	__asm        push   0x5BE258;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x0055F2AA;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    4;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f2c0
void cBBase::~cBBase() {
// LINE 43:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0x593688;
// LINE 44:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+4], 0;
	__asm        je     near ptr 0x0055F300;
// LINE 46:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        call   0x00554A3D;
	__asm        add    esp, 4;
// LINE 47:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        call   0x005548C3;
	__asm        add    esp, 4;
// LINE 53:
	__asm        jmp    near ptr 0x0055F305;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f310
void cBBase::Destroy() {
// LINE 56:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 0x34;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 57:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+8];
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        jne    near ptr 0x0055F337;
	__asm        jmp    near ptr 0x0055F4D4;
// LINE 59:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0x20];
	__asm        cmp    eax, 0xFFFFFFFF;
	__asm        je     near ptr 0x0055F3F9;
// LINE 60:
// Block start:
	unsigned short fileOpened;
	void * __ptr32 h;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        push   eax;
	__asm        call   0x005674E0;
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
	__asm        call   0x0055320B;
	__asm        mov    h, eax;
// LINE 62:
	__asm        cmp    h, 0;
	__asm        jne    near ptr 0x0055F3B4;
	__asm        push   0x8C085;
	__asm        push   0x5BE3AC;
	__asm        push   0x3E;
	__asm        push   0x5BE258;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ebp-0x14], eax;
// LINE 63:
	__asm        jmp    near ptr 0x0055F3CA;
// LINE 64:
	__asm        test   reinterpret_cast<uint32_t>(fileOpened), 0xFFFF;
	__asm        je     near ptr 0x0055F3F9;
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
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x30], eax;
	__asm        mov    eax, [ebp-0x30];
	__asm        mov    [ebp-0x24], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     near ptr 0x0055F49D;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        cmp    [eax], ecx;
	__asm        jne    near ptr 0x0055F48D;
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
	__asm        call   0x0056A740;
	__asm        add    esp, 4;
	__asm        mov    eax, [ebp-0x30];
	__asm        dec    word ptr [eax+4];
	__asm        mov    eax, [ebp-0x30];
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jge    near ptr 0x0055F488;
	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x32;
	__asm        push   0x59A254;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x0055F4A2;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x24], eax;
	__asm        jmp    near ptr 0x0055F410;
	__asm        jmp    near ptr 0x0055F4A2;
	__asm        mov    eax, this;
	__asm        mov    [ebp-0x1C], eax;
	__asm        mov    eax, [ebp-0x1C];
	__asm        mov    [ebp-0x18], eax;
	__asm        cmp    dword ptr [ebp-0x18], 0;
	__asm        je     near ptr 0x0055F4CA;
	__asm        push   1;
	__asm        mov    eax, [ebp-0x18];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x18];
	__asm        call   dword ptr [eax+0x10];
	__asm        jmp    near ptr 0x0055F4CA;
	__asm        jmp    near ptr 0x0055F4CF;
// LINE 68:
	__asm        jmp    near ptr 0x0055F4D4;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f4e0
void cBBase::Dirty() {
// LINE 75:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 76:
	__asm        mov    eax, this;
	__asm        mov    word ptr [eax+0x22], 1;
// LINE 77:
	__asm        jmp    near ptr 0x0055F4FA;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f500
unsigned short cBBase::IsDirty() {
// LINE 79:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 80:
	__asm        mov    eax, this;
	__asm        mov    ax, [eax+0x22];
	__asm        jmp    near ptr 0x0055F518;
// LINE 81:
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f520
void cBBase::WriteToDisk() {
// LINE 84:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 113:
	__asm        jmp    near ptr 0x0055F531;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

