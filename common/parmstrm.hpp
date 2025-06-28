// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004cd5a0
void cGZXParamBitstream<t_alloc,t_free>::cGZXParamBitstream<t_alloc,t_free>(uint32_t pagesize) {

	this-><cGZXParamBitstream<t_alloc,t_free>+0x00> = 0x5923f8;
	__asm        jmp    _T23;
_T23:
	this->nodeList.start = 0x0;
	this->nodeList.finish = 0x0;
	this->nodeList.end_of_storage = 0x0;
	__asm        jmp    _T4f;
_T4f:
	__asm        mov    dword ptr [ebp-0x1C], 0;
	__asm        lea    eax, [ebp-0x1C];
	__asm        mov    [ebp-0x24], eax;
	__asm        mov    eax, [ebp-0x24];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x28], eax;
	__asm        jmp    _T6f;
_T6f:
	__asm        mov    word ptr [ebp-0x20], 0;
	__asm        lea    eax, [ebp-0x20];
	__asm        mov    [ebp-0x28], eax;
	__asm        mov    eax, [ebp-0x28];
	__asm        mov    ax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x2C], ax;
	__asm        jmp    _T90;
_T90:
	this->starting_iterator.m_stream = 0x0;
	__asm        jmp    _Ta2;
_Ta2:
	__asm        mov    dword ptr [ebp-0x2C], 0;
	__asm        lea    eax, [ebp-0x2C];
	__asm        mov    [ebp-0x34], eax;
	__asm        mov    eax, [ebp-0x34];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x32], eax;
	__asm        jmp    _Tc2;
_Tc2:
	__asm        mov    word ptr [ebp-0x30], 0;
	__asm        lea    eax, [ebp-0x30];
	__asm        mov    [ebp-0x38], eax;
	__asm        mov    eax, [ebp-0x38];
	__asm        mov    ax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x36], ax;
	__asm        jmp    _Te3;
_Te3:
	this->ending_iterator.m_stream = 0x0;
	__asm        jmp    _Tf5;
_Tf5:
	__asm        jmp    _Tfa;
_Tfa:
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
	__asm        jmp    _T125;
// LINE 235:
_T125:
	this->markPos = 0x0;
	this->curPos = this->markPos;
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
	__asm        jmp    _T190;
_T190:
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
	__asm        jmp    _T1bf;
_T1bf:
	__asm        cmp    dword ptr [ebp-0x3C], 0;
	__asm        je     _T1dc;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0x3C];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T1dc;
_T1dc:
	__asm        jmp    _T1e1;
_T1e1:
	this->nodeList.finish += 0x8;
	__asm        jmp    _T57f;
_T1f0:
	__asm        jmp    _T1f5;
_T1f5:
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
	__asm        jmp    _T242;
_T242:
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
	__asm        jmp    _T266;
_T266:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0x68], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0x6C], eax;
__WHILE_281:
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
	__asm        jmp    __WHILE_281;
_T2ad:
	__asm        jmp    _T2b2;
_T2b2:
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0x98];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _T57a;
_T2d2:
	__asm        jmp    _T2d7;
_T2d7:
	__asm        jmp    _T2dc;
_T2dc:
	__asm        jmp    _T2e1;
_T2e1:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        test   eax, eax;
	__asm        je     _T32c;

	__asm        jmp    _T303;
_T303:
	__asm        jmp    _T308;
_T308:
	__asm        jmp    _T30d;
_T30d:
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
	__asm        jmp    _T36c;
_T36c:
	__asm        mov    eax, [ebp-0x64];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x48], eax;
	__asm        jmp    _T379;
_T379:
	__asm        jmp    _T37e;
_T37e:
	__asm        push   0;
	__asm        mov    eax, [ebp-0x48];
	__asm        push   eax;
	__asm        call   allocate;
	__asm        add    esp, 8;
	__asm        mov    [ebp-0x44], eax;
	__asm        jmp    _T394;
_T394:
	__asm        mov    eax, [ebp-0x44];
	__asm        mov    [ebp-0x90], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x94], eax;
__WHILE_3ac:
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
	__asm        jmp    _T3f5;
_T3f5:
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
	__asm        jmp    _T422;
_T422:
_T427:
	__asm        jmp    _T42c;
_T42c:
	__asm        jmp    _T431;
_T431:
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
	__asm        jmp    _T45d;
_T45d:
	__asm        cmp    dword ptr [ebp-0x7C], 0;
	__asm        je     _T47a;

	__asm        mov    eax, [ebp-0xC];
	__asm        mov    ecx, [ebp-8];
	__asm        mov    edx, [ebp-0x7C];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T47a;
_T47a:
	__asm        jmp    _T47f;
_T47f:
	__asm        jmp    _T484;
_T484:
	__asm        jmp    _T489;
_T489:
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
	__asm        jmp    _T4c9;
_T4c9:
	__asm        jmp    _T4ce;
_T4ce:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x50], eax;
__WHILE_4da:
	__asm        mov    eax, this;
	__asm        mov    ecx, [ebp-0x50];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T4fa;

	__asm        jmp    _T4f1;
_T4f1:
	__asm        add    dword ptr [ebp-0x50], 8;
	__asm        jmp    __WHILE_4da;
_T4fa:
	__asm        jmp    _T4ff;
_T4ff:
	__asm        jmp    _T504;
_T504:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0x4C], eax;
	__asm        mov    eax, [ebp-0x4C];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    _T521;
_T521:
	__asm        jmp    _T526;
_T526:
	__asm        mov    eax, [ebp-0x48];
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0x44];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1E], eax;
	__asm        jmp    _T53d;
_T53d:
	__asm        jmp    _T542;
_T542:
	__asm        jmp    _T547;
_T547:
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
	__asm        jmp    _T584;
// LINE 241:
_T584:
	__asm        mov    dword ptr [ebp-0x14], 0;
	__asm        mov    dword ptr [ebp-0x10], 0;
	__asm        jmp    _T597;
_T597:
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
	__asm        jmp    _T5cf;
_T5cf:
	__asm        cmp    dword ptr [ebp-0x9C], 0;
	__asm        je     _T5f2;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0x9C];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T5f2;
_T5f2:
	__asm        jmp    _T5f7;
_T5f7:
	this->nodeList.finish += 0x8;
	__asm        jmp    _T9aa;
_T606:
	__asm        jmp    _T60b;
_T60b:
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
	__asm        jmp    _T664;
_T664:
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
	__asm        jmp    _T691;
_T691:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    [ebp-0xC8], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        sub    eax, 8;
	__asm        mov    [ebp-0xCC], eax;
__WHILE_6b2:
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
	__asm        jmp    __WHILE_6b2;
_T6ed:
	__asm        jmp    _T6f2;
_T6f2:
	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0xE4];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        mov    eax, this;
	__asm        add    dword ptr [eax+0x1A], 8;
	__asm        jmp    _T9a5;
_T712:
	__asm        jmp    _T717;
_T717:
	__asm        jmp    _T71c;
_T71c:
	__asm        jmp    _T721;
_T721:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x1A];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x16];
	__asm        sar    eax, 3;
	__asm        test   eax, eax;
	__asm        je     _T76f;

	__asm        jmp    _T743;
_T743:
	__asm        jmp    _T748;
_T748:
	__asm        jmp    _T74d;
_T74d:
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
	__asm        jmp    _T7d3;
_T7d3:
	__asm        mov    eax, [ebp-0xC4];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0xA8], eax;
	__asm        jmp    _T7e6;
_T7e6:
	__asm        jmp    _T7eb;
_T7eb:
	__asm        push   0;
	__asm        mov    eax, [ebp-0xA8];
	__asm        push   eax;
	__asm        call   allocate;
	__asm        add    esp, 8;
	__asm        mov    [ebp-0xA4], eax;
	__asm        jmp    _T807;
_T807:
	__asm        mov    eax, [ebp-0xA4];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0xE4];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        push   eax;
	__asm        call   uninitialized_copy;
	__asm        add    esp, 0xC;
	__asm        jmp    _T82c;
_T82c:
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
	__asm        jmp    _T864;
_T864:
	__asm        cmp    dword ptr [ebp-0xDC], 0;
	__asm        je     _T887;

	__asm        mov    eax, [ebp-0x14];
	__asm        mov    ecx, [ebp-0x10];
	__asm        mov    edx, [ebp-0xDC];
	__asm        mov    [edx], eax;
	__asm        mov    [edx+4], ecx;
	__asm        jmp    _T887;
_T887:
	__asm        jmp    _T88c;
_T88c:
	__asm        jmp    _T891;
_T891:
	__asm        jmp    _T896;
_T896:
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
	__asm        jmp    _T8d9;
_T8d9:
	__asm        jmp    _T8de;
_T8de:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0xB0], eax;
__WHILE_8ed:
	__asm        mov    eax, this;
	__asm        mov    ecx, [ebp-0xB0];
	__asm        cmp    [eax+0x1A], ecx;
	__asm        je     _T913;

	__asm        jmp    _T907;
_T907:
	__asm        add    dword ptr [ebp-0xB0], 8;
	__asm        jmp    __WHILE_8ed;
_T913:
	__asm        jmp    _T918;
_T918:
	__asm        jmp    _T91d;
_T91d:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    [ebp-0xAC], eax;
	__asm        mov    eax, [ebp-0xAC];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    _T940;
_T940:
	__asm        jmp    _T945;
_T945:
	__asm        mov    eax, [ebp-0xA8];
	__asm        shl    eax, 3;
	__asm        add    eax, [ebp-0xA4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x1E], eax;
	__asm        jmp    _T962;
_T962:
	__asm        jmp    _T967;
_T967:
	__asm        jmp    _T96c;
_T96c:
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
	__asm        jmp    _T9af;
// LINE 242:
_T9af:
	return;

	__asm        mov    eax, this;
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004cdf70
void cGZXParamBitstream<t_alloc,t_free>::Rewind() {

	this->curPos = 0x0;
	this->nodeNo = 0x0;
	__asm        jmp    __RETURN;
__RETURN:
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
	__asm        jmp    __RETURN;
__RETURN:
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
	__asm        jmp    __RETURN;
__RETURN:
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004ce000
void cGZXParamBitstream<t_alloc,t_free>::FreeAll() {
	/*bp-0x4*/   int32_t loop;

// LINE 366:
_FOR_18:
	loop = 0x0;
	__asm        jmp    _FOR_COND_18;
_FOR_NEXT_18:
	loop++;
_FOR_COND_18:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0x10];
	__asm        cmp    eax, loop;
	__asm        jl     _Tc8;
// LINE 368:
	__asm        jmp    _T30;
_T30:
	__asm        jmp    _T35;
_T35:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        cmp    dword ptr [eax+ecx*8], 0;
	__asm        je     _T7e;

	__asm        jmp    _T4d;
_T4d:
	__asm        jmp    _T52;
_T52:
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
	__asm        jmp    _T83;
_T83:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        lea    eax, [eax+ecx*8];
	__asm        mov    [ebp-8], eax;
	__asm        jmp    _T97;
_T97:
	__asm        mov    eax, [ebp-8];
	__asm        mov    dword ptr [eax], 0;
// LINE 370:
	__asm        jmp    _Ta5;
_Ta5:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        lea    eax, [eax+ecx*8];
	__asm        mov    [ebp-0xC], eax;
	__asm        jmp    _Tb9;
_Tb9:
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    dword ptr [eax+4], 0;
// LINE 371:
	__asm        jmp    _FOR_NEXT_18;
// LINE 373:
_Tc8:
	this->markPos = 0x0;
	this->curPos = this->markPos;
// LINE 374:
	__asm        mov    eax, this;
	__asm        mov    word ptr [eax+0xE], 0;
	__asm        mov    eax, this;
	__asm        mov    ax, [eax+0xE];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], ax;
// LINE 375:
	return;
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004ce100
unsigned long cGZXParamBitstream<t_alloc,t_free>::Read(unsigned char * buffer, unsigned long nBytes) {
	/*bp-0x4*/   unsigned long i;

// LINE 285:
	i = 0x0;
// LINE 287:
__WHILE_13:
	while ((nBytes > i)) {
		// LINE 288:
			__asm        jmp    _T24;
		_T24:
			__asm        jmp    _T29;
		_T29:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    ecx, [ecx+0x16];
			__asm        cmp    dword ptr [ecx+eax*8], 0;
			__asm        jne    _T48;

			return i;
		// LINE 289:
		_T48:
			__asm        jmp    _T4d;
		_T4d:
			__asm        jmp    _T52;
		_T52:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    ecx, [ecx+0x16];
			__asm        mov    edx, this;
			__asm        mov    edx, [edx+4];
			__asm        cmp    [ecx+eax*8+4], edx;
			__asm        ja     _Ta9;
		// LINE 290:
			this->nodeNo++;
		// LINE 291:
			__asm        jmp    _T7b;
		_T7b:
			__asm        jmp    _T80;
		_T80:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    ecx, [ecx+0x16];
			__asm        cmp    dword ptr [ecx+eax*8], 0;
			__asm        jne    _T9f;

			return i;
		// LINE 292:
		_T9f:
			this->curPos = 0x0;
		// LINE 294:
		_Ta9:
			__asm        jmp    _Tae;
		_Tae:
			__asm        jmp    _Tb3;
		_Tb3:
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
	}
// LINE 296:
_Te3:
	return i;
// LINE 297:
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004ce200
unsigned long cGZXParamBitstream<t_alloc,t_free>::Write(unsigned char * buffer, unsigned long nBytes) {
	/*bp-0x4*/   unsigned long i;

// LINE 305:
	i = 0x0;
// LINE 307:
__WHILE_19:
	while ((i < nBytes)) {
		// LINE 310:
			__asm        jmp    _T2a;
		_T2a:
			__asm        jmp    _T2f;
		_T2f:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    ecx, [ecx+0x16];
			__asm        cmp    dword ptr [ecx+eax*8], 0;
			__asm        jne    _T5e6;
		// LINE 312:
			__asm        mov    eax, this;
			__asm        mov    ax, [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    [ecx+0x10], ax;
		// LINE 313:
			this->maxPos = 0x0;
		// LINE 314:
			__asm        jmp    _T72;
		_T72:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        shl    eax, 3;
			__asm        mov    ecx, this;
			__asm        add    eax, [ecx+0x16];
			__asm        mov    [ebp-0x18], eax;
			__asm        jmp    _T90;
		_T90:
			__asm        jmp    _T95;
		_T95:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x38];
			__asm        mov    [ebp-0x30], eax;
			__asm        jmp    _Ta6;
		_Ta6:
			__asm        mov    eax, [ebp-0x30];
			__asm        push   eax;
			__asm        call   operator new;
			__asm        add    esp, 4;
			__asm        mov    ecx, [ebp-0x18];
			__asm        mov    [ecx], eax;
		// LINE 315:
			__asm        jmp    _Tbc;
		_Tbc:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        shl    eax, 3;
			__asm        mov    ecx, this;
			__asm        add    eax, [ecx+0x16];
			__asm        mov    [ebp-0x1C], eax;
			__asm        jmp    _Tda;
		_Tda:
			__asm        jmp    _Tdf;
		_Tdf:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x38];
			__asm        mov    ecx, [ebp-0x1C];
			__asm        mov    [ecx+4], eax;
		// LINE 317:
			__asm        jmp    _Tf3;
		_Tf3:
			__asm        jmp    _Tf8;
		_Tf8:
			__asm        jmp    _Tfd;
		_Tfd:
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
			__asm        jmp    _T13b;
		_T13b:
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
			__asm        jmp    _T16a;
		_T16a:
			__asm        cmp    dword ptr [ebp-0x34], 0;
			__asm        je     _T187;

			__asm        mov    eax, [ebp-0xC];
			__asm        mov    ecx, [ebp-8];
			__asm        mov    edx, [ebp-0x34];
			__asm        mov    [edx], eax;
			__asm        mov    [edx+4], ecx;
			__asm        jmp    _T187;
		_T187:
			__asm        jmp    _T18c;
		_T18c:
			this->nodeList.finish += 0x8;
			__asm        jmp    _T5a5;
		_T19b:
			__asm        jmp    _T1a0;
		_T1a0:
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
			__asm        jmp    _T1ed;
		_T1ed:
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
			__asm        jmp    _T211;
		_T211:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x1A];
			__asm        mov    [ebp-0x60], eax;
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x1A];
			__asm        sub    eax, 8;
			__asm        mov    [ebp-0x64], eax;
		__WHILE_22c:
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
			__asm        jmp    __WHILE_22c;
		_T258:
			__asm        jmp    _T25d;
		_T25d:
			__asm        mov    eax, [ebp-0xC];
			__asm        mov    ecx, [ebp-8];
			__asm        mov    edx, [ebp-0xA8];
			__asm        mov    [edx], eax;
			__asm        mov    [edx+4], ecx;
			__asm        mov    eax, this;
			__asm        add    dword ptr [eax+0x1A], 8;
			__asm        jmp    _T5a0;
		_T27d:
			__asm        jmp    _T282;
		_T282:
			__asm        jmp    _T287;
		_T287:
			__asm        jmp    _T28c;
		_T28c:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x1A];
			__asm        mov    ecx, this;
			__asm        sub    eax, [ecx+0x16];
			__asm        sar    eax, 3;
			__asm        test   eax, eax;
			__asm        je     _T2d7;

			__asm        jmp    _T2ae;
		_T2ae:
			__asm        jmp    _T2b3;
		_T2b3:
			__asm        jmp    _T2b8;
		_T2b8:
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
			__asm        jmp    _T317;
		_T317:
			__asm        mov    eax, [ebp-0x5C];
			__asm        mov    eax, [eax];
			__asm        mov    [ebp-0x40], eax;
			__asm        jmp    _T324;
		_T324:
			__asm        jmp    _T329;
		_T329:
			__asm        push   0;
			__asm        mov    eax, [ebp-0x40];
			__asm        push   eax;
			__asm        call   allocate;
			__asm        add    esp, 8;
			__asm        mov    [ebp-0x3C], eax;
			__asm        jmp    _T33f;
		_T33f:
			__asm        mov    eax, [ebp-0x3C];
			__asm        mov    [ebp-0x88], eax;
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x16];
			__asm        mov    [ebp-0x8C], eax;
		__WHILE_357:
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
			__asm        jmp    _T397;
		_T397:
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
			__asm        jmp    _T3c1;
		_T3c1:
		_T3c6:
			__asm        jmp    _T3cb;
		_T3cb:
			__asm        jmp    _T3d0;
		_T3d0:
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
			__asm        jmp    _T3fc;
		_T3fc:
			__asm        cmp    dword ptr [ebp-0x74], 0;
			__asm        je     _T419;

			__asm        mov    eax, [ebp-0xC];
			__asm        mov    ecx, [ebp-8];
			__asm        mov    edx, [ebp-0x74];
			__asm        mov    [edx], eax;
			__asm        mov    [edx+4], ecx;
			__asm        jmp    _T419;
		_T419:
			__asm        jmp    _T41e;
		_T41e:
			__asm        jmp    _T423;
		_T423:
			__asm        jmp    _T428;
		_T428:
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
		__WHILE_46a:
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
			__asm        jmp    _T4b3;
		_T4b3:
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
			__asm        jmp    _T4e0;
		_T4e0:
		_T4e5:
			__asm        jmp    _T4ea;
		_T4ea:
			__asm        jmp    _T4ef;
		_T4ef:
			__asm        jmp    _T4f4;
		_T4f4:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x16];
			__asm        mov    [ebp-0x48], eax;
		__WHILE_500:
			__asm        mov    eax, this;
			__asm        mov    ecx, [ebp-0x48];
			__asm        cmp    [eax+0x1A], ecx;
			__asm        je     _T520;

			__asm        jmp    _T517;
		_T517:
			__asm        add    dword ptr [ebp-0x48], 8;
			__asm        jmp    __WHILE_500;
		_T520:
			__asm        jmp    _T525;
		_T525:
			__asm        jmp    _T52a;
		_T52a:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x16];
			__asm        mov    [ebp-0x44], eax;
			__asm        mov    eax, [ebp-0x44];
			__asm        push   eax;
			__asm        call   operator delete;
			__asm        add    esp, 4;
			__asm        jmp    _T547;
		_T547:
			__asm        jmp    _T54c;
		_T54c:
			__asm        mov    eax, [ebp-0x40];
			__asm        shl    eax, 3;
			__asm        add    eax, [ebp-0x3C];
			__asm        mov    ecx, this;
			__asm        mov    [ecx+0x1E], eax;
			__asm        jmp    _T563;
		_T563:
			__asm        jmp    _T568;
		_T568:
			__asm        jmp    _T56d;
		_T56d:
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
			__asm        jmp    _T5bc;
		_T5bc:
			__asm        jmp    _T5c1;
		_T5c1:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    ecx, [ecx+0x16];
			__asm        cmp    dword ptr [ecx+eax*8], 0;
			__asm        jne    _T5e6;

			return i;
		// LINE 324:
		_T5e6:
			__asm        jmp    _T5eb;
		_T5eb:
			__asm        jmp    _T5f0;
		_T5f0:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    ecx, [ecx+0x16];
			__asm        mov    edx, this;
			__asm        mov    edx, [edx+4];
			__asm        cmp    [ecx+eax*8+4], edx;
			__asm        ja     _Tc99;
		// LINE 326:
			this->nodeNo++;
		// LINE 327:
			__asm        jmp    _T625;
		_T625:
			__asm        jmp    _T62a;
		_T62a:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    ecx, [ecx+0x16];
			__asm        cmp    dword ptr [ecx+eax*8], 0;
			__asm        jne    _Tc8c;
		// LINE 329:
			__asm        mov    eax, this;
			__asm        mov    ax, [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    [ecx+0x10], ax;
		// LINE 330:
			this->maxPos = 0x0;
		// LINE 332:
			__asm        jmp    _T66d;
		_T66d:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        shl    eax, 3;
			__asm        mov    ecx, this;
			__asm        add    eax, [ecx+0x16];
			__asm        mov    [ebp-0x20], eax;
			__asm        jmp    _T68b;
		_T68b:
			__asm        jmp    _T690;
		_T690:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x38];
			__asm        mov    [ebp-0x2C], eax;
			__asm        jmp    _T6a1;
		_T6a1:
			__asm        mov    eax, [ebp-0x2C];
			__asm        push   eax;
			__asm        call   operator new;
			__asm        add    esp, 4;
			__asm        mov    ecx, [ebp-0x20];
			__asm        mov    [ecx], eax;
		// LINE 333:
			__asm        jmp    _T6b7;
		_T6b7:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        shl    eax, 3;
			__asm        mov    ecx, this;
			__asm        add    eax, [ecx+0x16];
			__asm        mov    [ebp-0x24], eax;
			__asm        jmp    _T6d5;
		_T6d5:
			__asm        jmp    _T6da;
		_T6da:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x38];
			__asm        mov    ecx, [ebp-0x24];
			__asm        mov    [ecx+4], eax;
		// LINE 335:
			__asm        jmp    _T6ee;
		_T6ee:
			__asm        jmp    _T6f3;
		_T6f3:
			__asm        jmp    _T6f8;
		_T6f8:
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
			__asm        jmp    _T736;
		_T736:
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
			__asm        jmp    _T76e;
		_T76e:
			__asm        cmp    dword ptr [ebp-0xAC], 0;
			__asm        je     _T791;

			__asm        mov    eax, [ebp-0x14];
			__asm        mov    ecx, [ebp-0x10];
			__asm        mov    edx, [ebp-0xAC];
			__asm        mov    [edx], eax;
			__asm        mov    [edx+4], ecx;
			__asm        jmp    _T791;
		_T791:
			__asm        jmp    _T796;
		_T796:
			this->nodeList.finish += 0x8;
			__asm        jmp    _Tc4b;
		_T7a5:
			__asm        jmp    _T7aa;
		_T7aa:
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
			__asm        jmp    _T803;
		_T803:
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
			__asm        jmp    _T830;
		_T830:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x1A];
			__asm        mov    [ebp-0xD8], eax;
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x1A];
			__asm        sub    eax, 8;
			__asm        mov    [ebp-0xDC], eax;
		__WHILE_851:
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
			__asm        jmp    __WHILE_851;
		_T88c:
			__asm        jmp    _T891;
		_T891:
			__asm        mov    eax, [ebp-0x14];
			__asm        mov    ecx, [ebp-0x10];
			__asm        mov    edx, [ebp-0x120];
			__asm        mov    [edx], eax;
			__asm        mov    [edx+4], ecx;
			__asm        mov    eax, this;
			__asm        add    dword ptr [eax+0x1A], 8;
			__asm        jmp    _Tc46;
		_T8b1:
			__asm        jmp    _T8b6;
		_T8b6:
			__asm        jmp    _T8bb;
		_T8bb:
			__asm        jmp    _T8c0;
		_T8c0:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x1A];
			__asm        mov    ecx, this;
			__asm        sub    eax, [ecx+0x16];
			__asm        sar    eax, 3;
			__asm        test   eax, eax;
			__asm        je     _T90e;

			__asm        jmp    _T8e2;
		_T8e2:
			__asm        jmp    _T8e7;
		_T8e7:
			__asm        jmp    _T8ec;
		_T8ec:
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
			__asm        jmp    _T972;
		_T972:
			__asm        mov    eax, [ebp-0xD4];
			__asm        mov    eax, [eax];
			__asm        mov    [ebp-0xB8], eax;
			__asm        jmp    _T985;
		_T985:
			__asm        jmp    _T98a;
		_T98a:
			__asm        push   0;
			__asm        mov    eax, [ebp-0xB8];
			__asm        push   eax;
			__asm        call   allocate;
			__asm        add    esp, 8;
			__asm        mov    [ebp-0xB4], eax;
			__asm        jmp    _T9a6;
		_T9a6:
			__asm        mov    eax, [ebp-0xB4];
			__asm        mov    [ebp-0x100], eax;
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x16];
			__asm        mov    [ebp-0x104], eax;
		__WHILE_9c1:
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
			__asm        jmp    _Ta0a;
		_Ta0a:
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
			__asm        jmp    _Ta37;
		_Ta37:
		_Ta3c:
			__asm        jmp    _Ta41;
		_Ta41:
			__asm        jmp    _Ta46;
		_Ta46:
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
			__asm        jmp    _Ta7e;
		_Ta7e:
			__asm        cmp    dword ptr [ebp-0xEC], 0;
			__asm        je     _Taa1;

			__asm        mov    eax, [ebp-0x14];
			__asm        mov    ecx, [ebp-0x10];
			__asm        mov    edx, [ebp-0xEC];
			__asm        mov    [edx], eax;
			__asm        mov    [edx+4], ecx;
			__asm        jmp    _Taa1;
		_Taa1:
			__asm        jmp    _Taa6;
		_Taa6:
			__asm        jmp    _Taab;
		_Taab:
			__asm        jmp    _Tab0;
		_Tab0:
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
		__WHILE_af5:
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
			__asm        jmp    _Tb3e;
		_Tb3e:
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
			__asm        jmp    _Tb6b;
		_Tb6b:
		_Tb70:
			__asm        jmp    _Tb75;
		_Tb75:
			__asm        jmp    _Tb7a;
		_Tb7a:
			__asm        jmp    _Tb7f;
		_Tb7f:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x16];
			__asm        mov    [ebp-0xC0], eax;
		__WHILE_b8e:
			__asm        mov    eax, this;
			__asm        mov    ecx, [ebp-0xC0];
			__asm        cmp    [eax+0x1A], ecx;
			__asm        je     _Tbb4;

			__asm        jmp    _Tba8;
		_Tba8:
			__asm        add    dword ptr [ebp-0xC0], 8;
			__asm        jmp    __WHILE_b8e;
		_Tbb4:
			__asm        jmp    _Tbb9;
		_Tbb9:
			__asm        jmp    _Tbbe;
		_Tbbe:
			__asm        mov    eax, this;
			__asm        mov    eax, [eax+0x16];
			__asm        mov    [ebp-0xBC], eax;
			__asm        mov    eax, [ebp-0xBC];
			__asm        push   eax;
			__asm        call   operator delete;
			__asm        add    esp, 4;
			__asm        jmp    _Tbe1;
		_Tbe1:
			__asm        jmp    _Tbe6;
		_Tbe6:
			__asm        mov    eax, [ebp-0xB8];
			__asm        shl    eax, 3;
			__asm        add    eax, [ebp-0xB4];
			__asm        mov    ecx, this;
			__asm        mov    [ecx+0x1E], eax;
			__asm        jmp    _Tc03;
		_Tc03:
			__asm        jmp    _Tc08;
		_Tc08:
			__asm        jmp    _Tc0d;
		_Tc0d:
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
			__asm        jmp    _Tc62;
		_Tc62:
			__asm        jmp    _Tc67;
		_Tc67:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        mov    ecx, this;
			__asm        mov    ecx, [ecx+0x16];
			__asm        cmp    dword ptr [ecx+eax*8], 0;
			__asm        jne    _Tc8c;

			return i;
		// LINE 342:
		_Tc8c:
			this->curPos = 0x0;
		// LINE 344:
		_Tc99:
			__asm        jmp    _Tc9e;
		_Tc9e:
			__asm        mov    eax, this;
			__asm        movsx  eax, word ptr [eax+0xC];
			__asm        shl    eax, 3;
			__asm        mov    ecx, this;
			__asm        add    eax, [ecx+0x16];
			__asm        mov    [ebp-0x28], eax;
			__asm        jmp    _Tcbc;
		_Tcbc:
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
	}
// LINE 347:
_Td2d:
	return i;
// LINE 349:
}

// Function in module: scxload.obj
// FUNCTION: COPTER_D 0x004cef40
long cGZXParamBitstream<t_alloc,t_free>::Size() {
	/*bp-0x4*/   int32_t loop;
	/*bp-0x8*/   long retVal;

// LINE 355:
	retVal = 0x0;
// LINE 356:
_FOR_1f:
	loop = 0x0;
	__asm        jmp    _FOR_COND_1f;
_FOR_NEXT_1f:
	loop++;
_FOR_COND_1f:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+0x10];
	__asm        cmp    eax, loop;
	__asm        je     _T54;
// LINE 357:
	__asm        jmp    _T37;
_T37:
	__asm        jmp    _T3c;
_T3c:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x16];
	__asm        mov    ecx, loop;
	__asm        mov    eax, [eax+ecx*8+4];
	__asm        add    eax, retVal;
	__asm        mov    retVal, eax;
	__asm        jmp    _FOR_NEXT_1f;
// LINE 358:
_T54:
	retVal = (this->maxPos + retVal);
// LINE 360:
	return retVal;
// LINE 361:
}

