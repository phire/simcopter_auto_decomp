// Function in module: S3amblnc.obj
// FUNCTION: COPTER_D 0x005360a0
void EmergencyVehicleClass::BeamToWithinCameraRange() {
// LINE 213:
	asm( 
"	      005360a0    push ebp"
"	      005360a1    mov ebp,esp"
"	      005360a3    sub esp,4"
"	      005360a6    push ebx"
"	      005360a7    push esi"
"	      005360a8    push edi"
"	      005360a9    mov [ebp-4],ecx"
"	      005360ac    jmp near ptr 005360B1h"
"	      005360b1    pop edi"
"	      005360b2    pop esi"
"	      005360b3    pop ebx"
"	      005360b4    leave"
"	      005360b5    ret"
);
}

