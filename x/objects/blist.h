// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e830
cBList<class cCopterAnim>::cBList<class cCopterAnim>(void) cBList<cCopterAnim>::cBList<cCopterAnim>() {
	// Function registers exception cleanup function at 0x0055e8ad

	this-><cBList<cCopterAnim>+0x04:4> = 0x0;
	this-><cBList<cCopterAnim>+0x08:2> = 0x0;
	__asm        jmp    _T39;
_T39:
	__asm        mov    dword ptr [ebp-4], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0x593654;
// LINE 39:
	this-><cBList<cCopterAnim>+0x0c:4> = 0x0;
// LINE 40:
	this-><cBList<cCopterAnim>+0x10:4> = 0x0;
// LINE 41:
	__asm        jmp    _T62;
_T62:
	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        mov    eax, this;
	__asm        jmp    __RETURN;
_L44596:
	__asm        mov    ecx, this;
	__asm        add    ecx, 4;
	__asm        call   PtrList<cCopterAnim>::~PtrList<cCopterAnim>;
	__asm        ret;
_L44595:
// No fallthrough
	__asm        mov    eax, 0x596030;
	__asm        jmp    near ptr 0x0056F590;
__RETURN:
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
_FOR_46:
	__asm        mov    dword ptr [ebp-0x18], 0;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
	__asm        jmp    _FOR_COND_46;
_FOR_NEXT_46:
	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
_FOR_COND_46:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T61;

	__asm        inc    dword ptr [ebp-0x18];
	__asm        jmp    _FOR_NEXT_46;
_T61:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+8];
	__asm        cmp    eax, [ebp-0x18];
	__asm        je     _T8a;

	doAssert(0x59a254, 0x3d, 0x59a24c, 0x8c085);
_T8a:
	__asm        jmp    _T8f;
_T8f:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+8];
	__asm        test   eax, eax;
	__asm        je     _Tb7;

	doAssert(0x5be1ec, 0x2d, 0x5be27c, 0x8c085);
// LINE 46:
_Tb7:
	__asm        jmp    _Tbc;
_Tbc:
	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        call   _L44659;
	__asm        jmp    __RETURN;
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
// No fallthrough
	__asm        mov    eax, 0x596058;
	__asm        jmp    near ptr 0x0056F590;
__RETURN:
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    fs:[0], eax;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055eac0
void cBList<class cCopterAnim>::Add(class cCopterAnim *) cBList<cCopterAnim>::Add(/*unpacked*/ class cCopterAnim *thing) {
// LINE 119:
	__asm        jmp    _T11;
_T11:
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+0x1C];
	__asm        mov    [ebp-0x30], eax;
	__asm        mov    dword ptr [ebp-0x10], 8;
	__asm        cmp    dword ptr [ebp-0x10], 0;
	__asm        jl     _T35;

	__asm        cmp    dword ptr [ebp-0x10], 0x20;
	__asm        jb     _T4e;
_T35:
	doAssert(0x5be1ec, 0x6d, 0x5bbd7c, 0x8c085);
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
	__asm        jmp    _T96;
_T96:
	__asm        jmp    _T9b;
_T9b:
	__asm        jmp    _Tb8;
_LOOP_a0:
	for (;;) {
		_LOOP_a0:
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
			__asm        jmp    _T119;
		_T119:
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
	}
_T16c:
	__asm        mov    dword ptr [ebp-0x2C], 0;
	__asm        jmp    _T178;
_T178:
	__asm        cmp    dword ptr [ebp-0x2C], 0;
	__asm        je     _T19b;

	doAssert(0x5be1ec, 0x77, 0x5be2a0, 0x8c085);
// LINE 120:
_T19b:
	__asm        cmp    thing, 0;
	__asm        je     _T1f5;
_FOR_1b3:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-8], eax;
	__asm        jmp    _FOR_COND_1b3;
_FOR_NEXT_1b3:
	__asm        mov    eax, [ebp-8];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-8], eax;
_FOR_COND_1b3:
	__asm        cmp    dword ptr [ebp-8], 0;
	__asm        je     _T1de;

	__asm        mov    eax, [ebp-8];
	__asm        mov    ecx, thing;
	__asm        cmp    [eax], ecx;
	__asm        jne    _T1d9;

	__asm        jmp    _T1f5;
_T1d9:
	__asm        jmp    _FOR_NEXT_1b3;
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
	__asm        jmp    __RETURN;
__RETURN:
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

	doAssert(0x5be1ec, 0xb5, 0x5be188, 0x8c085);
// LINE 182:
_T53:
	fileOpened = OpenFile(this-><cBList<cCopterAnim>+0x0c:4>);
// LINE 183:
	__asm        mov    eax, this;
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatFile::ValidFile;
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        jne    _T9e;

	doAssert(0x5be1ec, 0xb7, 0x5be1a8, 0x8c085);
// LINE 184:
_T9e:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x10], 0;
	__asm        jne    _Tca;

	doAssert(0x5be1ec, 0xb8, 0x5be168, 0x8c085);
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
	__asm        jmp    _Tf3;
_Tf3:
	__asm        jmp    _Tf8;
// LINE 189:
_Tf8:
	numThings = this-><cBList<cCopterAnim>+0x0c:4>->FlatResFile::Count(this-><cBList<cCopterAnim>+0x10:4>);
// LINE 190:
_FOR_11f:
	for (count = 0x1; (reinterpret_cast<int16_t>(count) <= reinterpret_cast<int16_t>(numThings)); count++) {
		// LINE 192:
			h = this-><cBList<cCopterAnim>+0x0c:4>->FlatResFile::GetByIndex(this-><cBList<cCopterAnim>+0x10:4>, reinterpret_cast<uint32_t>(count), 0x55e6f0);
		// LINE 193:
			__asm        cmp    h, 0;
			__asm        jne    _T17d;

			doAssert(0x5be1ec, 0xc1, 0x5be148, 0x8c085);
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
			__asm        jmp    _T1b8;
		_T1b8:
			__asm        mov    byte ptr [ebp-4], 1;
			__asm        mov    eax, [ebp-0x30];
			__asm        mov    dword ptr [eax], 0x593658;
			__asm        jmp    _T1ca;
		_T1ca:
			__asm        mov    byte ptr [ebp-4], 0;
			__asm        mov    eax, [ebp-0x30];
			__asm        mov    [ebp-0x2C], eax;
			__asm        jmp    _T1e2;
		_L45278:
			__asm        mov    ecx, [ebp-0x30];
			__asm        call   cBBase::~cBBase;
			__asm        ret;
		// No fallthrough
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

			doAssert(0x5be258, 0xaa, 0x5be320, 0x8c085);
		_T22a:
			__asm        mov    eax, [ebp-0x24];
			__asm        mov    eax, [eax];
			__asm        mov    ecx, [ebp-0x24];
			__asm        call   dword ptr [eax+4];
			__asm        cmp    dword ptr [eax+0xC], 0;
			__asm        jne    _T25b;

			doAssert(0x5be258, 0xab, 0x5be310, 0x8c085);
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
			doAssert(0x5be258, 0xb1, 0x5be2fc, 0x8c085);
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
			doAssert(0x5be258, 0xbc, 0x5be2d4, 0x8c085);
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
			__asm        jmp    _T480;
		_T480:
			__asm        jmp    _T492;
		_L45274:
			__asm        mov    eax, [ebp-0x28];
			__asm        push   eax;
			__asm        call   operator delete;
			__asm        add    esp, 4;
			__asm        ret;
		// LINE 196:
		// No fallthrough
		_T492:
	}
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
	__asm        jmp    __RETURN;
_L45273:
	__asm        mov    eax, 0x596080;
	__asm        jmp    near ptr 0x0056F590;
__RETURN:
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
_FOR_46:
	__asm        mov    dword ptr [ebp-0x18], 0;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
	__asm        jmp    _FOR_COND_46;
_FOR_NEXT_46:
	__asm        mov    eax, [ebp-0x14];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x14], eax;
_FOR_COND_46:
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T61;

	__asm        inc    dword ptr [ebp-0x18];
	__asm        jmp    _FOR_NEXT_46;
_T61:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+8];
	__asm        cmp    eax, [ebp-0x18];
	__asm        je     _T8a;

	doAssert(0x59a254, 0x3d, 0x59a24c, 0x8c085);
_T8a:
	__asm        jmp    _T8f;
_T8f:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+8];
	__asm        test   eax, eax;
	__asm        je     _Tb7;

	doAssert(0x5be1ec, 0x2d, 0x5be27c, 0x8c085);
// LINE 46:
_Tb7:
	__asm        jmp    _Tbc;
_Tbc:
	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        call   _L45612;
	__asm        jmp    __RETURN;
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
// No fallthrough
	__asm        mov    eax, 0x596110;
	__asm        jmp    near ptr 0x0056F590;
__RETURN:
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    fs:[0], eax;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fee0
void cBList<cCopterBody>::Add(/*unpacked*/ class cCopterBody *thing) {
// LINE 119:
	__asm        jmp    _T11;
_T11:
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+0x1C];
	__asm        mov    [ebp-0x30], eax;
	__asm        mov    dword ptr [ebp-0x10], 8;
	__asm        cmp    dword ptr [ebp-0x10], 0;
	__asm        jl     _T35;

	__asm        cmp    dword ptr [ebp-0x10], 0x20;
	__asm        jb     _T4e;
_T35:
	doAssert(0x5be1ec, 0x6d, 0x5bbd7c, 0x8c085);
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
	__asm        jmp    _T96;
_T96:
	__asm        jmp    _T9b;
_T9b:
	__asm        jmp    _Tb8;
_LOOP_a0:
	for (;;) {
		_LOOP_a0:
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
			__asm        jmp    _T119;
		_T119:
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
	}
_T16c:
	__asm        mov    dword ptr [ebp-0x2C], 0;
	__asm        jmp    _T178;
_T178:
	__asm        cmp    dword ptr [ebp-0x2C], 0;
	__asm        je     _T19b;

	doAssert(0x5be1ec, 0x77, 0x5be2a0, 0x8c085);
// LINE 120:
_T19b:
	__asm        cmp    thing, 0;
	__asm        je     _T1f5;
_FOR_1b3:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-8], eax;
	__asm        jmp    _FOR_COND_1b3;
_FOR_NEXT_1b3:
	__asm        mov    eax, [ebp-8];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-8], eax;
_FOR_COND_1b3:
	__asm        cmp    dword ptr [ebp-8], 0;
	__asm        je     _T1de;

	__asm        mov    eax, [ebp-8];
	__asm        mov    ecx, thing;
	__asm        cmp    [eax], ecx;
	__asm        jne    _T1d9;

	__asm        jmp    _T1f5;
_T1d9:
	__asm        jmp    _FOR_NEXT_1b3;
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
	return;
}

