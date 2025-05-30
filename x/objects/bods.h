// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f920
class cBBase *  cCopterBody::MakeNew(void * __ptr32 h) {
	class cCopterBody* thing;

	// Function registers exception cleanup function at 0x0055fc56
// LINE 111:
	__asm        push   0x34;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x14], eax;
	__asm        mov    dword ptr [ebp-4], 0;
	__asm        cmp    dword ptr [ebp-0x14], 0;
	__asm        je     _T8b;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    [ebp-0x1C], eax;
	__asm        mov    eax, [ebp-0x1C];
	__asm        mov    dword ptr [eax], 0x593688;
	__asm        jmp    near ptr 0x0055F973;

	__asm        mov    byte ptr [ebp-4], 1;
	__asm        mov    eax, [ebp-0x1C];
	__asm        mov    dword ptr [eax], 0x5936B0;
	__asm        mov    eax, [ebp-0x1C];
	__asm        mov    word ptr [eax+0x30], 0xFFFF;
	__asm        jmp    near ptr 0x0055F98E;

	__asm        mov    byte ptr [ebp-4], 0;
	__asm        mov    eax, [ebp-0x1C];
	__asm        mov    [ebp-0x18], eax;
	__asm        jmp    _T86;
_L45526:
	__asm        mov    ecx, [ebp-0x1C];
	__asm        call   cBBase::~cBBase;
	__asm        ret;
_T86:
	__asm        jmp    _T92;

_T8b:
	__asm        mov    dword ptr [ebp-0x18], 0;
_T92:
	__asm        mov    dword ptr [ebp-4], 0xFFFFFFFF;
	__asm        mov    eax, [ebp-0x18];
	__asm        mov    thing, eax;
// LINE 112:
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jne    _Tce;

	__asm        push   0x8C085;
	__asm        push   0x5BE320;
	__asm        push   0xAA;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_Tce:
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        cmp    dword ptr [eax+0xC], 0;
	__asm        jne    _Tff;

	__asm        push   0x8C085;
	__asm        push   0x5BE310;
	__asm        push   0xAB;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_Tff:
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        push   eax;
	__asm        call   OpenFile;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x120], ax;
	__asm        mov    eax, h;
	__asm        mov    ecx, thing;
	__asm        mov    [ecx+4], eax;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        call   Memory::HGetSize;
	__asm        add    esp, 4;
	__asm        mov    ecx, thing;
	__asm        mov    [ecx+8], eax;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        cmp    dword ptr [eax+0x10], 0;
	__asm        je     _T180;

	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        mov    ebx, [eax+0x10];
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::GetResType;
	__asm        cmp    ebx, eax;
	__asm        je     _T19c;

_T180:
	__asm        push   0x8C085;
	__asm        push   0x5BE2FC;
	__asm        push   0xB1;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T19c:
	__asm        mov    eax, thing;
	__asm        add    eax, 0x20;
	__asm        push   eax;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::GetID;
	__asm        mov    eax, thing;
	__asm        mov    word ptr [eax+0x22], 0;
	__asm        lea    eax, [ebp-0x11C];
	__asm        push   eax;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::GetName;
	__asm        xor    eax, eax;
	__asm        mov    al, [ebp-0x11C];
	__asm        cmp    eax, 0x10;
	__asm        jbe    _T1ff;

	__asm        mov    byte ptr [ebp-0x11C], 0x10;
_T1ff:
	__asm        push   0x10;
	__asm        mov    eax, thing;
	__asm        add    eax, 0xC;
	__asm        push   eax;
	__asm        lea    eax, [ebp-0x11C];
	__asm        push   eax;
	__asm        call   Memory::BlockMove;
	__asm        add    esp, 0xC;
	__asm        mov    eax, thing;
	__asm        add    eax, 0xC;
	__asm        push   eax;
	__asm        call   PStr2Long;
	__asm        add    esp, 4;
	__asm        mov    ecx, thing;
	__asm        mov    [ecx+0x1C], eax;
	__asm        mov    eax, thing;
	__asm        cmp    dword ptr [eax+0x1C], 0;
	__asm        je     _T249;

	__asm        mov    eax, thing;
	__asm        xor    ecx, ecx;
	__asm        mov    cl, [eax+0xC];
	__asm        test   ecx, ecx;
	__asm        jne    _T265;

_T249:
	__asm        push   0x8C085;
	__asm        push   0x5BE2D4;
	__asm        push   0xBC;
	__asm        push   0x5BE258;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T265:
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        mov    ecx, [eax+0xC];
	__asm        call   FlatResFile::Detach;
	__asm        test   dword ptr [ebp-0x120], 0xFFFF;
	__asm        je     _T2c0;

	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ebp-0x124], eax;
	__asm        mov    eax, [ebp-0x124];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x128], eax;
	__asm        mov    eax, [ebp-0x128];
	__asm        mov    ecx, [ebp-0x124];
	__asm        call   dword ptr [eax+0xC];
_T2c0:
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        call   Memory::Stash;
	__asm        add    esp, 4;
	__asm        mov    ecx, thing;
	__asm        mov    [ecx+0x24], eax;
	__asm        mov    eax, thing;
	__asm        mov    word ptr [eax+0x22], 0;
	__asm        push   1;
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+0xC];
	__asm        mov    eax, thing;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, thing;
	__asm        call   dword ptr [eax+4];
	__asm        mov    [ebp-0x12C], eax;
	__asm        mov    eax, [ebp-0x12C];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x130], eax;
	__asm        mov    eax, thing;
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x130];
	__asm        mov    ecx, [ebp-0x12C];
	__asm        call   dword ptr [eax];
	__asm        jmp    near ptr 0x0055FC41;
// LINE 113:
	__asm        mov    eax, thing;
	__asm        jmp    _T340;
// LINE 114:
_L45522:
	__asm        mov    eax, [ebp-0x14];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        ret;
_L45521:
	__asm        mov    eax, 0x5960E0;
	__asm        jmp    near ptr 0x0056F590;

_T340:
	__asm        mov    ecx, [ebp-0xC];
	__asm        mov    fs:[0], ecx;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fc70
void  cCopterBody::WriteToDisk() {
// LINE 139:
	__asm        jmp    near ptr 0x0055FC81;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fc90
class cBList<class cBBase> *  cCopterBody::GetList() {

	__asm        mov    eax, ds:[0x5BE630];
	__asm        jmp    near ptr 0x0055FCA6;
}

