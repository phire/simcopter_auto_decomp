// Function in module: palhelp.obj
// FUNCTION: COPTER_D 0x00497b50
void SparkalPalette::GetRGBValue(int32_t nIndex, struct SparkalColor& colorValue) {
// LINE 108:
	reinterpret_cast<uint32_t>(colorValue.Blue) = *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(&this->pColors->Blue) + nIndex * 4 + 0);
// LINE 109:
	__asm        jmp    near ptr 0x00497B72;
}

