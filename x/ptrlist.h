// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e740
void PtrList<cBBase>::Remove(class cBBase* data) {
	struct PtrList<cBBase>::PtrNode** srch;
	struct PtrList<cBBase>::PtrNode* del;

// LINE 43:
	__asm        mov    eax, this;
	__asm        mov    srch, eax;
// LINE 44:
	__asm        mov    eax, srch;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     near ptr 0x0055E7DF;
// LINE 45:
	__asm        mov    eax, srch;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, data;
	__asm        cmp    [eax], ecx;
	__asm        jne    near ptr 0x0055E7CF;
// LINE 46:
	__asm        mov    eax, srch;
	__asm        mov    eax, [eax];
	__asm        mov    del, eax;
// LINE 47:
	__asm        mov    eax, srch;
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, srch;
	__asm        mov    [ecx], eax;
// LINE 48:
	__asm        mov    eax, del;
	__asm        mov    [ebp-0xC], eax;
	__asm        mov    eax, [ebp-0xC];
	__asm        mov    [ebp-0x10], eax;
	__asm        mov    eax, [ebp-0x10];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
// LINE 49:
	__asm        mov    eax, this;
	__asm        dec    word ptr [eax+4];
// LINE 50:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jge    near ptr 0x0055E7CA;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x32;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 51:
	__asm        jmp    near ptr 0x0055E7E4;
// LINE 53:
	__asm        mov    eax, srch;
	__asm        mov    eax, [eax];
	__asm        add    eax, 4;
	__asm        mov    srch, eax;
// LINE 54:
	__asm        jmp    near ptr 0x0055E752;
// LINE 55:
	__asm        jmp    near ptr 0x0055E7E4;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e7f0
void PtrList<cCopterAnim>::Iter::Reset() {

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     near ptr 0x0055E81A;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
	__asm        jmp    near ptr 0x0055E824;

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
	__asm        jmp    near ptr 0x0055E829;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e8d0
void PtrList<cCopterAnim>::~PtrList<cCopterAnim>() {
// LINE 22:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     near ptr 0x0055E949;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    [ebp-8], eax;
	__asm        mov    eax, [ebp-8];
	__asm        mov    [ebp-0xC], eax;
	__asm        mov    eax, [ebp-0xC];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        mov    eax, this;
	__asm        dec    word ptr [eax+4];
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jge    near ptr 0x0055E944;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x26;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x0055E8DC;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     near ptr 0x0055E971;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x28;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x0055E976;
// LINE 23:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     near ptr 0x0055E99E;

	__asm        push   0x8C085;
	__asm        push   0x59A274;
	__asm        push   0x17;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 24:
	__asm        jmp    near ptr 0x0055E9A3;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fcb0
void PtrList<cCopterBody>::~PtrList<cCopterBody>() {
// LINE 22:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     near ptr 0x0055FD29;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    [ebp-8], eax;
	__asm        mov    eax, [ebp-8];
	__asm        mov    [ebp-0xC], eax;
	__asm        mov    eax, [ebp-0xC];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        mov    eax, this;
	__asm        dec    word ptr [eax+4];
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jge    near ptr 0x0055FD24;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x26;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x0055FCBC;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     near ptr 0x0055FD51;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x28;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x0055FD56;
// LINE 23:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     near ptr 0x0055FD7E;

	__asm        push   0x8C085;
	__asm        push   0x59A274;
	__asm        push   0x17;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 24:
	__asm        jmp    near ptr 0x0055FD83;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fd90
void PtrList<cCopterBody>::Iter::Reset() {

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     near ptr 0x0055FDBA;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
	__asm        jmp    near ptr 0x0055FDC4;

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
	__asm        jmp    near ptr 0x0055FDC9;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00551de0
void PtrList<StdResLoader>::~PtrList<StdResLoader>() {
// LINE 22:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     near ptr 0x00551E59;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx], eax;
	__asm        mov    eax, [ebp-4];
	__asm        mov    [ebp-8], eax;
	__asm        mov    eax, [ebp-8];
	__asm        mov    [ebp-0xC], eax;
	__asm        mov    eax, [ebp-0xC];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        mov    eax, this;
	__asm        dec    word ptr [eax+4];
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jge    near ptr 0x00551E54;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x26;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x00551DEC;

	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     near ptr 0x00551E81;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x28;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x00551E86;
// LINE 23:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     near ptr 0x00551EAE;

	__asm        push   0x8C085;
	__asm        push   0x59A274;
	__asm        push   0x17;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 24:
	__asm        jmp    near ptr 0x00551EB3;
}

