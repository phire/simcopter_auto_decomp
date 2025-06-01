// Function in module: S3rdgrph.obj
// FUNCTION: COPTER_D 0x00541360
int32_t TimeOfTravelTable(unsigned short t) {
	static const <NoType> = { /* <data@0x0054150d> */ };

// LINE 779:
	__asm        mov    eax, reinterpret_cast<uint32_t>(t);
	__asm        and    eax, 0xFFFF;
	__asm        mov    [ebp-4], eax;
	__asm        jmp    _T89;
// LINE 791:
_T19:
	__asm        mov    eax, 8;
	__asm        jmp    _T1c2;
// LINE 798:
_T23:
	__asm        mov    eax, 0xA;
	__asm        jmp    _T1c2;
// LINE 808:
_T2d:
	__asm        mov    eax, 8;
	__asm        jmp    _T1c2;
// LINE 818:
_T37:
	__asm        mov    eax, 4;
	__asm        jmp    _T1c2;
// LINE 832:
_T41:
	__asm        mov    eax, 8;
	__asm        jmp    _T1c2;
// LINE 840:
_T4b:
	__asm        mov    eax, 8;
	__asm        jmp    _T1c2;
// LINE 850:
_T55:
	__asm        mov    eax, 0xA;
	__asm        jmp    _T1c2;
// LINE 860:
_T5f:
	__asm        mov    eax, 8;
	__asm        jmp    _T1c2;
// LINE 863:
_T69:
	__asm        mov    eax, 0xA;
	__asm        jmp    _T1c2;
// LINE 869:
_T73:
	__asm        mov    eax, 4;
	__asm        jmp    _T1c2;
// LINE 873:
_T7d:
	__asm        xor    eax, eax;
	__asm        jmp    _T1c2;
// LINE 874:
	__asm        jmp    _T1c2;
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
	__asm        mov    cl, [eax+0x54150D];
	__asm        jmp    dword ptr [ecx*4+0x5414FD];
// Switch pointers
// Switch table
// LINE 876:
_T1c2:
}

