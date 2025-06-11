// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004cd5a0
void cGZXParamBitstream<t_alloc,t_free>::cGZXParamBitstream<t_alloc,t_free>(uint32_t pagesize) {

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0x5923F8;
	__asm        jmp    near ptr 0x004CD5C3;

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x16], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x1A], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x1E], 0;
	__asm        jmp    near ptr 0x004CD5EF;

	__asm        mov    dword ptr [ebp-0x1C], 0;
	__asm        lea    eax, [ebp-0x1C];
	__asm        mov    [ebp-0x24], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x28], eax;
	__asm        jmp    near ptr 0x004CD60F;

	__asm        mov    word ptr [ebp-0x20], 0;
	__asm        lea    eax, [ebp-0x20];
	__asm        mov    [ebp-0x28], eax;
	__asm        mov    eax, [ebp-0x28];
	__asm        mov    ax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x2C], ax;
	__asm        jmp    near ptr 0x004CD630;

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x24], 0;
	__asm        jmp    near ptr 0x004CD642;

	__asm        mov    dword ptr [ebp-0x2C], 0;
	__asm        lea    eax, [ebp-0x2C];
	__asm        mov    [ebp-0x34], eax;
	__asm        mov    eax, [ebp-0x34];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x32], eax;
	__asm        jmp    near ptr 0x004CD662;

	__asm        mov    word ptr [ebp-0x30], 0;
	__asm        lea    eax, [ebp-0x30];
	__asm        mov    [ebp-0x38], eax;
	__asm        mov    eax, [ebp-0x38];
	__asm        mov    ax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x36], ax;
	__asm        jmp    near ptr 0x004CD683;

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x2E], 0;
	__asm        jmp    near ptr 0x004CD695;

	__asm        jmp    near ptr 0x004CD69A;

	this-><cGZXParamBitstream<t_alloc,t_free>+0x00> = 0x592440;
// LINE 234:
	__asm        mov    eax, pagesize;
	__asm        mov    [ebp-4], eax;
	__asm        lea    eax, [ebp-4];
	__asm        mov    [ebp-0x18], eax;
	__asm        mov    eax, [ebp-0x18];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x38], eax;
	__asm        jmp    near ptr 0x004CD6C5;
// LINE 235:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+8], 0;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+8];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
// LINE 236:
	__asm        mov    eax, this;
	__asm        mov    word ptr [eax+0xE], 0;
	__asm        mov    eax, this;
	__asm        mov    ax, [eax+0xE];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], ax;
// LINE 237:
	this->maxNode = 0x0;
// LINE 238:
	this->maxPos = 0x0;
// LINE 240:
	__asm        mov    dword ptr [ebp-0xC], 0;
	__asm        mov    dword ptr [ebp-8], 0;
	__asm        jmp    near ptr 0x004CD730;

	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x1E];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T1f0;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x40], eax;
	__asm        mov    eax, [ebp-0x40];
	__asm        mov    [ebp-0x3C], eax;
	__asm        jmp    near ptr 0x004CD75F;

	__asm        cmp    dword ptr [ebp-0x3C], 0;
	__asm        je     _T1dc;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0x3C];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T1dc;
_T1dc:
	__asm        jmp    near ptr 0x004CD781;

	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _T57f;
_T1f0:
	__asm        jmp    near ptr 0x004CD795;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x98], eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x1E];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T2d2;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0x74], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x78], eax;
	__asm        mov    eax, [ebp-0x78];
	__asm        mov    [ebp-0x70], eax;
	__asm        jmp    near ptr 0x004CD7E2;

	__asm        cmp    dword ptr [ebp-0x70], 0;
	__asm        je     _T261;

	__asm        mov    eax, [ebp-0x74];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0x70];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T261;
_T261:
	__asm        jmp    near ptr 0x004CD806;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x68], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0x6C], eax;
_T281:
	__asm        mov    eax, [ebp-0x98];
	__asm        cmp    [ebp-0x6C], eax;
	__asm        je     _T2ad;

	__asm        sub    dword ptr [ebp-0x68], 8;
	__asm        sub    dword ptr [ebp-0x6C], 8;
	__asm        mov    eax, [ebp-0x6C];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0x68];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T281;
_T2ad:
	__asm        jmp    near ptr 0x004CD852;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0x98];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _T57a;
_T2d2:
	__asm        jmp    near ptr 0x004CD877;

	__asm        jmp    near ptr 0x004CD87C;

	__asm        jmp    near ptr 0x004CD881;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        test   eax, eax;
	__asm        je     _T32c;

	__asm        jmp    near ptr 0x004CD8A3;

	__asm        jmp    near ptr 0x004CD8A8;

	__asm        jmp    near ptr 0x004CD8AD;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        add    eax, eax;
	__asm        mov    [ebp-0x48], eax;
	__asm        jmp    _T379;
_T32c:
	__asm        mov    dword ptr [ebp-0x54], 0x200;
	__asm        lea    eax, [ebp-0x54];
	__asm        mov    [ebp-0x5C], eax;
	__asm        mov    dword ptr [ebp-0x58], 1;
	__asm        lea    eax, [ebp-0x58];
	__asm        mov    [ebp-0x60], eax;
	__asm        mov    eax, [ebp-0x60];
	__asm        mov    ecx, [ebp-0x5C];
	__asm        mov    ecx, [ecx];
	__asm        cmp    [eax], ecx;
	__asm        jb     _T361;

	__asm        mov    eax, [ebp-0x60];
	__asm        mov    [ebp-0x64], eax;
	__asm        jmp    _T367;
_T361:
	__asm        mov    eax, [ebp-0x5C];
	__asm        mov    [ebp-0x64], eax;
_T367:
	__asm        jmp    near ptr 0x004CD90C;

	__asm        mov    eax, [ebp-0x64];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x48], eax;
	__asm        jmp    _T379;
_T379:
	__asm        jmp    near ptr 0x004CD91E;

	__asm        push   0;
	__asm        mov    eax, [ebp-0x48];
	__asm        push   eax;
	__asm        call   allocate;
	__asm        add    esp, 8;
	__asm        mov    [ebp-0x44], eax;
	__asm        jmp    near ptr 0x004CD934;

	__asm        mov    eax, [ebp-0x44];
	__asm        mov    [ebp-0x90], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x94], eax;
_T3ac:
	__asm        mov    eax, [ebp-0x98];
	__asm        cmp    [ebp-0x94], eax;
	__asm        je     _T427;

	__asm        mov    eax, [ebp-0x94];
	__asm        mov    [ebp-0x84], eax;
	__asm        add    dword ptr [ebp-0x94], 8;
	__asm        mov    eax, [ebp-0x90];
	__asm        mov    [ebp-0x88], eax;
	__asm        add    dword ptr [ebp-0x90], 8;
	__asm        mov    eax, [ebp-0x88];
	__asm        mov    [ebp-0x8C], eax;
	__asm        jmp    near ptr 0x004CD995;

	__asm        cmp    dword ptr [ebp-0x8C], 0;
	__asm        je     _T41d;

	__asm        mov    eax, [ebp-0x84];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0x8C];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T41d;
_T41d:
	__asm        jmp    near ptr 0x004CD9C2;

	__asm        jmp    _T3ac;
_T427:
	__asm        jmp    near ptr 0x004CD9CC;

	__asm        jmp    near ptr 0x004CD9D1;

	__asm        mov    eax, [ebp-0x98];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        and    eax, 0xFFFFFFF8;
	__asm        sar    eax, 0;
	__asm        mov    ecx, eax;
	__asm        add    eax, eax;
	__asm        sub    eax, ecx;
	__asm        add    eax, [ebp-0x44];
	__asm        mov    [ebp-0x80], eax;
	__asm        mov    eax, [ebp-0x80];
	__asm        mov    [ebp-0x7C], eax;
	__asm        jmp    near ptr 0x004CD9FD;

	__asm        cmp    dword ptr [ebp-0x7C], 0;
	__asm        je     _T47a;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0x7C];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T47a;
_T47a:
	__asm        jmp    near ptr 0x004CDA1F;

	__asm        jmp    near ptr 0x004CDA24;

	__asm        jmp    near ptr 0x004CDA29;

	__asm        mov    eax, [ebp-0x98];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        and    eax, 0xFFFFFFF8;
	__asm        sar    eax, 0;
	__asm        mov    ecx, eax;
	__asm        add    eax, eax;
	__asm        sub    eax, ecx;
	__asm        add    eax, [ebp-0x44];
	__asm        add    eax, 8;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x98];
	__asm        push   eax;
	__asm        call   uninitialized_copy;
	__asm        add    esp, 0xC;
	__asm        jmp    near ptr 0x004CDA69;

	__asm        jmp    near ptr 0x004CDA6E;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x50], eax;
_T4da:
	__asm        mov    eax, this;
	__asm        mov    ecx, [ebp-0x50];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T4fa;

	__asm        jmp    near ptr 0x004CDA91;

	__asm        add    dword ptr [ebp-0x50], 8;
	__asm        jmp    _T4da;
_T4fa:
	__asm        jmp    near ptr 0x004CDA9F;

	__asm        jmp    near ptr 0x004CDAA4;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x4C], eax;
	__asm        mov    eax, [ebp-0x4C];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    near ptr 0x004CDAC1;

	__asm        jmp    near ptr 0x004CDAC6;

	__asm        mov    eax, [ebp-0x48];
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0x44];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1E], eax;
	__asm        jmp    near ptr 0x004CDADD;

	__asm        jmp    near ptr 0x004CDAE2;

	__asm        jmp    near ptr 0x004CDAE7;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0x44];
	__asm        add    eax, 8;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1A], eax;
	__asm        mov    eax, [ebp-0x44];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x16], eax;
_T57a:
	__asm        jmp    _T57f;
_T57f:
	__asm        jmp    near ptr 0x004CDB24;
// LINE 241:
	__asm        mov    dword ptr [ebp-0x14], 0;
	__asm        mov    dword ptr [ebp-0x10], 0;
	__asm        jmp    near ptr 0x004CDB37;

	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x1E];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T606;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xA0], eax;
	__asm        mov    eax, [ebp-0xA0];
	__asm        mov    [ebp-0x9C], eax;
	__asm        jmp    near ptr 0x004CDB6F;

	__asm        cmp    dword ptr [ebp-0x9C], 0;
	__asm        je     _T5f2;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0x9C];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T5f2;
_T5f2:
	__asm        jmp    near ptr 0x004CDB97;

	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _T9aa;
_T606:
	__asm        jmp    near ptr 0x004CDBAB;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xE4], eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x1E];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T712;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0xD4], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xD8], eax;
	__asm        mov    eax, [ebp-0xD8];
	__asm        mov    [ebp-0xD0], eax;
	__asm        jmp    near ptr 0x004CDC04;

	__asm        cmp    dword ptr [ebp-0xD0], 0;
	__asm        je     _T68c;

	__asm        mov    eax, [ebp-0xD4];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0xD0];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T68c;
_T68c:
	__asm        jmp    near ptr 0x004CDC31;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xC8], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0xCC], eax;
_T6b2:
	__asm        mov    eax, [ebp-0xCC];
	__asm        cmp    [ebp-0xE4], eax;
	__asm        je     _T6ed;

	__asm        sub    dword ptr [ebp-0xC8], 8;
	__asm        sub    dword ptr [ebp-0xCC], 8;
	__asm        mov    eax, [ebp-0xCC];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0xC8];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T6b2;
_T6ed:
	__asm        jmp    near ptr 0x004CDC92;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0xE4];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _T9a5;
_T712:
	__asm        jmp    near ptr 0x004CDCB7;

	__asm        jmp    near ptr 0x004CDCBC;

	__asm        jmp    near ptr 0x004CDCC1;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        test   eax, eax;
	__asm        je     _T76f;

	__asm        jmp    near ptr 0x004CDCE3;

	__asm        jmp    near ptr 0x004CDCE8;

	__asm        jmp    near ptr 0x004CDCED;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        add    eax, eax;
	__asm        mov    [ebp-0xA8], eax;
	__asm        jmp    _T7e6;
_T76f:
	__asm        mov    dword ptr [ebp-0xB4], 0x200;
	__asm        lea    eax, [ebp-0xB4];
	__asm        mov    [ebp-0xBC], eax;
	__asm        mov    dword ptr [ebp-0xB8], 1;
	__asm        lea    eax, [ebp-0xB8];
	__asm        mov    [ebp-0xC0], eax;
	__asm        mov    eax, [ebp-0xC0];
	__asm        mov    ecx, [ebp-0xBC];
	__asm        mov    ecx, [ecx];
	__asm        cmp    [eax], ecx;
	__asm        jb     _T7c2;

	__asm        mov    eax, [ebp-0xC0];
	__asm        mov    [ebp-0xC4], eax;
	__asm        jmp    _T7ce;
_T7c2:
	__asm        mov    eax, [ebp-0xBC];
	__asm        mov    [ebp-0xC4], eax;
_T7ce:
	__asm        jmp    near ptr 0x004CDD73;

	__asm        mov    eax, [ebp-0xC4];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0xA8], eax;
	__asm        jmp    _T7e6;
_T7e6:
	__asm        jmp    near ptr 0x004CDD8B;

	__asm        push   0;
	__asm        mov    eax, [ebp-0xA8];
	__asm        push   eax;
	__asm        call   allocate;
	__asm        add    esp, 8;
	__asm        mov    [ebp-0xA4], eax;
	__asm        jmp    near ptr 0x004CDDA7;

	__asm        mov    eax, [ebp-0xA4];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0xE4];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        push   eax;
	__asm        call   uninitialized_copy;
	__asm        add    esp, 0xC;
	__asm        jmp    near ptr 0x004CDDCC;

	__asm        mov    eax, [ebp-0xE4];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        and    eax, 0xFFFFFFF8;
	__asm        sar    eax, 0;
	__asm        mov    ecx, eax;
	__asm        add    eax, eax;
	__asm        sub    eax, ecx;
	__asm        add    eax, [ebp-0xA4];
	__asm        mov    [ebp-0xE0], eax;
	__asm        mov    eax, [ebp-0xE0];
	__asm        mov    [ebp-0xDC], eax;
	__asm        jmp    near ptr 0x004CDE04;

	__asm        cmp    dword ptr [ebp-0xDC], 0;
	__asm        je     _T887;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0xDC];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T887;
_T887:
	__asm        jmp    near ptr 0x004CDE2C;

	__asm        jmp    near ptr 0x004CDE31;

	__asm        jmp    near ptr 0x004CDE36;

	__asm        mov    eax, [ebp-0xE4];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        and    eax, 0xFFFFFFF8;
	__asm        sar    eax, 0;
	__asm        mov    ecx, eax;
	__asm        add    eax, eax;
	__asm        sub    eax, ecx;
	__asm        add    eax, [ebp-0xA4];
	__asm        add    eax, 8;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0xE4];
	__asm        push   eax;
	__asm        call   uninitialized_copy;
	__asm        add    esp, 0xC;
	__asm        jmp    near ptr 0x004CDE79;

	__asm        jmp    near ptr 0x004CDE7E;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0xB0], eax;
_T8ed:
	__asm        mov    eax, this;
	__asm        mov    ecx, [ebp-0xB0];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T913;

	__asm        jmp    near ptr 0x004CDEA7;

	__asm        add    dword ptr [ebp-0xB0], 8;
	__asm        jmp    _T8ed;
_T913:
	__asm        jmp    near ptr 0x004CDEB8;

	__asm        jmp    near ptr 0x004CDEBD;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0xAC], eax;
	__asm        mov    eax, [ebp-0xAC];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    near ptr 0x004CDEE0;

	__asm        jmp    near ptr 0x004CDEE5;

	__asm        mov    eax, [ebp-0xA8];
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0xA4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1E], eax;
	__asm        jmp    near ptr 0x004CDF02;

	__asm        jmp    near ptr 0x004CDF07;

	__asm        jmp    near ptr 0x004CDF0C;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0xA4];
	__asm        add    eax, 8;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1A], eax;
	__asm        mov    eax, [ebp-0xA4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x16], eax;
_T9a5:
	__asm        jmp    _T9aa;
_T9aa:
	__asm        jmp    near ptr 0x004CDF4F;
// LINE 242:
	__asm        jmp    near ptr 0x004CDF54;

	__asm        mov    eax, this;
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004cdf70
void cGZXParamBitstream<t_alloc,t_free>::Rewind() {

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
	__asm        mov    eax, this;
	__asm        mov    word ptr [eax+0xC], 0;
	__asm        jmp    near ptr 0x004CDF94;
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004cdfa0
void cGZXParamBitstream<t_alloc,t_free>::RewindToMark() {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+8];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
	__asm        mov    eax, this;
	__asm        mov    ax, [eax+0xE];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], ax;
	__asm        jmp    near ptr 0x004CDFCB;
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004cdfd0
void cGZXParamBitstream<t_alloc,t_free>::Mark() {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+8], eax;
	__asm        mov    eax, this;
	__asm        mov    ax, [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xE], ax;
	__asm        jmp    near ptr 0x004CDFFB;
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004ce000
void cGZXParamBitstream<t_alloc,t_free>::FreeAll() {
	/*bp-0x4*/   int32_t loop;

// LINE 366:
	__asm        mov    loop, 0;
	__asm        jmp    _T1b;
_T18:
	__asm        inc    loop;
_T1b:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0x10];
	__asm        cmp    eax, loop;
	__asm        jl     _Tc8;
// LINE 368:
	__asm        jmp    near ptr 0x004CE030;

	__asm        jmp    near ptr 0x004CE035;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        cmp    dword ptr [eax+ecx*8], 0;
	__asm        je     _T7e;

	__asm        jmp    near ptr 0x004CE04D;

	__asm        jmp    near ptr 0x004CE052;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        mov    eax, [eax+ecx*8];
	__asm        mov    [ebp-0x18], eax;
	__asm        mov    eax, [ebp-0x18];
	__asm        mov    [ebp-0x10], eax;
	__asm        mov    eax, [ebp-0x10];
	__asm        mov    [ebp-0x14], eax;
	__asm        mov    eax, [ebp-0x14];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    _T7e;
// LINE 369:
_T7e:
	__asm        jmp    near ptr 0x004CE083;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        lea    eax, [eax+ecx*8];
	__asm        mov    [ebp-8], eax;
	__asm        jmp    near ptr 0x004CE097;

	__asm        mov    eax, [ebp-8];
	__asm        mov    dword ptr [eax], 0;
// LINE 370:
	__asm        jmp    near ptr 0x004CE0A5;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        lea    eax, [eax+ecx*8];
	__asm        mov    [ebp-0xC], eax;
	__asm        jmp    near ptr 0x004CE0B9;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    dword ptr [eax+4], 0;
// LINE 371:
	__asm        jmp    _T18;
// LINE 373:
_Tc8:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+8], 0;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+8];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
// LINE 374:
	__asm        mov    eax, this;
	__asm        mov    word ptr [eax+0xE], 0;
	__asm        mov    eax, this;
	__asm        mov    ax, [eax+0xE];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], ax;
// LINE 375:
	__asm        jmp    near ptr 0x004CE0FA;
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004ce100
unsigned long cGZXParamBitstream<t_alloc,t_free>::Read(unsigned char * buffer, unsigned long nBytes) {
	/*bp-0x4*/   unsigned long i;

// LINE 285:
	i = 0x0;
// LINE 287:
_T13:
	__asm        mov    eax, i;
	__asm        cmp    nBytes, eax;
	__asm        jbe    _Te3;
// LINE 288:
	__asm        jmp    near ptr 0x004CE124;

	__asm        jmp    near ptr 0x004CE129;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        cmp    dword ptr [ecx+eax*8], 0;
	__asm        jne    _T48;

	__asm        mov    eax, i;
	__asm        jmp    _Teb;
// LINE 289:
_T48:
	__asm        jmp    near ptr 0x004CE14D;

	__asm        jmp    near ptr 0x004CE152;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        mov    edx, this;
	__asm        mov    edx, [edx+4];
	__asm        cmp    [ecx+eax*8+4], edx;
	__asm        ja     _Ta9;
// LINE 290:
	__asm        mov    eax, this;
	__asm        inc    word ptr [eax+0xC];
// LINE 291:
	__asm        jmp    near ptr 0x004CE17B;

	__asm        jmp    near ptr 0x004CE180;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        cmp    dword ptr [ecx+eax*8], 0;
	__asm        jne    _T9f;

	__asm        mov    eax, i;
	__asm        jmp    _Teb;
// LINE 292:
_T9f:
	this->curPos = 0x0;
// LINE 294:
_Ta9:
	__asm        jmp    near ptr 0x004CE1AE;

	__asm        jmp    near ptr 0x004CE1B3;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        mov    eax, [ecx+eax*8];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+4];
	__asm        mov    al, [eax+ecx];
	__asm        mov    ecx, i;
	__asm        mov    edx, buffer;
	__asm        mov    [ecx+edx], al;
	__asm        mov    eax, this;
	__asm        inc    dword ptr [eax+4];
	__asm        inc    i;
// LINE 295:
	__asm        jmp    _T13;
// LINE 296:
_Te3:
	__asm        mov    eax, i;
	__asm        jmp    _Teb;
// LINE 297:
_Teb:
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004ce200
unsigned long cGZXParamBitstream<t_alloc,t_free>::Write(unsigned char * buffer, unsigned long nBytes) {
	/*bp-0x4*/   unsigned long i;

// LINE 305:
	i = 0x0;
// LINE 307:
_T19:
	__asm        mov    eax, nBytes;
	__asm        cmp    i, eax;
	__asm        jae    _Td2d;
// LINE 310:
	__asm        jmp    near ptr 0x004CE22A;

	__asm        jmp    near ptr 0x004CE22F;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        cmp    dword ptr [ecx+eax*8], 0;
	__asm        jne    _T5e6;
// LINE 312:
	this->maxNode = this->nodeNo;
// LINE 313:
	this->maxPos = 0x0;
// LINE 314:
	__asm        jmp    near ptr 0x004CE272;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        shl    eax, 3;
	__asm        mov    ecx, this;
	__asm        add    eax, [ecx+0x16];
	__asm        mov    [ebp-0x18], eax;
	__asm        jmp    near ptr 0x004CE290;

	__asm        jmp    near ptr 0x004CE295;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x38];
	__asm        mov    [ebp-0x30], eax;
	__asm        jmp    near ptr 0x004CE2A6;

	__asm        mov    eax, [ebp-0x30];
	__asm        push   eax;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    ecx, [ebp-0x18];
	__asm        mov    [ecx], eax;
// LINE 315:
	__asm        jmp    near ptr 0x004CE2BC;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        shl    eax, 3;
	__asm        mov    ecx, this;
	__asm        add    eax, [ecx+0x16];
	__asm        mov    [ebp-0x1C], eax;
	__asm        jmp    near ptr 0x004CE2DA;

	__asm        jmp    near ptr 0x004CE2DF;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x38];
	__asm        mov    ecx, [ebp-0x1C];
	__asm        mov    [ecx+4], eax;
// LINE 317:
	__asm        jmp    near ptr 0x004CE2F3;

	__asm        jmp    near ptr 0x004CE2F8;

	__asm        jmp    near ptr 0x004CE2FD;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        dec    eax;
	__asm        movsx  eax, ax;
	__asm        mov    ecx, this;
	__asm        movsx  ecx, word ptr [ecx+0xC];
	__asm        cmp    eax, ecx;
	__asm        jg     _T5aa;
// LINE 318:
	__asm        mov    dword ptr [ebp-0xC], 0;
	__asm        mov    dword ptr [ebp-8], 0;
	__asm        jmp    near ptr 0x004CE33B;

	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x1E];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T19b;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x38], eax;
	__asm        mov    eax, [ebp-0x38];
	__asm        mov    [ebp-0x34], eax;
	__asm        jmp    near ptr 0x004CE36A;

	__asm        cmp    dword ptr [ebp-0x34], 0;
	__asm        je     _T187;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0x34];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T187;
_T187:
	__asm        jmp    near ptr 0x004CE38C;

	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _T5a5;
_T19b:
	__asm        jmp    near ptr 0x004CE3A0;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xA8], eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x1E];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T27d;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0x6C], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x70], eax;
	__asm        mov    eax, [ebp-0x70];
	__asm        mov    [ebp-0x68], eax;
	__asm        jmp    near ptr 0x004CE3ED;

	__asm        cmp    dword ptr [ebp-0x68], 0;
	__asm        je     _T20c;

	__asm        mov    eax, [ebp-0x6C];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0x68];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T20c;
_T20c:
	__asm        jmp    near ptr 0x004CE411;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x60], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0x64], eax;
_T22c:
	__asm        mov    eax, [ebp-0xA8];
	__asm        cmp    [ebp-0x64], eax;
	__asm        je     _T258;

	__asm        sub    dword ptr [ebp-0x60], 8;
	__asm        sub    dword ptr [ebp-0x64], 8;
	__asm        mov    eax, [ebp-0x64];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0x60];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T22c;
_T258:
	__asm        jmp    near ptr 0x004CE45D;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0xA8];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _T5a0;
_T27d:
	__asm        jmp    near ptr 0x004CE482;

	__asm        jmp    near ptr 0x004CE487;

	__asm        jmp    near ptr 0x004CE48C;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        test   eax, eax;
	__asm        je     _T2d7;

	__asm        jmp    near ptr 0x004CE4AE;

	__asm        jmp    near ptr 0x004CE4B3;

	__asm        jmp    near ptr 0x004CE4B8;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        add    eax, eax;
	__asm        mov    [ebp-0x40], eax;
	__asm        jmp    _T324;
_T2d7:
	__asm        mov    dword ptr [ebp-0x4C], 0x200;
	__asm        lea    eax, [ebp-0x4C];
	__asm        mov    [ebp-0x54], eax;
	__asm        mov    dword ptr [ebp-0x50], 1;
	__asm        lea    eax, [ebp-0x50];
	__asm        mov    [ebp-0x58], eax;
	__asm        mov    eax, [ebp-0x58];
	__asm        mov    ecx, [ebp-0x54];
	__asm        mov    ecx, [ecx];
	__asm        cmp    [eax], ecx;
	__asm        jb     _T30c;

	__asm        mov    eax, [ebp-0x58];
	__asm        mov    [ebp-0x5C], eax;
	__asm        jmp    _T312;
_T30c:
	__asm        mov    eax, [ebp-0x54];
	__asm        mov    [ebp-0x5C], eax;
_T312:
	__asm        jmp    near ptr 0x004CE517;

	__asm        mov    eax, [ebp-0x5C];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x40], eax;
	__asm        jmp    _T324;
_T324:
	__asm        jmp    near ptr 0x004CE529;

	__asm        push   0;
	__asm        mov    eax, [ebp-0x40];
	__asm        push   eax;
	__asm        call   allocate;
	__asm        add    esp, 8;
	__asm        mov    [ebp-0x3C], eax;
	__asm        jmp    near ptr 0x004CE53F;

	__asm        mov    eax, [ebp-0x3C];
	__asm        mov    [ebp-0x88], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x8C], eax;
_T357:
	__asm        mov    eax, [ebp-0x8C];
	__asm        cmp    [ebp-0xA8], eax;
	__asm        je     _T3c6;

	__asm        mov    eax, [ebp-0x8C];
	__asm        mov    [ebp-0x7C], eax;
	__asm        add    dword ptr [ebp-0x8C], 8;
	__asm        mov    eax, [ebp-0x88];
	__asm        mov    [ebp-0x80], eax;
	__asm        add    dword ptr [ebp-0x88], 8;
	__asm        mov    eax, [ebp-0x80];
	__asm        mov    [ebp-0x84], eax;
	__asm        jmp    near ptr 0x004CE597;

	__asm        cmp    dword ptr [ebp-0x84], 0;
	__asm        je     _T3bc;

	__asm        mov    eax, [ebp-0x7C];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0x84];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T3bc;
_T3bc:
	__asm        jmp    near ptr 0x004CE5C1;

	__asm        jmp    _T357;
_T3c6:
	__asm        jmp    near ptr 0x004CE5CB;

	__asm        jmp    near ptr 0x004CE5D0;

	__asm        mov    eax, [ebp-0xA8];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        and    eax, 0xFFFFFFF8;
	__asm        sar    eax, 0;
	__asm        mov    ecx, eax;
	__asm        add    eax, eax;
	__asm        sub    eax, ecx;
	__asm        add    eax, [ebp-0x3C];
	__asm        mov    [ebp-0x78], eax;
	__asm        mov    eax, [ebp-0x78];
	__asm        mov    [ebp-0x74], eax;
	__asm        jmp    near ptr 0x004CE5FC;

	__asm        cmp    dword ptr [ebp-0x74], 0;
	__asm        je     _T419;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0x74];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T419;
_T419:
	__asm        jmp    near ptr 0x004CE61E;

	__asm        jmp    near ptr 0x004CE623;

	__asm        jmp    near ptr 0x004CE628;

	__asm        mov    eax, [ebp-0xA8];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        and    eax, 0xFFFFFFF8;
	__asm        sar    eax, 0;
	__asm        mov    ecx, eax;
	__asm        add    eax, eax;
	__asm        sub    eax, ecx;
	__asm        add    eax, [ebp-0x3C];
	__asm        add    eax, 8;
	__asm        mov    [ebp-0x9C], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xA0], eax;
	__asm        mov    eax, [ebp-0xA8];
	__asm        mov    [ebp-0xA4], eax;
_T46a:
	__asm        mov    eax, [ebp-0xA0];
	__asm        cmp    [ebp-0xA4], eax;
	__asm        je     _T4e5;

	__asm        mov    eax, [ebp-0xA4];
	__asm        mov    [ebp-0x90], eax;
	__asm        add    dword ptr [ebp-0xA4], 8;
	__asm        mov    eax, [ebp-0x9C];
	__asm        mov    [ebp-0x94], eax;
	__asm        add    dword ptr [ebp-0x9C], 8;
	__asm        mov    eax, [ebp-0x94];
	__asm        mov    [ebp-0x98], eax;
	__asm        jmp    near ptr 0x004CE6B3;

	__asm        cmp    dword ptr [ebp-0x98], 0;
	__asm        je     _T4db;

	__asm        mov    eax, [ebp-0x90];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0x98];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T4db;
_T4db:
	__asm        jmp    near ptr 0x004CE6E0;

	__asm        jmp    _T46a;
_T4e5:
	__asm        jmp    near ptr 0x004CE6EA;

	__asm        jmp    near ptr 0x004CE6EF;

	__asm        jmp    near ptr 0x004CE6F4;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x48], eax;
_T500:
	__asm        mov    eax, this;
	__asm        mov    ecx, [ebp-0x48];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T520;

	__asm        jmp    near ptr 0x004CE717;

	__asm        add    dword ptr [ebp-0x48], 8;
	__asm        jmp    _T500;
_T520:
	__asm        jmp    near ptr 0x004CE725;

	__asm        jmp    near ptr 0x004CE72A;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x44], eax;
	__asm        mov    eax, [ebp-0x44];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    near ptr 0x004CE747;

	__asm        jmp    near ptr 0x004CE74C;

	__asm        mov    eax, [ebp-0x40];
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0x3C];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1E], eax;
	__asm        jmp    near ptr 0x004CE763;

	__asm        jmp    near ptr 0x004CE768;

	__asm        jmp    near ptr 0x004CE76D;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0x3C];
	__asm        add    eax, 8;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1A], eax;
	__asm        mov    eax, [ebp-0x3C];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x16], eax;
_T5a0:
	__asm        jmp    _T5a5;
_T5a5:
	__asm        jmp    _T5aa;
// LINE 320:
_T5aa:
	this->curPos = 0x0;
// LINE 321:
	__asm        jmp    near ptr 0x004CE7BC;

	__asm        jmp    near ptr 0x004CE7C1;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        cmp    dword ptr [ecx+eax*8], 0;
	__asm        jne    _T5e6;

	__asm        mov    eax, i;
	__asm        jmp    _Td35;
// LINE 324:
_T5e6:
	__asm        jmp    near ptr 0x004CE7EB;

	__asm        jmp    near ptr 0x004CE7F0;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        mov    edx, this;
	__asm        mov    edx, [edx+4];
	__asm        cmp    [ecx+eax*8+4], edx;
	__asm        ja     _Tc99;
// LINE 326:
	__asm        mov    eax, this;
	__asm        inc    word ptr [eax+0xC];
// LINE 327:
	__asm        jmp    near ptr 0x004CE825;

	__asm        jmp    near ptr 0x004CE82A;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        cmp    dword ptr [ecx+eax*8], 0;
	__asm        jne    _Tc8c;
// LINE 329:
	this->maxNode = this->nodeNo;
// LINE 330:
	this->maxPos = 0x0;
// LINE 332:
	__asm        jmp    near ptr 0x004CE86D;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        shl    eax, 3;
	__asm        mov    ecx, this;
	__asm        add    eax, [ecx+0x16];
	__asm        mov    [ebp-0x20], eax;
	__asm        jmp    near ptr 0x004CE88B;

	__asm        jmp    near ptr 0x004CE890;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x38];
	__asm        mov    [ebp-0x2C], eax;
	__asm        jmp    near ptr 0x004CE8A1;

	__asm        mov    eax, [ebp-0x2C];
	__asm        push   eax;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    ecx, [ebp-0x20];
	__asm        mov    [ecx], eax;
// LINE 333:
	__asm        jmp    near ptr 0x004CE8B7;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        shl    eax, 3;
	__asm        mov    ecx, this;
	__asm        add    eax, [ecx+0x16];
	__asm        mov    [ebp-0x24], eax;
	__asm        jmp    near ptr 0x004CE8D5;

	__asm        jmp    near ptr 0x004CE8DA;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x38];
	__asm        mov    ecx, [ebp-0x24];
	__asm        mov    [ecx+4], eax;
// LINE 335:
	__asm        jmp    near ptr 0x004CE8EE;

	__asm        jmp    near ptr 0x004CE8F3;

	__asm        jmp    near ptr 0x004CE8F8;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        dec    eax;
	__asm        movsx  eax, ax;
	__asm        mov    ecx, this;
	__asm        movsx  ecx, word ptr [ecx+0xC];
	__asm        cmp    eax, ecx;
	__asm        jg     _Tc50;
// LINE 336:
	__asm        mov    dword ptr [ebp-0x14], 0;
	__asm        mov    dword ptr [ebp-0x10], 0;
	__asm        jmp    near ptr 0x004CE936;

	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x1E];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T7a5;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xB0], eax;
	__asm        mov    eax, [ebp-0xB0];
	__asm        mov    [ebp-0xAC], eax;
	__asm        jmp    near ptr 0x004CE96E;

	__asm        cmp    dword ptr [ebp-0xAC], 0;
	__asm        je     _T791;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0xAC];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T791;
_T791:
	__asm        jmp    near ptr 0x004CE996;

	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _Tc4b;
_T7a5:
	__asm        jmp    near ptr 0x004CE9AA;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x120], eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x1E];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T8b1;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0xE4], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xE8], eax;
	__asm        mov    eax, [ebp-0xE8];
	__asm        mov    [ebp-0xE0], eax;
	__asm        jmp    near ptr 0x004CEA03;

	__asm        cmp    dword ptr [ebp-0xE0], 0;
	__asm        je     _T82b;

	__asm        mov    eax, [ebp-0xE4];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0xE0];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T82b;
_T82b:
	__asm        jmp    near ptr 0x004CEA30;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xD8], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0xDC], eax;
_T851:
	__asm        mov    eax, [ebp-0x120];
	__asm        cmp    [ebp-0xDC], eax;
	__asm        je     _T88c;

	__asm        sub    dword ptr [ebp-0xD8], 8;
	__asm        sub    dword ptr [ebp-0xDC], 8;
	__asm        mov    eax, [ebp-0xDC];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0xD8];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _T851;
_T88c:
	__asm        jmp    near ptr 0x004CEA91;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0x120];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _Tc46;
_T8b1:
	__asm        jmp    near ptr 0x004CEAB6;

	__asm        jmp    near ptr 0x004CEABB;

	__asm        jmp    near ptr 0x004CEAC0;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        test   eax, eax;
	__asm        je     _T90e;

	__asm        jmp    near ptr 0x004CEAE2;

	__asm        jmp    near ptr 0x004CEAE7;

	__asm        jmp    near ptr 0x004CEAEC;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        add    eax, eax;
	__asm        mov    [ebp-0xB8], eax;
	__asm        jmp    _T985;
_T90e:
	__asm        mov    dword ptr [ebp-0xC4], 0x200;
	__asm        lea    eax, [ebp-0xC4];
	__asm        mov    [ebp-0xCC], eax;
	__asm        mov    dword ptr [ebp-0xC8], 1;
	__asm        lea    eax, [ebp-0xC8];
	__asm        mov    [ebp-0xD0], eax;
	__asm        mov    eax, [ebp-0xD0];
	__asm        mov    ecx, [ebp-0xCC];
	__asm        mov    ecx, [ecx];
	__asm        cmp    [eax], ecx;
	__asm        jb     _T961;

	__asm        mov    eax, [ebp-0xD0];
	__asm        mov    [ebp-0xD4], eax;
	__asm        jmp    _T96d;
_T961:
	__asm        mov    eax, [ebp-0xCC];
	__asm        mov    [ebp-0xD4], eax;
_T96d:
	__asm        jmp    near ptr 0x004CEB72;

	__asm        mov    eax, [ebp-0xD4];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0xB8], eax;
	__asm        jmp    _T985;
_T985:
	__asm        jmp    near ptr 0x004CEB8A;

	__asm        push   0;
	__asm        mov    eax, [ebp-0xB8];
	__asm        push   eax;
	__asm        call   allocate;
	__asm        add    esp, 8;
	__asm        mov    [ebp-0xB4], eax;
	__asm        jmp    near ptr 0x004CEBA6;

	__asm        mov    eax, [ebp-0xB4];
	__asm        mov    [ebp-0x100], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x104], eax;
_T9c1:
	__asm        mov    eax, [ebp-0x104];
	__asm        cmp    [ebp-0x120], eax;
	__asm        je     _Ta3c;

	__asm        mov    eax, [ebp-0x104];
	__asm        mov    [ebp-0xF4], eax;
	__asm        add    dword ptr [ebp-0x104], 8;
	__asm        mov    eax, [ebp-0x100];
	__asm        mov    [ebp-0xF8], eax;
	__asm        add    dword ptr [ebp-0x100], 8;
	__asm        mov    eax, [ebp-0xF8];
	__asm        mov    [ebp-0xFC], eax;
	__asm        jmp    near ptr 0x004CEC0A;

	__asm        cmp    dword ptr [ebp-0xFC], 0;
	__asm        je     _Ta32;

	__asm        mov    eax, [ebp-0xF4];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0xFC];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _Ta32;
_Ta32:
	__asm        jmp    near ptr 0x004CEC37;

	__asm        jmp    _T9c1;
_Ta3c:
	__asm        jmp    near ptr 0x004CEC41;

	__asm        jmp    near ptr 0x004CEC46;

	__asm        mov    eax, [ebp-0x120];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        and    eax, 0xFFFFFFF8;
	__asm        sar    eax, 0;
	__asm        mov    ecx, eax;
	__asm        add    eax, eax;
	__asm        sub    eax, ecx;
	__asm        add    eax, [ebp-0xB4];
	__asm        mov    [ebp-0xF0], eax;
	__asm        mov    eax, [ebp-0xF0];
	__asm        mov    [ebp-0xEC], eax;
	__asm        jmp    near ptr 0x004CEC7E;

	__asm        cmp    dword ptr [ebp-0xEC], 0;
	__asm        je     _Taa1;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0xEC];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _Taa1;
_Taa1:
	__asm        jmp    near ptr 0x004CECA6;

	__asm        jmp    near ptr 0x004CECAB;

	__asm        jmp    near ptr 0x004CECB0;

	__asm        mov    eax, [ebp-0x120];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        and    eax, 0xFFFFFFF8;
	__asm        sar    eax, 0;
	__asm        mov    ecx, eax;
	__asm        add    eax, eax;
	__asm        sub    eax, ecx;
	__asm        add    eax, [ebp-0xB4];
	__asm        add    eax, 8;
	__asm        mov    [ebp-0x114], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x118], eax;
	__asm        mov    eax, [ebp-0x120];
	__asm        mov    [ebp-0x11C], eax;
_Taf5:
	__asm        mov    eax, [ebp-0x118];
	__asm        cmp    [ebp-0x11C], eax;
	__asm        je     _Tb70;

	__asm        mov    eax, [ebp-0x11C];
	__asm        mov    [ebp-0x108], eax;
	__asm        add    dword ptr [ebp-0x11C], 8;
	__asm        mov    eax, [ebp-0x114];
	__asm        mov    [ebp-0x10C], eax;
	__asm        add    dword ptr [ebp-0x114], 8;
	__asm        mov    eax, [ebp-0x10C];
	__asm        mov    [ebp-0x110], eax;
	__asm        jmp    near ptr 0x004CED3E;

	__asm        cmp    dword ptr [ebp-0x110], 0;
	__asm        je     _Tb66;

	__asm        mov    eax, [ebp-0x108];
	__asm        mov    ecx, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    edx, [ebp-0x110];
	__asm        mov    [edx], ecx;
	__asm        mov    [edx+4], eax;
	__asm        jmp    _Tb66;
_Tb66:
	__asm        jmp    near ptr 0x004CED6B;

	__asm        jmp    _Taf5;
_Tb70:
	__asm        jmp    near ptr 0x004CED75;

	__asm        jmp    near ptr 0x004CED7A;

	__asm        jmp    near ptr 0x004CED7F;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0xC0], eax;
_Tb8e:
	__asm        mov    eax, this;
	__asm        mov    ecx, [ebp-0xC0];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _Tbb4;

	__asm        jmp    near ptr 0x004CEDA8;

	__asm        add    dword ptr [ebp-0xC0], 8;
	__asm        jmp    _Tb8e;
_Tbb4:
	__asm        jmp    near ptr 0x004CEDB9;

	__asm        jmp    near ptr 0x004CEDBE;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0xBC], eax;
	__asm        mov    eax, [ebp-0xBC];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    near ptr 0x004CEDE1;

	__asm        jmp    near ptr 0x004CEDE6;

	__asm        mov    eax, [ebp-0xB8];
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0xB4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1E], eax;
	__asm        jmp    near ptr 0x004CEE03;

	__asm        jmp    near ptr 0x004CEE08;

	__asm        jmp    near ptr 0x004CEE0D;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0xB4];
	__asm        add    eax, 8;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1A], eax;
	__asm        mov    eax, [ebp-0xB4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x16], eax;
_Tc46:
	__asm        jmp    _Tc4b;
_Tc4b:
	__asm        jmp    _Tc50;
// LINE 339:
_Tc50:
	this->curPos = 0x0;
// LINE 340:
	__asm        jmp    near ptr 0x004CEE62;

	__asm        jmp    near ptr 0x004CEE67;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x16];
	__asm        cmp    dword ptr [ecx+eax*8], 0;
	__asm        jne    _Tc8c;

	__asm        mov    eax, i;
	__asm        jmp    _Td35;
// LINE 342:
_Tc8c:
	this->curPos = 0x0;
// LINE 344:
_Tc99:
	__asm        jmp    near ptr 0x004CEE9E;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        shl    eax, 3;
	__asm        mov    ecx, this;
	__asm        add    eax, [ecx+0x16];
	__asm        mov    [ebp-0x28], eax;
	__asm        jmp    near ptr 0x004CEEBC;

	__asm        mov    eax, i;
	__asm        mov    ecx, buffer;
	__asm        mov    al, [eax+ecx];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+4];
	__asm        mov    edx, [ebp-0x28];
	__asm        mov    edx, [edx];
	__asm        mov    [ecx+edx], al;
	__asm        inc    i;
	__asm        mov    eax, this;
	__asm        inc    dword ptr [eax+4];
// LINE 345:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0xC];
	__asm        mov    ecx, this;
	__asm        movsx  ecx, word ptr [ecx+0x10];
	__asm        cmp    eax, ecx;
	__asm        jne    _Td28;

	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x12];
	__asm        cmp    [eax+4], ecx;
	__asm        jbe    _Td28;

	this->maxPos = this->curPos;
// LINE 346:
_Td28:
	__asm        jmp    _T19;
// LINE 347:
_Td2d:
	__asm        mov    eax, i;
	__asm        jmp    _Td35;
// LINE 349:
_Td35:
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004cef40
long cGZXParamBitstream<t_alloc,t_free>::Size() {
	/*bp-0x4*/   int32_t loop;
	/*bp-0x8*/   long retVal;

// LINE 355:
	retVal = 0x0;
// LINE 356:
	__asm        mov    loop, 0;
	__asm        jmp    _T22;
_T1f:
	__asm        inc    loop;
_T22:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0x10];
	__asm        cmp    eax, loop;
	__asm        je     _T54;
// LINE 357:
	__asm        jmp    near ptr 0x004CEF77;

	__asm        jmp    near ptr 0x004CEF7C;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        mov    eax, [eax+ecx*8+4];
	__asm        add    eax, retVal;
	__asm        mov    retVal, eax;
	__asm        jmp    _T1f;
// LINE 358:
_T54:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x12];
	__asm        add    eax, retVal;
	__asm        mov    retVal, eax;
// LINE 360:
	__asm        mov    eax, retVal;
	__asm        jmp    near ptr 0x004CEFA8;
// LINE 361:
}

