// Module: S3spiral.obj
// Source: C:\Copter\Source\Game\S3spiral.cpp
// autogenerated by simcopter_tool from PDB file

// Type: class SpiralScan (forward reference);
class SpiralScan{
public:
	void SpiralScan(int32_t);
	void ~SpiralScan();
	int32_t Next(struct _GridCoordinates&);
	int32_t InCityGridLimits(struct _GridCoordinates);
private:
	int32_t currDist;
	int32_t currDir;
	int32_t currDia;
	int32_t maxDia;
};

// Type: int32_t;

// Type: void;

// Type: struct _GridCoordinates (forward reference);

// Type: struct _GridCoordinates;
struct _GridCoordinates{
	unsigned char x;
	unsigned char y;
};



// Contribution: 1:00141dc0-00141f77 Module: 153, 16 byte alignment, code, execute, read, 
// FUNCTION: COPTER_D 0x00542dc0
void SpiralScan::SpiralScan(int32_t radius) {
// LINE 10:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0;
// LINE 11:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
// LINE 12:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+8], 1;
// LINE 13:
	__asm        mov    eax, radius;
	__asm        add    eax, eax;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0xC], eax;
// LINE 14:
	__asm        jmp    near ptr 0x00542DF9;

	__asm        mov    eax, this;
}

// FUNCTION: COPTER_D 0x00542e03
int32_t SpiralScan::Next(struct _GridCoordinates& currLoc) {
// LINE 21:
_T0c:
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0xC];
	__asm        cmp    [eax+8], ecx;
	__asm        jle    _T25;
// LINE 23:
	__asm        xor    eax, eax;
	__asm        jmp    _Tfb;
// LINE 27:
_T25:
	__asm        mov    eax, this;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx];
	__asm        cmp    [eax+8], ecx;
	__asm        jg     _T74;
// LINE 29:
	__asm        mov    eax, this;
	__asm        inc    dword ptr [eax+4];
	__asm        mov    eax, this;
	__asm        add    eax, 4;
	__asm        mov    [ebp-4], eax;
	__asm        mov    eax, [ebp-4];
	__asm        and    dword ptr [eax], 3;
// LINE 30:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0;
// LINE 32:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+4], 0;
	__asm        je     _T6e;

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+4], 2;
	__asm        jne    _T74;
// LINE 33:
_T6e:
	__asm        mov    eax, this;
	__asm        inc    dword ptr [eax+8];
// LINE 37:
_T74:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0xC], eax;
	__asm        jmp    _Tb1;
// LINE 39:
	__asm        mov    eax, currLoc;
	__asm        dec    byte ptr [eax+1];
	__asm        jmp    _Td5;
// LINE 40:
	__asm        mov    eax, currLoc;
	__asm        inc    byte ptr [eax];
	__asm        jmp    _Td5;
// LINE 41:
	__asm        mov    eax, currLoc;
	__asm        inc    byte ptr [eax+1];
	__asm        jmp    _Td5;
// LINE 42:
	__asm        mov    eax, currLoc;
	__asm        dec    byte ptr [eax];
	__asm        jmp    _Td5;
// LINE 43:
	__asm        jmp    _Td5;

_Tb1:
	__asm        cmp    dword ptr [ebp-0xC], 3;
	__asm        ja     _Td5;

	__asm        mov    eax, [ebp-0xC];
	__asm        jmp    dword ptr [eax*4+0x542EC8];
// Switch pointers
// LINE 44:
_Td5:
	__asm        mov    eax, this;
	__asm        inc    dword ptr [eax];
// LINE 46:
	__asm        mov    eax, currLoc;
	__asm        mov    ax, [eax];
	__asm        push   eax;
	__asm        mov    ecx, this;
	__asm        call   SpiralScan::InCityGridLimits;
	__asm        test   eax, eax;
	__asm        je     _T0c;
// LINE 48:
	__asm        mov    eax, 1;
	__asm        jmp    _Tfb;
// LINE 49:
}

// FUNCTION: COPTER_D 0x00542f05
int32_t SpiralScan::InCityGridLimits(struct _GridCoordinates currLoc) {
// LINE 53:
	__asm        xor    eax, eax;
	__asm        mov    al, currLoc.x;
	__asm        cmp    eax, 0x80;
	__asm        jl     _T23;

	__asm        xor    eax, eax;
	__asm        jmp    _T6c;
// LINE 54:
_T23:
	__asm        xor    eax, eax;
	__asm        mov    al, currLoc.x;
	__asm        test   eax, eax;
	__asm        jge    _T37;

	__asm        xor    eax, eax;
	__asm        jmp    _T6c;
// LINE 55:
_T37:
	__asm        xor    eax, eax;
	__asm        mov    al, currLoc.y;
	__asm        cmp    eax, 0x80;
	__asm        jl     _T4e;

	__asm        xor    eax, eax;
	__asm        jmp    _T6c;
// LINE 56:
_T4e:
	__asm        xor    eax, eax;
	__asm        mov    al, currLoc.y;
	__asm        test   eax, eax;
	__asm        jge    _T62;

	__asm        xor    eax, eax;
	__asm        jmp    _T6c;
// LINE 58:
_T62:
	__asm        mov    eax, 1;
	__asm        jmp    _T6c;
// LINE 59:
}

