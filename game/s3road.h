// Function in module: S3rdgrph.obj
// FUNCTION: COPTER_D 0x00541360
int32_t TimeOfTravelTable(unsigned short t) {
// LINE 779:
	__asm        mov    eax, reinterpret_cast<uint32_t>(t);
	__asm        and    eax, 0xFFFF;
	__asm        mov    [ebp-4], eax;
	__asm        jmp    _T89;
// LINE 791:
_T19:
	return 0x8;
// LINE 798:
_T23:
	return 0xa;
// LINE 808:
_T2d:
	return 0x8;
// LINE 818:
_T37:
	return 0x4;
// LINE 832:
_T41:
	return 0x8;
// LINE 840:
_T4b:
	return 0x8;
// LINE 850:
_T55:
	return 0xa;
// LINE 860:
_T5f:
	return 0x8;
// LINE 863:
_T69:
	return 0xa;
// LINE 869:
_T73:
	return 0x4;
// LINE 873:
_T7d:
	return 0x0;
// LINE 874:
	__asm        jmp    __RETURN;
_T89:
	__asm        cmp    dword ptr [ebp-4], 0x2B;
	__asm        jg     _Tb6;

	__asm        cmp    dword ptr [ebp-4], 0x27;
	__asm        jge    _T23;

	__asm        cmp    dword ptr [ebp-4], 0x1D;
	__asm        jl     _T7d;

	__asm        cmp    dword ptr [ebp-4], 0x26;
	__asm        jle    _T19;

	__asm        jmp    _T7d;
_Tb6:
	__asm        cmp    dword ptr [ebp-4], 0x50;
	__asm        jg     _Te3;

	__asm        cmp    dword ptr [ebp-4], 0x49;
	__asm        jge    _T37;

	__asm        cmp    dword ptr [ebp-4], 0x3F;
	__asm        jl     _T7d;

	__asm        cmp    dword ptr [ebp-4], 0x46;
	__asm        jle    _T2d;

	__asm        jmp    _T7d;
_Te3:
	__asm        cmp    dword ptr [ebp-4], 0x59;
	__asm        jg     _T110;

	__asm        cmp    dword ptr [ebp-4], 0x57;
	__asm        jge    _T4b;

	__asm        cmp    dword ptr [ebp-4], 0x51;
	__asm        jl     _T7d;

	__asm        cmp    dword ptr [ebp-4], 0x56;
	__asm        jle    _T41;

	__asm        jmp    _T7d;
_T110:
	__asm        cmp    dword ptr [ebp-4], 0x68;
	__asm        jg     _T13d;

	__asm        cmp    dword ptr [ebp-4], 0x61;
	__asm        jge    _T5f;

	__asm        cmp    dword ptr [ebp-4], 0x5D;
	__asm        jl     _T7d;

	__asm        cmp    dword ptr [ebp-4], 0x60;
	__asm        jle    _T55;

	__asm        jmp    _T7d;
_T13d:
	__asm        cmp    dword ptr [ebp-4], 0x8056;
	__asm        jg     _T17a;

	__asm        cmp    dword ptr [ebp-4], 0x8051;
	__asm        jge    _T41;

	__asm        cmp    dword ptr [ebp-4], 0x69;
	__asm        je     _T69;

	__asm        cmp    dword ptr [ebp-4], 0x6A;
	__asm        jl     _T7d;

	__asm        cmp    dword ptr [ebp-4], 0x6B;
	__asm        jle    _T73;

	__asm        jmp    _T7d;
_T17a:
	__asm        sub    dword ptr [ebp-4], 0x8057;
	__asm        cmp    dword ptr [ebp-4], 0x14;
	__asm        ja     _T7d;

	__asm        mov    eax, [ebp-4];
	__asm        xor    ecx, ecx;
	__asm        mov    cl, _SwitchTable_1ad[0][eax];
	__asm        jmp    _Switch_19d[0][ecx*4];
	// Switch pointers:
	//   _T4b
	//   _T55
	//   _T73
	//   _T7d
	// Switch table
	//  [0, 0, 0, 3, 3, 3, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2]
// LINE 876:
__RETURN:
}

