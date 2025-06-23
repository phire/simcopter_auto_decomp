// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e740
void PtrList<cBBase>::Remove(/*unpacked*/ class cBBase *data) {
	/*bp-0x4*/   /*unpacked*/ struct PtrList<cBBase>::PtrNode *del;
	/*bp-0x8*/   /*unpacked*/ struct PtrList<cBBase>::PtrNode **srch;

// LINE 43:
	srch = this;
// LINE 44:
__WHILE_12:
	while ((srch-> != 0x0)) {
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

			doAssert(0x8c085, 0x59a24c, 0x32, 0x59a254);
		// LINE 51:
		_T8a:
			return;
		// LINE 53:
		_T8f:
			srch = (srch-> + 0x4);
	}
// LINE 55:
_T9f:
	return;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e7f0
void PtrList<cCopterAnim>::Iter::Reset() {

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T2a;

	this->fCur = this->fObject->fFirst;
	__asm        jmp    _T34;
_T2a:
	this->fCur = 0x0;
_T34:
	return;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055e8d0
void PtrList<cCopterAnim>::~PtrList<cCopterAnim>() {
// LINE 22:
__WHILE_0c:
	while ((this->fFirst != 0x0)) {

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

			doAssert(0x8c085, 0x59a24c, 0x26, 0x59a254);
		_T74:
	}
_T79:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Ta1;

	doAssert(0x8c085, 0x59a24c, 0x28, 0x59a254);
_Ta1:
	__asm        jmp    _Ta6;
// LINE 23:
_Ta6:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Tce;

	doAssert(0x8c085, 0x59a274, 0x17, 0x59a254);
// LINE 24:
_Tce:
	return;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fcb0
void PtrList<cCopterBody>::~PtrList<cCopterBody>() {
// LINE 22:
__WHILE_0c:
	while ((this->fFirst != 0x0)) {

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

			doAssert(0x8c085, 0x59a24c, 0x26, 0x59a254);
		_T74:
	}
_T79:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Ta1;

	doAssert(0x8c085, 0x59a24c, 0x28, 0x59a254);
_Ta1:
	__asm        jmp    _Ta6;
// LINE 23:
_Ta6:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Tce;

	doAssert(0x8c085, 0x59a274, 0x17, 0x59a254);
// LINE 24:
_Tce:
	return;
}

// Function in module: Bodydefs.obj
// FUNCTION: COPTER_D 0x0055fd90
void PtrList<cCopterBody>::Iter::Reset() {

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax], 0;
	__asm        je     _T2a;

	this->fCur = this->fObject->fFirst;
	__asm        jmp    _T34;
_T2a:
	this->fCur = 0x0;
_T34:
	return;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00551de0
void PtrList<StdResLoader>::~PtrList<StdResLoader>() {
// LINE 22:
__WHILE_0c:
	while ((this->fFirst != 0x0)) {

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

			doAssert(0x8c085, 0x59a24c, 0x26, 0x59a254);
		_T74:
	}
_T79:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Ta1;

	doAssert(0x8c085, 0x59a24c, 0x28, 0x59a254);
_Ta1:
	__asm        jmp    _Ta6;
// LINE 23:
_Ta6:
	__asm        mov    eax, this;
	__asm        movsx  eax, word ptr [eax+4];
	__asm        test   eax, eax;
	__asm        je     _Tce;

	doAssert(0x8c085, 0x59a274, 0x17, 0x59a254);
// LINE 24:
_Tce:
	return;
}

