// Function in module: palhelp.obj
// FUNCTION: COPTER_D 0x00497b50
void SparkalPalette::GetRGBValue(int32_t nIndex, /*packed*/ struct SparkalColor& colorValue) {
// LINE 108:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, nIndex;
	__asm        mov    eax, [eax+ecx*4];
	__asm        mov    ecx, colorValue;
	__asm        mov    [ecx], eax;
// LINE 109:
	__asm        jmp    _T22;
_T22:
}

