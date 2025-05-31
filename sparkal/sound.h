// Function in module: sound.obj
// FUNCTION: COPTER_D 0x00431b00
int32_t DigitalSound::GetSoundType() {
	__asm        mov    eax, 1;
	__asm        jmp    near ptr 0x00431B16;
}

