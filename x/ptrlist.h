// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e740
void PtrList<cBBase>::Remove(/*unpacked*/ class cBBase *data) {
	/*bp-0x4*/   /*unpacked*/ struct PtrList<cBBase>::PtrNode *del;
	/*bp-0x8*/   /*unpacked*/ struct PtrList<cBBase>::PtrNode **srch;

// LINE 43:
	srch = this;
// LINE 44:
_T12:
	__asm        mov    eax, srch;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T9f;
// LINE 45:
	__asm        mov    eax, srch;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, data;
	__asm        cmp    [eax], ecx;
	__asm        jne    _T8f;
// LINE 46:
	del = srch->;
// LINE 47:
	srch-> = srch->->next;
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
	this->fCount--;
// LINE 50:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jge    _T8a;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x32;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 51:
_T8a:
	__asm        jmp    _Ta4;
// LINE 53:
_T8f:
	__asm        mov    eax, srch;
	__asm        mov    eax, [eax];
	__asm        add    eax, 4;
	__asm        mov    srch, eax;
// LINE 54:
	__asm        jmp    _T12;
// LINE 55:
_T9f:
	__asm        jmp    _Ta4;
_Ta4:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e7f0
void PtrList<cCopterAnim>::Iter::Reset() {

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T2a;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
	__asm        jmp    _T34;
_T2a:
	this->fCur = 0x0;
_T34:
	__asm        jmp    _T39;
_T39:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e8d0
void PtrList<cCopterAnim>::~PtrList<cCopterAnim>() {
// LINE 22:
_T0c:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T79;

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
	__asm        jge    _T74;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x26;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T74:
	__asm        jmp    _T0c;
_T79:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Ta1;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x28;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_Ta1:
	__asm        jmp    _Ta6;
// LINE 23:
_Ta6:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Tce;

	__asm        push   0x8C085;
	__asm        push   0x59A274;
	__asm        push   0x17;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 24:
_Tce:
	__asm        jmp    _Td3;
_Td3:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fcb0
void PtrList<cCopterBody>::~PtrList<cCopterBody>() {
// LINE 22:
_T0c:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T79;

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
	__asm        jge    _T74;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x26;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T74:
	__asm        jmp    _T0c;
_T79:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Ta1;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x28;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_Ta1:
	__asm        jmp    _Ta6;
// LINE 23:
_Ta6:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Tce;

	__asm        push   0x8C085;
	__asm        push   0x59A274;
	__asm        push   0x17;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 24:
_Tce:
	__asm        jmp    _Td3;
_Td3:
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fd90
void PtrList<cCopterBody>::Iter::Reset() {

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T2a;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
	__asm        jmp    _T34;
_T2a:
	this->fCur = 0x0;
_T34:
	__asm        jmp    _T39;
_T39:
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00551de0
void PtrList<StdResLoader>::~PtrList<StdResLoader>() {
// LINE 22:
_T0c:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T79;

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
	__asm        jge    _T74;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x26;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_T74:
	__asm        jmp    _T0c;
_T79:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Ta1;

	__asm        push   0x8C085;
	__asm        push   0x59A24C;
	__asm        push   0x28;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
_Ta1:
	__asm        jmp    _Ta6;
// LINE 23:
_Ta6:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Tce;

	__asm        push   0x8C085;
	__asm        push   0x59A274;
	__asm        push   0x17;
	__asm        push   0x59A254;
	__asm        call   doAssert;
	__asm        add    esp, 0x10;
// LINE 24:
_Tce:
	__asm        jmp    _Td3;
_Td3:
}

