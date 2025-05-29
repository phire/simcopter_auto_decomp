// Function in module: S3crminl.obj
// FUNCTION: COPTER_D 0x00535840
void CriminalEvaderCarClass::BeamToWithinCameraRange() {
// LINE 117:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        jmp    near ptr 0x00535851;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

