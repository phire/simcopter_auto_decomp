// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e830
cBList<class cCopterAnim>::cBList<class cCopterAnim>(void) cBList<cCopterAnim>::cBList<cCopterAnim>() {
	// Function registers exception cleanup function at 0x0055e8ad

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
	__asm        mov    eax, this;
	__asm        mov    word ptr [eax+8], 0;
	__asm        jmp    near ptr 0x0055E869;

	__asm        mov    dword ptr [ebp-4], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0x593654;
// LINE 39:
	this-><cBList<cCopterAnim>+0x0c:4> = 0x0;
// LINE 40:
	this-><cBList<cCopterAnim>+0x10:4> = 0x0;
// LINE 41:
	__asm        jmp    near ptr 0x0055E892;

	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        mov    eax, this;
	__asm        jmp    _T87;
_L44596:
	__asm        mov    ecx, this;
	__asm        add    ecx, 4;
	__asm        call   PtrList<cCopterAnim>::~PtrList<cCopterAnim>;
	__asm        ret;
_L44595:
	__asm        mov    eax, 0x596030;
	__asm        jmp    near ptr 0x0056F590;
_T87:
	__asm        mov    ecx, [ebp-0xC];
	__asm        mov    fs:[0], ecx;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e9b0
cBList<class cCopterAnim>::~cBList<class cCopterAnim>(void) cBList<cCopterAnim>::~cBList<cCopterAnim>() {
	// Function registers exception cleanup function at 0x0055eaa5

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0x593654;
	__asm        mov    dword ptr [ebp-4], 0;
// LINE 45:
	__asm        mov    dword ptr [ebp-0x18], 0;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
	__asm        jmp    _T4f;
_T46:
	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
_T4f:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T61;

	__asm        inc    dword ptr [ebp-0x18];
	__asm        jmp    _T46;
_T61:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+8];
	__asm        cmp    eax, [ebp-0x18];
	__asm        je     _T8a;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x3D;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T8a:
	__asm        jmp    near ptr 0x0055EA3F;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+8];
	__asm        test   eax, eax;
	__asm        je     _Tb7;

	__asm        push   0x8C085;
	__asm        push   0x5BE27C;
	__asm        push   0x2D;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 46:
_Tb7:
	__asm        jmp    near ptr 0x0055EA6C;

	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        call   0x0055EA7D;
	__asm        jmp    _Tff;
_L44659:
	__asm        cmp    this, 0;
	__asm        je     _Te5;

	__asm        mov    eax, this;
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x10], eax;
	__asm        jmp    _Tec;
_Te5:
	__asm        mov    dword ptr [ebp-0x10], 0;
_Tec:
	__asm        mov    ecx, [ebp-0x10];
	__asm        call   PtrList<cCopterAnim>::~PtrList<cCopterAnim>;
	__asm        ret;
_L44658:
	__asm        mov    eax, 0x596058;
	__asm        jmp    near ptr 0x0056F590;
_Tff:
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    fs:[0], eax;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055eac0
void cBList<class cCopterAnim>::Add(class cCopterAnim *) cBList<cCopterAnim>::Add(/*unpacked*/ class cCopterAnim *thing) {
// LINE 119:
	__asm        jmp    near ptr 0x0055EAD1;

	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+0x1C];
	__asm        mov    [ebp-0x30], eax;
	__asm        mov    dword ptr [ebp-0x10], 8;
	__asm        cmp    dword ptr [ebp-0x10], 0;
	__asm        jl     _T35;

	__asm        cmp    dword ptr [ebp-0x10], 0x20;
	__asm        jb     _T4e;
_T35:
	__asm        push   0x8C085;
	__asm        push   0x5BBD7C;
	__asm        push   0x6D;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T4e:
	__asm        cmp    this, 0;
	__asm        je     _T66;

	__asm        mov    eax, this;
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x1C], eax;
	__asm        jmp    _T6d;
_T66:
	__asm        mov    dword ptr [ebp-0x1C], 0;
_T6d:
	__asm        mov    eax, [ebp-0x1C];
	__asm        mov    [ebp-0x18], eax;
	__asm        cmp    dword ptr [ebp-0x18], 0;
	__asm        je     _T8a;

	__asm        mov    eax, [ebp-0x18];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x14], eax;
	__asm        jmp    _T91;
_T8a:
	__asm        mov    dword ptr [ebp-0x14], 0;
_T91:
	__asm        jmp    near ptr 0x0055EB56;

	__asm        jmp    near ptr 0x0055EB5B;

	__asm        jmp    _Tb8;
_Ta0:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _Tb3;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
_Tb3:
	__asm        jmp    _Tb8;
_Tb8:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _Td8;

	__asm        mov    eax, [ebp-0x14];
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T16c;

	__asm        jmp    _Tec;

	__asm        jmp    _Te2;
_Td8:
	__asm        jmp    _T16c;

	__asm        jmp    _Tec;
_Te2:
	__asm        cmp    dword ptr [ebp-0x24], 0;
	__asm        je     _T16c;
_Tec:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T108;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x20], eax;
	__asm        jmp    _T114;

	__asm        jmp    _T114;
_T108:
	__asm        mov    dword ptr [ebp-0x20], 0;
	__asm        jmp    _T114;
_T114:
	__asm        jmp    near ptr 0x0055EBD9;

	__asm        mov    eax, [ebp-0x20];
	__asm        mov    eax, [eax+0x1C];
	__asm        mov    cl, [ebp-0x10];
	__asm        shr    eax, cl;
	__asm        mov    edx, [ebp-0x30];
	__asm        mov    cl, [ebp-0x10];
	__asm        shr    edx, cl;
	__asm        cmp    eax, edx;
	__asm        jne    _T167;

	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T150;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x2C], eax;
	__asm        jmp    _T162;

	__asm        jmp    _T15c;
_T150:
	__asm        mov    dword ptr [ebp-0x2C], 0;
	__asm        jmp    _T162;
_T15c:
	__asm        mov    eax, [ebp-0x28];
	__asm        mov    [ebp-0x2C], eax;
_T162:
	__asm        jmp    _T178;
_T167:
	__asm        jmp    _Ta0;
_T16c:
	__asm        mov    dword ptr [ebp-0x2C], 0;
	__asm        jmp    _T178;
_T178:
	__asm        cmp    dword ptr [ebp-0x2C], 0;
	__asm        je     _T19b;

	__asm        push   0x8C085;
	__asm        push   0x5BE2A0;
	__asm        push   0x77;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 120:
_T19b:
	__asm        cmp    thing, 0;
	__asm        je     _T1f5;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-8], eax;
	__asm        jmp    _T1bc;
_T1b3:
	__asm        mov    eax, [ebp-8];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-8], eax;
_T1bc:
	__asm        cmp    dword ptr [ebp-8], 0;
	__asm        je     _T1de;

	__asm        mov    eax, [ebp-8];
	__asm        mov    ecx, thing;
	__asm        cmp    [eax], ecx;
	__asm        jne    _T1d9;

	__asm        jmp    _T1f5;
_T1d9:
	__asm        jmp    _T1b3;
_T1de:
	__asm        jmp    _T1fa;

	__asm        jmp    _T1f5;

	__asm        test   dword ptr [ebp-0xC], 0xFFFF;
	__asm        je     _T1fa;
_T1f5:
	__asm        jmp    _T230;
_T1fa:
	__asm        push   8;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, thing;
	__asm        mov    ecx, [ebp-4];
	__asm        mov    [ecx], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, [ebp-4];
	__asm        mov    [ecx+4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
	__asm        mov    eax, this;
	__asm        inc    word ptr [eax+8];
	__asm        jmp    _T230;
// LINE 121:
_T230:
	__asm        jmp    near ptr 0x0055ECF5;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055ed00
void cBList<class cCopterAnim>::LoadAll(void) cBList<cCopterAnim>::LoadAll() {
	/*bp-0x10*/  short numThings;
	/*bp-0x14*/  short count;
	/*bp-0x18*/  void * __ptr32 h;
	/*bp-0x1c*/  unsigned short fileOpened;

	// Function registers exception cleanup function at 0x0055f1c0
// LINE 181:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0xC], 0;
	__asm        jne    _T53;

	__asm        push   0x8C085;
	__asm        push   0x5BE188;
	__asm        push   0xB5;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 182:
_T53:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0xC];
	__asm        push   eax;
	__asm        call   OpenFile;
	__asm        add    esp, 4;
	__asm        mov    fileOpened, ax;
// LINE 183:
	__asm        mov    eax, this;
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatFile::ValidFile;
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        jne    _T9e;

	__asm        push   0x8C085;
	__asm        push   0x5BE1A8;
	__asm        push   0xB7;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 184:
_T9e:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x10], 0;
	__asm        jne    _Tca;

	__asm        push   0x8C085;
	__asm        push   0x5BE168;
	__asm        push   0xB8;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_Tca:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ebp-0x20], eax;
// LINE 185:
	__asm        push   0x55D950;
	__asm        push   8;
	__asm        push   0x41525050;
	__asm        mov    eax, [ebp-0x20];
	__asm        push   eax;
	__asm        call   _cArray::LoadAllArrays;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x0055EDF3;

	__asm        jmp    near ptr 0x0055EDF8;
// LINE 189:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x10];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::Count;
	__asm        mov    numThings, ax;
// LINE 190:
	__asm        mov    count, 1;
	__asm        jmp    _T123;
_T11f:
	__asm        inc    count;
_T123:
	__asm        movsx  eax, count;
	__asm        movsx  ecx, numThings;
	__asm        cmp    eax, ecx;
	__asm        jg     _T497;
// LINE 192:
	__asm        push   0x55E6F0;
	__asm        mov    eax, reinterpret_cast<uint32_t>(count);
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x10];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::GetByIndex;
	__asm        mov    h, eax;
// LINE 193:
	__asm        cmp    h, 0;
	__asm        jne    _T17d;

	__asm        push   0x8C085;
	__asm        push   0x5BE148;
	__asm        push   0xC1;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T17d:
	__asm        mov    eax, h;
	__asm        mov    [ebp-0x148], eax;
// LINE 195:
	__asm        push   0x2C;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x28], eax;
	__asm        mov    dword ptr [ebp-4], 0;
	__asm        cmp    dword ptr [ebp-0x28], 0;
	__asm        je     _T1e7;

	__asm        mov    eax, [ebp-0x28];
	__asm        mov    [ebp-0x30], eax;
	__asm        mov    eax, [ebp-0x30];
	__asm        mov    dword ptr [eax], 0x593688;
	__asm        jmp    near ptr 0x0055EEB8;

	__asm        mov    byte ptr [ebp-4], 1;
	__asm        mov    eax, [ebp-0x30];
	__asm        mov    dword ptr [eax], 0x593658;
	__asm        jmp    near ptr 0x0055EECA;

	__asm        mov    byte ptr [ebp-4], 0;
	__asm        mov    eax, [ebp-0x30];
	__asm        mov    [ebp-0x2C], eax;
	__asm        jmp    _T1e2;
_L45278:
	__asm        mov    ecx, [ebp-0x30];
	__asm        call   cBBase::~cBBase;
	__asm        ret;
_T1e2:
	__asm        jmp    _T1ee;
_T1e7:
	__asm        mov    dword ptr [ebp-0x2C], 0;
_T1ee:
	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        mov    eax, [ebp-0x2C];
	__asm        mov    [ebp-0x24], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jne    _T22a;

	__asm        push   0x8C085;
	__asm        push   0x5BE320;
	__asm        push   0xAA;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T22a:
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        cmp    dword ptr [eax+0xC], 0;
	__asm        jne    _T25b;

	__asm        push   0x8C085;
	__asm        push   0x5BE310;
	__asm        push   0xAB;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T25b:
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        push   eax;
	__asm        call   OpenFile;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x134], ax;
	__asm        mov    eax, [ebp-0x148];
	__asm        mov    ecx, [ebp-0x24];
	__asm        mov    [ecx+4], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        call   Memory::HGetSize;
	__asm        add    esp, 4;
	__asm        mov    ecx, [ebp-0x24];
	__asm        mov    [ecx+8], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        cmp    dword ptr [eax+0x10], 0;
	__asm        je     _T2df;

	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        mov    ebx, [eax+0x10];
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::GetResType;
	__asm        cmp    ebx, eax;
	__asm        je     _T2fb;
_T2df:
	__asm        push   0x8C085;
	__asm        push   0x5BE2FC;
	__asm        push   0xB1;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T2fb:
	__asm        mov    eax, [ebp-0x24];
	__asm        add    eax, 0x20;
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::GetID;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    word ptr [eax+0x22], 0;
	__asm        lea    eax, [ebp-0x130];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::GetName;
	__asm        xor    eax, eax;
	__asm        mov    al, [ebp-0x130];
	__asm        cmp    eax, 0x10;
	__asm        jbe    _T35e;

	__asm        mov    byte ptr [ebp-0x130], 0x10;
_T35e:
	__asm        push   0x10;
	__asm        mov    eax, [ebp-0x24];
	__asm        add    eax, 0xC;
	__asm        push   eax;
	__asm        lea    eax, [ebp-0x130];
	__asm        push   eax;
	__asm        call   Memory::BlockMove;
	__asm        add    esp, 0xC;
	__asm        mov    eax, [ebp-0x24];
	__asm        add    eax, 0xC;
	__asm        push   eax;
	__asm        call   PStr2Long;
	__asm        add    esp, 4;
	__asm        mov    ecx, [ebp-0x24];
	__asm        mov    [ecx+0x1C], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        cmp    dword ptr [eax+0x1C], 0;
	__asm        je     _T3a8;

	__asm        mov    eax, [ebp-0x24];
	__asm        xor    ecx, ecx;
	__asm        mov    cl, [eax+0xC];
	__asm        test   ecx, ecx;
	__asm        jne    _T3c4;
_T3a8:
	__asm        push   0x8C085;
	__asm        push   0x5BE2D4;
	__asm        push   0xBC;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T3c4:
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::Detach;
	__asm        test   dword ptr [ebp-0x134], 0xFFFF;
	__asm        je     _T41f;

	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ebp-0x138], eax;
	__asm        mov    eax, [ebp-0x138];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x13C], eax;
	__asm        mov    eax, [ebp-0x13C];
	__asm        mov    ecx, [ebp-0x138];
	__asm        call   dword ptr [eax+0xC];
_T41f:
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        call   Memory::Stash;
	__asm        add    esp, 4;
	__asm        mov    ecx, [ebp-0x24];
	__asm        mov    [ecx+0x24], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    word ptr [eax+0x22], 0;
	__asm        push   1;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+0xC];
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, [ebp-0x24];
	__asm        call   dword ptr [eax+4];
	__asm        mov    [ebp-0x140], eax;
	__asm        mov    eax, [ebp-0x140];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x144], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x144];
	__asm        mov    ecx, [ebp-0x140];
	__asm        call   dword ptr [eax];
	__asm        jmp    near ptr 0x0055F180;

	__asm        jmp    _T492;
_L45274:
	__asm        mov    eax, [ebp-0x28];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        ret;
// LINE 196:
_T492:
	__asm        jmp    _T11f;
// LINE 197:
_T497:
	__asm        test   reinterpret_cast<uint32_t>(fileOpened), 0xFFFF;
	__asm        je     _T4bb;
// LINE 198:
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0xC];
	__asm        mov    edx, [ecx];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   dword ptr [edx+0xC];
// LINE 199:
_T4bb:
	__asm        jmp    _T4ca;
_L45273:
	__asm        mov    eax, 0x596080;
	__asm        jmp    near ptr 0x0056F590;
_T4ca:
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    fs:[0], eax;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fdd0
void cBList<cCopterBody>::~cBList<cCopterBody>() {
	// Function registers exception cleanup function at 0x0055fec5

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0x593650;
	__asm        mov    dword ptr [ebp-4], 0;
// LINE 45:
	__asm        mov    dword ptr [ebp-0x18], 0;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
	__asm        jmp    _T4f;
_T46:
	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
_T4f:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T61;

	__asm        inc    dword ptr [ebp-0x18];
	__asm        jmp    _T46;
_T61:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+8];
	__asm        cmp    eax, [ebp-0x18];
	__asm        je     _T8a;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x3D;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T8a:
	__asm        jmp    near ptr 0x0055FE5F;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+8];
	__asm        test   eax, eax;
	__asm        je     _Tb7;

	__asm        push   0x8C085;
	__asm        push   0x5BE27C;
	__asm        push   0x2D;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 46:
_Tb7:
	__asm        jmp    near ptr 0x0055FE8C;

	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        call   0x0055FE9D;
	__asm        jmp    _Tff;
_L45612:
	__asm        cmp    this, 0;
	__asm        je     _Te5;

	__asm        mov    eax, this;
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x10], eax;
	__asm        jmp    _Tec;
_Te5:
	__asm        mov    dword ptr [ebp-0x10], 0;
_Tec:
	__asm        mov    ecx, [ebp-0x10];
	__asm        call   PtrList<cCopterBody>::~PtrList<cCopterBody>;
	__asm        ret;
_L45611:
	__asm        mov    eax, 0x596110;
	__asm        jmp    near ptr 0x0056F590;
_Tff:
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    fs:[0], eax;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fee0
void cBList<cCopterBody>::Add(/*unpacked*/ class cCopterBody *thing) {
// LINE 119:
	__asm        jmp    near ptr 0x0055FEF1;

	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+0x1C];
	__asm        mov    [ebp-0x30], eax;
	__asm        mov    dword ptr [ebp-0x10], 8;
	__asm        cmp    dword ptr [ebp-0x10], 0;
	__asm        jl     _T35;

	__asm        cmp    dword ptr [ebp-0x10], 0x20;
	__asm        jb     _T4e;
_T35:
	__asm        push   0x8C085;
	__asm        push   0x5BBD7C;
	__asm        push   0x6D;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T4e:
	__asm        cmp    this, 0;
	__asm        je     _T66;

	__asm        mov    eax, this;
	__asm        add    eax, 4;
	__asm        mov    [ebp-0x1C], eax;
	__asm        jmp    _T6d;
_T66:
	__asm        mov    dword ptr [ebp-0x1C], 0;
_T6d:
	__asm        mov    eax, [ebp-0x1C];
	__asm        mov    [ebp-0x18], eax;
	__asm        cmp    dword ptr [ebp-0x18], 0;
	__asm        je     _T8a;

	__asm        mov    eax, [ebp-0x18];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x14], eax;
	__asm        jmp    _T91;
_T8a:
	__asm        mov    dword ptr [ebp-0x14], 0;
_T91:
	__asm        jmp    near ptr 0x0055FF76;

	__asm        jmp    near ptr 0x0055FF7B;

	__asm        jmp    _Tb8;
_Ta0:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _Tb3;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
_Tb3:
	__asm        jmp    _Tb8;
_Tb8:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _Td8;

	__asm        mov    eax, [ebp-0x14];
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T16c;

	__asm        jmp    _Tec;

	__asm        jmp    _Te2;
_Td8:
	__asm        jmp    _T16c;

	__asm        jmp    _Tec;
_Te2:
	__asm        cmp    dword ptr [ebp-0x24], 0;
	__asm        je     _T16c;
_Tec:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T108;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x20], eax;
	__asm        jmp    _T114;

	__asm        jmp    _T114;
_T108:
	__asm        mov    dword ptr [ebp-0x20], 0;
	__asm        jmp    _T114;
_T114:
	__asm        jmp    near ptr 0x0055FFF9;

	__asm        mov    eax, [ebp-0x20];
	__asm        mov    eax, [eax+0x1C];
	__asm        mov    cl, [ebp-0x10];
	__asm        shr    eax, cl;
	__asm        mov    edx, [ebp-0x30];
	__asm        mov    cl, [ebp-0x10];
	__asm        shr    edx, cl;
	__asm        cmp    eax, edx;
	__asm        jne    _T167;

	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T150;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x2C], eax;
	__asm        jmp    _T162;

	__asm        jmp    _T15c;
_T150:
	__asm        mov    dword ptr [ebp-0x2C], 0;
	__asm        jmp    _T162;
_T15c:
	__asm        mov    eax, [ebp-0x28];
	__asm        mov    [ebp-0x2C], eax;
_T162:
	__asm        jmp    _T178;
_T167:
	__asm        jmp    _Ta0;
_T16c:
	__asm        mov    dword ptr [ebp-0x2C], 0;
	__asm        jmp    _T178;
_T178:
	__asm        cmp    dword ptr [ebp-0x2C], 0;
	__asm        je     _T19b;

	__asm        push   0x8C085;
	__asm        push   0x5BE2A0;
	__asm        push   0x77;
	__asm        push   0x5BE1EC;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 120:
_T19b:
	__asm        cmp    thing, 0;
	__asm        je     _T1f5;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-8], eax;
	__asm        jmp    _T1bc;
_T1b3:
	__asm        mov    eax, [ebp-8];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-8], eax;
_T1bc:
	__asm        cmp    dword ptr [ebp-8], 0;
	__asm        je     _T1de;

	__asm        mov    eax, [ebp-8];
	__asm        mov    ecx, thing;
	__asm        cmp    [eax], ecx;
	__asm        jne    _T1d9;

	__asm        jmp    _T1f5;
_T1d9:
	__asm        jmp    _T1b3;
_T1de:
	__asm        jmp    _T1fa;

	__asm        jmp    _T1f5;

	__asm        test   dword ptr [ebp-0xC], 0xFFFF;
	__asm        je     _T1fa;
_T1f5:
	__asm        jmp    _T230;
_T1fa:
	__asm        push   8;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, thing;
	__asm        mov    ecx, [ebp-4];
	__asm        mov    [ecx], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, [ebp-4];
	__asm        mov    [ecx+4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
	__asm        mov    eax, this;
	__asm        inc    word ptr [eax+8];
	__asm        jmp    _T230;
// LINE 121:
_T230:
	__asm        jmp    near ptr 0x00560115;
}

