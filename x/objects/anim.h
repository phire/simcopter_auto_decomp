// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f5b0
void cCopterAnim::Destroy() {
// LINE 224:
	__asm        push   0x8C085;
	__asm        push   0x5BE3FC;
	__asm        push   0xE0;
	__asm        push   0x5BE3D8;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 225:
	__asm        jmp    near ptr 0x0055F5DD;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f5f0
void cCopterAnim::WriteToDisk() {
// LINE 228:
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x28];
	__asm        mov    edx, [ecx];
	__asm        mov    ecx, [eax+0x28];
	__asm        call   dword ptr [edx];
// LINE 229:
	__asm        jmp    near ptr 0x0055F611;
// LINE 230:
	__asm        jmp    near ptr 0x0055F616;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f620
unsigned short cCopterAnim::IsDirty() {

	__asm        push   0x8C085;
	__asm        push   0x5BE44C;
	__asm        push   0xE7;
	__asm        push   0x5BE3D8;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        xor    ax, ax;
	__asm        jmp    near ptr 0x0055F650;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f660
unsigned long cCopterAnim::GetBodyType() {

	__asm        push   0x8C085;
	__asm        push   0x5BE470;
	__asm        push   0xE9;
	__asm        push   0x5BE3D8;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x0055F68F;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f6a0
class cBList<cBBase>* cCopterAnim::GetList() {

	__asm        mov    eax, cCopterAnim::fsList;
	__asm        jmp    near ptr 0x0055F6B6;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f6c0
struct PrivAnimPartInfo* cCopterAnim::GetPartInfo(short framenum, short partnum) {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x28];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    eax, [eax+0xC];
	__asm        add    eax, 8;
	__asm        mov    ecx, [ebp-4];
	__asm        cmp    eax, [ecx+4];
	__asm        je     _T46;

	__asm        push   0x8C085;
	__asm        push   0x5BE4B8;
	__asm        push   0x1A4;
	__asm        push   0x5BE4F0;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T46:
	__asm        mov    eax, [ebp-4];
	__asm        movsx  ecx, framenum;
	__asm        cmp    [eax+0x14], ecx;
	__asm        jle    _T7e;

	__asm        mov    eax, [ebp-4];
	__asm        movsx  ecx, partnum;
	__asm        cmp    [eax+0x10], ecx;
	__asm        jle    _T7e;

	__asm        movsx  eax, framenum;
	__asm        test   eax, eax;
	__asm        jl     _T7e;

	__asm        movsx  eax, partnum;
	__asm        test   eax, eax;
	__asm        jge    _T9a;
_T7e:
	__asm        push   0x8C085;
	__asm        push   0x5BE49C;
	__asm        push   0x1A6;
	__asm        push   0x5BE4F0;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T9a:
	__asm        jmp    near ptr 0x0055F75F;

	__asm        movsx  eax, framenum;
	__asm        mov    ecx, [ebp-4];
	__asm        mov    ecx, [ecx+4];
	__asm        mov    eax, [ecx+eax*4];
	__asm        movsx  ecx, partnum;
	__asm        lea    eax, [eax+ecx*8];
	__asm        jmp    near ptr 0x0055F778;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055f780
struct PrivAnimPartInfo* cCopterAnim::GetPartInfoBasePtr(short framenum) {

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x28];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    eax, [eax+0xC];
	__asm        add    eax, 8;
	__asm        mov    ecx, [ebp-4];
	__asm        cmp    eax, [ecx+4];
	__asm        je     _T46;

	__asm        push   0x8C085;
	__asm        push   0x5BE4B8;
	__asm        push   0x1A4;
	__asm        push   0x5BE4F0;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T46:
	__asm        mov    eax, [ebp-4];
	__asm        movsx  ecx, framenum;
	__asm        cmp    [eax+0x14], ecx;
	__asm        jle    _T74;

	__asm        mov    eax, [ebp-4];
	__asm        cmp    dword ptr [eax+0x10], 0;
	__asm        jle    _T74;

	__asm        movsx  eax, framenum;
	__asm        test   eax, eax;
	__asm        jl     _T74;

	__asm        jmp    _T90;
_T74:
	__asm        push   0x8C085;
	__asm        push   0x5BE49C;
	__asm        push   0x1A6;
	__asm        push   0x5BE4F0;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T90:
	__asm        jmp    near ptr 0x0055F815;

	__asm        movsx  eax, framenum;
	__asm        mov    ecx, [ebp-4];
	__asm        mov    ecx, [ecx+4];
	__asm        mov    eax, [ecx+eax*4];
	__asm        jmp    near ptr 0x0055F827;
}

