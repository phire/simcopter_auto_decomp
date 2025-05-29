// Function in module: S3amblnc.obj
// FUNCTION: COPTER_D 0x005360a0
void EmergencyVehicleClass::BeamToWithinCameraRange() {
// LINE 213:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
	__asm        jmp    near ptr 0x005360B1;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

