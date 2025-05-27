// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552040
class cYObject* cYObject::GetObjectA(short id) {
// LINE 512:
	asm( 
"	      00552040    push ebp"
"	      00552041    mov ebp,esp"
"	      00552043    push ebx"
"	      00552044    push esi"
"	      00552045    push edi"
);
// LINE 513:
	asm( 
"	      00552046    movsx eax,word ptr [ebp+8]"
"	      0055204a    cmp eax,7D00h"
"	      0055204f    jne near ptr 0055205Fh"
"	      00552055    mov eax,ds:[5B8680h]"
"	      0055205a    jmp near ptr 005520D2h"
);
// LINE 515:
	asm( 
"	      0055205f    movsx eax,word ptr [ebp+8]"
"	      00552063    test eax,eax"
"	      00552065    jl near ptr 00552078h"
"	      0055206b    movsx eax,word ptr [ebp+8]"
"	      0055206f    cmp eax,64h"
"	      00552072    jl near ptr 00552094h"
);
// LINE 516:
	asm( 
"	      00552078    push 8C085h"
"	      0055207d    push 5BB9F4h"
"	      00552082    push 204h"
"	      00552087    push 5BBA14h"
"	      0055208c    call 00554F30h"
"	      00552091    add esp,10h"
);
// LINE 517:
	asm( 
"	      00552094    movsx eax,word ptr [ebp+8]"
"	      00552098    cmp dword ptr [eax*4+636D40h],0"
"	      005520a0    jne near ptr 005520C2h"
"	      005520a6    push 8C085h"
"	      005520ab    push 5BB9D0h"
"	      005520b0    push 205h"
"	      005520b5    push 5BBA14h"
"	      005520ba    call 00554F30h"
"	      005520bf    add esp,10h"
);
// LINE 519:
	asm( 
"	      005520c2    movsx eax,word ptr [ebp+8]"
"	      005520c6    mov eax,[eax*4+636D40h]"
"	      005520cd    jmp near ptr 005520D2h"
);
// LINE 520:
	asm( 
"	      005520d2    pop edi"
"	      005520d3    pop esi"
"	      005520d4    pop ebx"
"	      005520d5    leave"
"	      005520d6    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005520e0
void cYObject::SetAnim(unsigned long name) {
// LINE 759:
	asm( 
"	      005520e0    push ebp"
"	      005520e1    mov ebp,esp"
"	      005520e3    sub esp,4"
"	      005520e6    push ebx"
"	      005520e7    push esi"
"	      005520e8    push edi"
"	      005520e9    mov [ebp-4],ecx"
);
// LINE 760:
	asm( 
"	      005520ec    mov eax,[ebp-4]"
"	      005520ef    cmp dword ptr [eax+90h],0"
"	      005520f6    jne near ptr 00552118h"
"	      005520fc    push 8C085h"
"	      00552101    push 5BBB9Ch"
"	      00552106    push 2F8h"
"	      0055210b    push 5BBA14h"
"	      00552110    call 00554F30h"
"	      00552115    add esp,10h"
);
// LINE 761:
	asm( 
"	      00552118    mov eax,[ebp-4]"
"	      0055211b    cmp dword ptr [eax+98h],0"
"	      00552122    je near ptr 0055213Dh"
"	      00552128    mov eax,[ebp-4]"
"	      0055212b    mov eax,[eax+98h]"
"	      00552131    mov ecx,[ebp+8]"
"	      00552134    cmp [eax+1Ch],ecx"
"	      00552137    je near ptr 00552184h"
);
// LINE 762:
	asm( 
"	      0055213d    mov eax,[ebp+8]"
"	      00552140    push eax"
"	      00552141    mov eax,[ebp-4]"
"	      00552144    mov ecx,[eax+90h]"
"	      0055214a    call 00560BF0h"
"	      0055214f    mov ecx,[ebp-4]"
"	      00552152    mov [ecx+98h],eax"
);
// LINE 763:
	asm( 
"	      00552158    mov eax,[ebp-4]"
"	      0055215b    cmp dword ptr [eax+98h],0"
"	      00552162    jne near ptr 00552184h"
"	      00552168    push 8C085h"
"	      0055216d    push 5BBB74h"
"	      00552172    push 2FBh"
"	      00552177    push 5BBA14h"
"	      0055217c    call 00554F30h"
"	      00552181    add esp,10h"
);
// LINE 765:
	asm( 
"	      00552184    jmp near ptr 00552189h"
"	      00552189    pop edi"
"	      0055218a    pop esi"
"	      0055218b    pop ebx"
"	      0055218c    leave"
"	      0055218d    ret 4"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552190
class cYObject* cYObject::PutTotedMedVicOn(struct _DYOBJ_INST* thing) {
	class cYObject* obj;

// LINE 1022:
	asm( 
"	      00552190    push ebp"
"	      00552191    mov ebp,esp"
"	      00552193    sub esp,14h"
"	      00552196    push ebx"
"	      00552197    push esi"
"	      00552198    push edi"
"	      00552199    mov [ebp-14h],ecx"
);
// LINE 1023:
	asm( 
"	      0055219c    cmp dword ptr [ebp+8],0"
"	      005521a0    jne near ptr 005521C2h"
"	      005521a6    push 8C085h"
"	      005521ab    push 5BBE90h"
"	      005521b0    push 3FFh"
"	      005521b5    push 5BBA14h"
"	      005521ba    call 00554F30h"
"	      005521bf    add esp,10h"
);
// LINE 1024:
	asm( 
"	      005521c2    mov ecx,[ebp-14h]"
"	      005521c5    call 005573F5h"
"	      005521ca    mov [ebp-4],eax"
);
// LINE 1025:
	asm( 
"	      005521cd    cmp dword ptr [ebp-4],0"
"	      005521d1    je near ptr 0055235Ch"
);
// LINE 1026:
// Block start:
	unsigned short yes;
	asm( 
"	      005521d7    mov eax,[ebp-4]"
"	      005521da    movsx eax,word ptr [eax+0D8h]"
"	      005521e1    cmp eax,6"
"	      005521e4    je near ptr 00552206h"
"	      005521ea    push 8C085h"
"	      005521ef    push 5BBE70h"
"	      005521f4    push 402h"
"	      005521f9    push 5BBA14h"
"	      005521fe    call 00554F30h"
"	      00552203    add esp,10h"
);
// LINE 1027:
	asm( 
"	      00552206    jmp near ptr 0055220Bh"
"	      0055220b    mov eax,[ebp-4]"
"	      0055220e    mov ecx,[ebp-14h]"
"	      00552211    add ecx,24h"
"	      00552214    cmp [eax+130h],ecx"
"	      0055221a    je near ptr 0055223Ch"
"	      00552220    push 8C085h"
"	      00552225    push 5BBE44h"
"	      0055222a    push 403h"
"	      0055222f    push 5BBA14h"
"	      00552234    call 00554F30h"
"	      00552239    add esp,10h"
);
// LINE 1029:
	asm( 
"	      0055223c    cmp dword ptr [ebp+8],0"
"	      00552240    jne near ptr 00552262h"
"	      00552246    push 8C085h"
"	      0055224b    push 5BBEBCh"
"	      00552250    push 3E6h"
"	      00552255    push 5BBA14h"
"	      0055225a    call 00554F30h"
"	      0055225f    add esp,10h"
"	      00552262    jmp near ptr 00552267h"
"	      00552267    mov eax,[ebp-4]"
"	      0055226a    mov eax,[eax+3Ch]"
"	      0055226d    mov ecx,[ebp+8]"
"	      00552270    sub eax,[ecx+18h]"
"	      00552273    mov ecx,[ebp-4]"
"	      00552276    add eax,[ecx+44h]"
"	      00552279    mov ecx,[ebp+8]"
"	      0055227c    sub eax,[ecx+20h]"
"	      0055227f    mov ecx,[ebp-4]"
"	      00552282    add eax,[ecx+40h]"
"	      00552285    mov ecx,[ebp+8]"
"	      00552288    sub eax,[ecx+1Ch]"
"	      0055228b    sar eax,10h"
"	      0055228e    movsx eax,ax"
"	      00552291    cdq"
"	      00552292    xor eax,edx"
"	      00552294    sub eax,edx"
"	      00552296    mov [ebp-0Ch],ax"
"	      0055229a    jmp near ptr 0055229Fh"
"	      0055229f    mov eax,[ebp-0Ch]"
"	      005522a2    and eax,0FFFFh"
"	      005522a7    cmp eax,1Eh"
"	      005522aa    jle near ptr 005522B5h"
"	      005522b0    jmp near ptr 005522CCh"
"	      005522b5    jmp near ptr 005522E8h"
"	      005522ba    jmp near ptr 005522CCh"
"	      005522bf    test dword ptr [ebp-10h],0FFFFh"
"	      005522c6    jne near ptr 005522E8h"
"	      005522cc    push 8C085h"
"	      005522d1    push 5BBE24h"
"	      005522d6    push 405h"
"	      005522db    push 5BBA14h"
"	      005522e0    call 00554F30h"
"	      005522e5    add esp,10h"
);
// LINE 1030:
	asm( 
"	      005522e8    mov eax,[ebp+8]"
"	      005522eb    push eax"
"	      005522ec    mov ecx,[ebp-4]"
"	      005522ef    call 0054CECAh"
"	      005522f4    mov [ebp-8],ax"
);
// LINE 1031:
	asm( 
"	      005522f8    test dword ptr [ebp-8],0FFFFh"
"	      005522ff    jne near ptr 00552321h"
"	      00552305    push 8C085h"
"	      0055230a    push 5BBDE4h"
"	      0055230f    push 407h"
"	      00552314    push 5BBA14h"
"	      00552319    call 00554F30h"
"	      0055231e    add esp,10h"
);
// LINE 1032:
	asm( 
"	      00552321    mov eax,[ebp-4]"
"	      00552324    movsx eax,word ptr [eax+0E2h]"
"	      0055232b    test eax,eax"
"	      0055232d    je near ptr 0055234Fh"
"	      00552333    push 8C085h"
"	      00552338    push 5BBDC8h"
"	      0055233d    push 408h"
"	      00552342    push 5BBA14h"
"	      00552347    call 00554F30h"
"	      0055234c    add esp,10h"
);
// LINE 1033:
	asm( 
"	      0055234f    mov eax,[ebp-4]"
"	      00552352    jmp near ptr 00552363h"
);
// LINE 1035:
// Block end:
	asm( 
"	      00552357    jmp near ptr 00552363h"
);
// LINE 1036:
	asm( 
"	      0055235c    xor eax,eax"
"	      0055235e    jmp near ptr 00552363h"
);
// LINE 1038:
	asm( 
"	      00552363    pop edi"
"	      00552364    pop esi"
"	      00552365    pop ebx"
"	      00552366    leave"
"	      00552367    ret 4"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552370
enum TreeSim::ReturnCode cYObject::sIdle(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1242:
	asm( 
"	      00552370    push ebp"
"	      00552371    mov ebp,esp"
"	      00552373    push ebx"
"	      00552374    push esi"
"	      00552375    push edi"
"	      00552376    mov eax,[ebp+10h]"
"	      00552379    push eax"
"	      0055237a    mov eax,[ebp+0Ch]"
"	      0055237d    push eax"
"	      0055237e    mov ecx,[ebp+8]"
"	      00552381    call 005575DCh"
"	      00552386    jmp near ptr 0055238Bh"
"	      0055238b    pop edi"
"	      0055238c    pop esi"
"	      0055238d    pop ebx"
"	      0055238e    leave"
"	      0055238f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552390
enum TreeSim::ReturnCode cYObject::sSetAnim(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1243:
	asm( 
"	      00552390    push ebp"
"	      00552391    mov ebp,esp"
"	      00552393    push ebx"
"	      00552394    push esi"
"	      00552395    push edi"
"	      00552396    mov eax,[ebp+10h]"
"	      00552399    push eax"
"	      0055239a    mov eax,[ebp+0Ch]"
"	      0055239d    push eax"
"	      0055239e    mov ecx,[ebp+8]"
"	      005523a1    call 005576F6h"
"	      005523a6    jmp near ptr 005523ABh"
"	      005523ab    pop edi"
"	      005523ac    pop esi"
"	      005523ad    pop ebx"
"	      005523ae    leave"
"	      005523af    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523b0
enum TreeSim::ReturnCode cYObject::sAttr(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1244:
	asm( 
"	      005523b0    push ebp"
"	      005523b1    mov ebp,esp"
"	      005523b3    push ebx"
"	      005523b4    push esi"
"	      005523b5    push edi"
"	      005523b6    mov eax,[ebp+10h]"
"	      005523b9    push eax"
"	      005523ba    mov eax,[ebp+0Ch]"
"	      005523bd    push eax"
"	      005523be    mov ecx,[ebp+8]"
"	      005523c1    call 005577CDh"
"	      005523c6    jmp near ptr 005523CBh"
"	      005523cb    pop edi"
"	      005523cc    pop esi"
"	      005523cd    pop ebx"
"	      005523ce    leave"
"	      005523cf    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523d0
enum TreeSim::ReturnCode cYObject::sWalk(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1246:
	asm( 
"	      005523d0    push ebp"
"	      005523d1    mov ebp,esp"
"	      005523d3    push ebx"
"	      005523d4    push esi"
"	      005523d5    push edi"
"	      005523d6    mov eax,[ebp+10h]"
"	      005523d9    push eax"
"	      005523da    mov eax,[ebp+0Ch]"
"	      005523dd    push eax"
"	      005523de    mov ecx,[ebp+8]"
"	      005523e1    call 00557807h"
"	      005523e6    jmp near ptr 005523EBh"
"	      005523eb    pop edi"
"	      005523ec    pop esi"
"	      005523ed    pop ebx"
"	      005523ee    leave"
"	      005523ef    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523f0
enum TreeSim::ReturnCode cYObject::sSetBody(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1247:
	asm( 
"	      005523f0    push ebp"
"	      005523f1    mov ebp,esp"
"	      005523f3    push ebx"
"	      005523f4    push esi"
"	      005523f5    push edi"
"	      005523f6    mov eax,[ebp+10h]"
"	      005523f9    push eax"
"	      005523fa    mov eax,[ebp+0Ch]"
"	      005523fd    push eax"
"	      005523fe    mov ecx,[ebp+8]"
"	      00552401    call 00557948h"
"	      00552406    jmp near ptr 0055240Bh"
"	      0055240b    pop edi"
"	      0055240c    pop esi"
"	      0055240d    pop ebx"
"	      0055240e    leave"
"	      0055240f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552410
enum TreeSim::ReturnCode cYObject::sRandom(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1248:
	asm( 
"	      00552410    push ebp"
"	      00552411    mov ebp,esp"
"	      00552413    push ebx"
"	      00552414    push esi"
"	      00552415    push edi"
"	      00552416    mov eax,[ebp+10h]"
"	      00552419    push eax"
"	      0055241a    mov eax,[ebp+0Ch]"
"	      0055241d    push eax"
"	      0055241e    mov ecx,[ebp+8]"
"	      00552421    call 00557B25h"
"	      00552426    jmp near ptr 0055242Bh"
"	      0055242b    pop edi"
"	      0055242c    pop esi"
"	      0055242d    pop ebx"
"	      0055242e    leave"
"	      0055242f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552430
enum TreeSim::ReturnCode cYObject::sWalkToAndGrabOntoStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1253:
	asm( 
"	      00552430    push ebp"
"	      00552431    mov ebp,esp"
"	      00552433    push ebx"
"	      00552434    push esi"
"	      00552435    push edi"
"	      00552436    mov eax,[ebp+10h]"
"	      00552439    push eax"
"	      0055243a    mov eax,[ebp+0Ch]"
"	      0055243d    push eax"
"	      0055243e    mov ecx,[ebp+8]"
"	      00552441    call 00557C20h"
"	      00552446    jmp near ptr 0055244Bh"
"	      0055244b    pop edi"
"	      0055244c    pop esi"
"	      0055244d    pop ebx"
"	      0055244e    leave"
"	      0055244f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552450
enum TreeSim::ReturnCode cYObject::sUpdateMyMission(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1254:
	asm( 
"	      00552450    push ebp"
"	      00552451    mov ebp,esp"
"	      00552453    push ebx"
"	      00552454    push esi"
"	      00552455    push edi"
"	      00552456    mov eax,[ebp+10h]"
"	      00552459    push eax"
"	      0055245a    mov eax,[ebp+0Ch]"
"	      0055245d    push eax"
"	      0055245e    mov ecx,[ebp+8]"
"	      00552461    call 00557F40h"
"	      00552466    jmp near ptr 0055246Bh"
"	      0055246b    pop edi"
"	      0055246c    pop esi"
"	      0055246d    pop ebx"
"	      0055246e    leave"
"	      0055246f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552470
enum TreeSim::ReturnCode cYObject::sCheckForTrue(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1255:
	asm( 
"	      00552470    push ebp"
"	      00552471    mov ebp,esp"
"	      00552473    push ebx"
"	      00552474    push esi"
"	      00552475    push edi"
"	      00552476    mov eax,[ebp+10h]"
"	      00552479    push eax"
"	      0055247a    mov eax,[ebp+0Ch]"
"	      0055247d    push eax"
"	      0055247e    mov ecx,[ebp+8]"
"	      00552481    call 00557F90h"
"	      00552486    jmp near ptr 0055248Bh"
"	      0055248b    pop edi"
"	      0055248c    pop esi"
"	      0055248d    pop ebx"
"	      0055248e    leave"
"	      0055248f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552490
enum TreeSim::ReturnCode cYObject::sCompareMyLocWith(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1256:
	asm( 
"	      00552490    push ebp"
"	      00552491    mov ebp,esp"
"	      00552493    push ebx"
"	      00552494    push esi"
"	      00552495    push edi"
"	      00552496    mov eax,[ebp+10h]"
"	      00552499    push eax"
"	      0055249a    mov eax,[ebp+0Ch]"
"	      0055249d    push eax"
"	      0055249e    mov ecx,[ebp+8]"
"	      005524a1    call 0055826Fh"
"	      005524a6    jmp near ptr 005524ABh"
"	      005524ab    pop edi"
"	      005524ac    pop esi"
"	      005524ad    pop ebx"
"	      005524ae    leave"
"	      005524af    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524b0
enum TreeSim::ReturnCode cYObject::sSelfDecommission(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1257:
	asm( 
"	      005524b0    push ebp"
"	      005524b1    mov ebp,esp"
"	      005524b3    push ebx"
"	      005524b4    push esi"
"	      005524b5    push edi"
"	      005524b6    mov eax,[ebp+10h]"
"	      005524b9    push eax"
"	      005524ba    mov eax,[ebp+0Ch]"
"	      005524bd    push eax"
"	      005524be    mov ecx,[ebp+8]"
"	      005524c1    call 005587C8h"
"	      005524c6    jmp near ptr 005524CBh"
"	      005524cb    pop edi"
"	      005524cc    pop esi"
"	      005524cd    pop ebx"
"	      005524ce    leave"
"	      005524cf    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524d0
enum TreeSim::ReturnCode cYObject::sGetOffMasterObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1258:
	asm( 
"	      005524d0    push ebp"
"	      005524d1    mov ebp,esp"
"	      005524d3    push ebx"
"	      005524d4    push esi"
"	      005524d5    push edi"
"	      005524d6    mov eax,[ebp+10h]"
"	      005524d9    push eax"
"	      005524da    mov eax,[ebp+0Ch]"
"	      005524dd    push eax"
"	      005524de    mov ecx,[ebp+8]"
"	      005524e1    call 005587F9h"
"	      005524e6    jmp near ptr 005524EBh"
"	      005524eb    pop edi"
"	      005524ec    pop esi"
"	      005524ed    pop ebx"
"	      005524ee    leave"
"	      005524ef    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524f0
enum TreeSim::ReturnCode cYObject::sTurnTowardsStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1259:
	asm( 
"	      005524f0    push ebp"
"	      005524f1    mov ebp,esp"
"	      005524f3    push ebx"
"	      005524f4    push esi"
"	      005524f5    push edi"
"	      005524f6    mov eax,[ebp+10h]"
"	      005524f9    push eax"
"	      005524fa    mov eax,[ebp+0Ch]"
"	      005524fd    push eax"
"	      005524fe    mov ecx,[ebp+8]"
"	      00552501    call 005588F3h"
"	      00552506    jmp near ptr 0055250Bh"
"	      0055250b    pop edi"
"	      0055250c    pop esi"
"	      0055250d    pop ebx"
"	      0055250e    leave"
"	      0055250f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552510
enum TreeSim::ReturnCode cYObject::sIsThisLocType(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1260:
	asm( 
"	      00552510    push ebp"
"	      00552511    mov ebp,esp"
"	      00552513    push ebx"
"	      00552514    push esi"
"	      00552515    push edi"
"	      00552516    mov eax,[ebp+10h]"
"	      00552519    push eax"
"	      0055251a    mov eax,[ebp+0Ch]"
"	      0055251d    push eax"
"	      0055251e    mov ecx,[ebp+8]"
"	      00552521    call 0055898Ah"
"	      00552526    jmp near ptr 0055252Bh"
"	      0055252b    pop edi"
"	      0055252c    pop esi"
"	      0055252d    pop ebx"
"	      0055252e    leave"
"	      0055252f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552530
enum TreeSim::ReturnCode cYObject::sIsThisLocTypeNeutral(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1261:
	asm( 
"	      00552530    push ebp"
"	      00552531    mov ebp,esp"
"	      00552533    push ebx"
"	      00552534    push esi"
"	      00552535    push edi"
"	      00552536    mov eax,[ebp+10h]"
"	      00552539    push eax"
"	      0055253a    mov eax,[ebp+0Ch]"
"	      0055253d    push eax"
"	      0055253e    mov ecx,[ebp+8]"
"	      00552541    call 00558A02h"
"	      00552546    jmp near ptr 0055254Bh"
"	      0055254b    pop edi"
"	      0055254c    pop esi"
"	      0055254d    pop ebx"
"	      0055254e    leave"
"	      0055254f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552550
enum TreeSim::ReturnCode cYObject::sCanJumpOffHere(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1262:
	asm( 
"	      00552550    push ebp"
"	      00552551    mov ebp,esp"
"	      00552553    push ebx"
"	      00552554    push esi"
"	      00552555    push edi"
"	      00552556    mov eax,[ebp+10h]"
"	      00552559    push eax"
"	      0055255a    mov eax,[ebp+0Ch]"
"	      0055255d    push eax"
"	      0055255e    mov ecx,[ebp+8]"
"	      00552561    call 00558ABBh"
"	      00552566    jmp near ptr 0055256Bh"
"	      0055256b    pop edi"
"	      0055256c    pop esi"
"	      0055256d    pop ebx"
"	      0055256e    leave"
"	      0055256f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552570
enum TreeSim::ReturnCode cYObject::sCheckForSpotlightInMyCell(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1263:
	asm( 
"	      00552570    push ebp"
"	      00552571    mov ebp,esp"
"	      00552573    push ebx"
"	      00552574    push esi"
"	      00552575    push edi"
"	      00552576    mov eax,[ebp+10h]"
"	      00552579    push eax"
"	      0055257a    mov eax,[ebp+0Ch]"
"	      0055257d    push eax"
"	      0055257e    mov ecx,[ebp+8]"
"	      00552581    call 00558B03h"
"	      00552586    jmp near ptr 0055258Bh"
"	      0055258b    pop edi"
"	      0055258c    pop esi"
"	      0055258d    pop ebx"
"	      0055258e    leave"
"	      0055258f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552590
enum TreeSim::ReturnCode cYObject::sIncrementRiotVal(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1264:
	asm( 
"	      00552590    push ebp"
"	      00552591    mov ebp,esp"
"	      00552593    push ebx"
"	      00552594    push esi"
"	      00552595    push edi"
"	      00552596    mov eax,[ebp+10h]"
"	      00552599    push eax"
"	      0055259a    mov eax,[ebp+0Ch]"
"	      0055259d    push eax"
"	      0055259e    mov ecx,[ebp+8]"
"	      005525a1    call 00558C9Ch"
"	      005525a6    jmp near ptr 005525ABh"
"	      005525ab    pop edi"
"	      005525ac    pop esi"
"	      005525ad    pop ebx"
"	      005525ae    leave"
"	      005525af    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525b0
enum TreeSim::ReturnCode cYObject::sGetSurroundingRiotVal(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1265:
	asm( 
"	      005525b0    push ebp"
"	      005525b1    mov ebp,esp"
"	      005525b3    push ebx"
"	      005525b4    push esi"
"	      005525b5    push edi"
"	      005525b6    mov eax,[ebp+10h]"
"	      005525b9    push eax"
"	      005525ba    mov eax,[ebp+0Ch]"
"	      005525bd    push eax"
"	      005525be    mov ecx,[ebp+8]"
"	      005525c1    call 00558D4Dh"
"	      005525c6    jmp near ptr 005525CBh"
"	      005525cb    pop edi"
"	      005525cc    pop esi"
"	      005525cd    pop ebx"
"	      005525ce    leave"
"	      005525cf    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525d0
enum TreeSim::ReturnCode cYObject::sIsThisScurkID(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1266:
	asm( 
"	      005525d0    push ebp"
"	      005525d1    mov ebp,esp"
"	      005525d3    push ebx"
"	      005525d4    push esi"
"	      005525d5    push edi"
"	      005525d6    mov eax,[ebp+10h]"
"	      005525d9    push eax"
"	      005525da    mov eax,[ebp+0Ch]"
"	      005525dd    push eax"
"	      005525de    mov ecx,[ebp+8]"
"	      005525e1    call 00558F7Ch"
"	      005525e6    jmp near ptr 005525EBh"
"	      005525eb    pop edi"
"	      005525ec    pop esi"
"	      005525ed    pop ebx"
"	      005525ee    leave"
"	      005525ef    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525f0
enum TreeSim::ReturnCode cYObject::sGosubToInitbhav(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1267:
	asm( 
"	      005525f0    push ebp"
"	      005525f1    mov ebp,esp"
"	      005525f3    push ebx"
"	      005525f4    push esi"
"	      005525f5    push edi"
"	      005525f6    mov eax,[ebp+10h]"
"	      005525f9    push eax"
"	      005525fa    mov eax,[ebp+0Ch]"
"	      005525fd    push eax"
"	      005525fe    mov ecx,[ebp+8]"
"	      00552601    call 005590A2h"
"	      00552606    jmp near ptr 0055260Bh"
"	      0055260b    pop edi"
"	      0055260c    pop esi"
"	      0055260d    pop ebx"
"	      0055260e    leave"
"	      0055260f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552610
enum TreeSim::ReturnCode cYObject::sAdjustRadiusForRiotVal(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1268:
	asm( 
"	      00552610    push ebp"
"	      00552611    mov ebp,esp"
"	      00552613    push ebx"
"	      00552614    push esi"
"	      00552615    push edi"
"	      00552616    mov eax,[ebp+10h]"
"	      00552619    push eax"
"	      0055261a    mov eax,[ebp+0Ch]"
"	      0055261d    push eax"
"	      0055261e    mov ecx,[ebp+8]"
"	      00552621    call 0055919Ah"
"	      00552626    jmp near ptr 0055262Bh"
"	      0055262b    pop edi"
"	      0055262c    pop esi"
"	      0055262d    pop ebx"
"	      0055262e    leave"
"	      0055262f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552630
enum TreeSim::ReturnCode cYObject::sJoinRiot(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1269:
	asm( 
"	      00552630    push ebp"
"	      00552631    mov ebp,esp"
"	      00552633    push ebx"
"	      00552634    push esi"
"	      00552635    push edi"
"	      00552636    mov eax,[ebp+10h]"
"	      00552639    push eax"
"	      0055263a    mov eax,[ebp+0Ch]"
"	      0055263d    push eax"
"	      0055263e    mov ecx,[ebp+8]"
"	      00552641    call 00559202h"
"	      00552646    jmp near ptr 0055264Bh"
"	      0055264b    pop edi"
"	      0055264c    pop esi"
"	      0055264d    pop ebx"
"	      0055264e    leave"
"	      0055264f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552650
enum TreeSim::ReturnCode cYObject::sSetDirection(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1270:
	asm( 
"	      00552650    push ebp"
"	      00552651    mov ebp,esp"
"	      00552653    push ebx"
"	      00552654    push esi"
"	      00552655    push edi"
"	      00552656    mov eax,[ebp+10h]"
"	      00552659    push eax"
"	      0055265a    mov eax,[ebp+0Ch]"
"	      0055265d    push eax"
"	      0055265e    mov ecx,[ebp+8]"
"	      00552661    call 00559787h"
"	      00552666    jmp near ptr 0055266Bh"
"	      0055266b    pop edi"
"	      0055266c    pop esi"
"	      0055266d    pop ebx"
"	      0055266e    leave"
"	      0055266f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552670
enum TreeSim::ReturnCode cYObject::sThrowProjectile(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1271:
	asm( 
"	      00552670    push ebp"
"	      00552671    mov ebp,esp"
"	      00552673    push ebx"
"	      00552674    push esi"
"	      00552675    push edi"
"	      00552676    mov eax,[ebp+10h]"
"	      00552679    push eax"
"	      0055267a    mov eax,[ebp+0Ch]"
"	      0055267d    push eax"
"	      0055267e    mov ecx,[ebp+8]"
"	      00552681    call 005598BAh"
"	      00552686    jmp near ptr 0055268Bh"
"	      0055268b    pop edi"
"	      0055268c    pop esi"
"	      0055268d    pop ebx"
"	      0055268e    leave"
"	      0055268f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552690
enum TreeSim::ReturnCode cYObject::sTurnFromStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1272:
	asm( 
"	      00552690    push ebp"
"	      00552691    mov ebp,esp"
"	      00552693    push ebx"
"	      00552694    push esi"
"	      00552695    push edi"
"	      00552696    mov eax,[ebp+10h]"
"	      00552699    push eax"
"	      0055269a    mov eax,[ebp+0Ch]"
"	      0055269d    push eax"
"	      0055269e    mov ecx,[ebp+8]"
"	      005526a1    call 00559B31h"
"	      005526a6    jmp near ptr 005526ABh"
"	      005526ab    pop edi"
"	      005526ac    pop esi"
"	      005526ad    pop ebx"
"	      005526ae    leave"
"	      005526af    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526b0
enum TreeSim::ReturnCode cYObject::sTurnFromLastHitter(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1273:
	asm( 
"	      005526b0    push ebp"
"	      005526b1    mov ebp,esp"
"	      005526b3    push ebx"
"	      005526b4    push esi"
"	      005526b5    push edi"
"	      005526b6    mov eax,[ebp+10h]"
"	      005526b9    push eax"
"	      005526ba    mov eax,[ebp+0Ch]"
"	      005526bd    push eax"
"	      005526be    mov ecx,[ebp+8]"
"	      005526c1    call 00559BC8h"
"	      005526c6    jmp near ptr 005526CBh"
"	      005526cb    pop edi"
"	      005526cc    pop esi"
"	      005526cd    pop ebx"
"	      005526ce    leave"
"	      005526cf    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526d0
enum TreeSim::ReturnCode cYObject::sTurnTowardsLastHitter(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1274:
	asm( 
"	      005526d0    push ebp"
"	      005526d1    mov ebp,esp"
"	      005526d3    push ebx"
"	      005526d4    push esi"
"	      005526d5    push edi"
"	      005526d6    mov eax,[ebp+10h]"
"	      005526d9    push eax"
"	      005526da    mov eax,[ebp+0Ch]"
"	      005526dd    push eax"
"	      005526de    mov ecx,[ebp+8]"
"	      005526e1    call 00559C65h"
"	      005526e6    jmp near ptr 005526EBh"
"	      005526eb    pop edi"
"	      005526ec    pop esi"
"	      005526ed    pop ebx"
"	      005526ee    leave"
"	      005526ef    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526f0
enum TreeSim::ReturnCode cYObject::sGetOutOfRoadEtc(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1275:
	asm( 
"	      005526f0    push ebp"
"	      005526f1    mov ebp,esp"
"	      005526f3    push ebx"
"	      005526f4    push esi"
"	      005526f5    push edi"
"	      005526f6    mov eax,[ebp+10h]"
"	      005526f9    push eax"
"	      005526fa    mov eax,[ebp+0Ch]"
"	      005526fd    push eax"
"	      005526fe    mov ecx,[ebp+8]"
"	      00552701    call 00559D02h"
"	      00552706    jmp near ptr 0055270Bh"
"	      0055270b    pop edi"
"	      0055270c    pop esi"
"	      0055270d    pop ebx"
"	      0055270e    leave"
"	      0055270f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552710
enum TreeSim::ReturnCode cYObject::sGenerateMedevacAndSetSelfAsVictim(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1276:
	asm( 
"	      00552710    push ebp"
"	      00552711    mov ebp,esp"
"	      00552713    push ebx"
"	      00552714    push esi"
"	      00552715    push edi"
"	      00552716    mov eax,[ebp+10h]"
"	      00552719    push eax"
"	      0055271a    mov eax,[ebp+0Ch]"
"	      0055271d    push eax"
"	      0055271e    mov ecx,[ebp+8]"
"	      00552721    call 00559F1Eh"
"	      00552726    jmp near ptr 0055272Bh"
"	      0055272b    pop edi"
"	      0055272c    pop esi"
"	      0055272d    pop ebx"
"	      0055272e    leave"
"	      0055272f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552730
enum TreeSim::ReturnCode cYObject::sTurnToNearbyFire(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1277:
	asm( 
"	      00552730    push ebp"
"	      00552731    mov ebp,esp"
"	      00552733    push ebx"
"	      00552734    push esi"
"	      00552735    push edi"
"	      00552736    mov eax,[ebp+10h]"
"	      00552739    push eax"
"	      0055273a    mov eax,[ebp+0Ch]"
"	      0055273d    push eax"
"	      0055273e    mov ecx,[ebp+8]"
"	      00552741    call 00559F74h"
"	      00552746    jmp near ptr 0055274Bh"
"	      0055274b    pop edi"
"	      0055274c    pop esi"
"	      0055274d    pop ebx"
"	      0055274e    leave"
"	      0055274f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552750
enum TreeSim::ReturnCode cYObject::sDie(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1278:
	asm( 
"	      00552750    push ebp"
"	      00552751    mov ebp,esp"
"	      00552753    push ebx"
"	      00552754    push esi"
"	      00552755    push edi"
"	      00552756    mov eax,[ebp+10h]"
"	      00552759    push eax"
"	      0055275a    mov eax,[ebp+0Ch]"
"	      0055275d    push eax"
"	      0055275e    mov ecx,[ebp+8]"
"	      00552761    call 0055A15Bh"
"	      00552766    jmp near ptr 0055276Bh"
"	      0055276b    pop edi"
"	      0055276c    pop esi"
"	      0055276d    pop ebx"
"	      0055276e    leave"
"	      0055276f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552770
enum TreeSim::ReturnCode cYObject::sWalkToStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1279:
	asm( 
"	      00552770    push ebp"
"	      00552771    mov ebp,esp"
"	      00552773    push ebx"
"	      00552774    push esi"
"	      00552775    push edi"
"	      00552776    mov eax,[ebp+10h]"
"	      00552779    push eax"
"	      0055277a    mov eax,[ebp+0Ch]"
"	      0055277d    push eax"
"	      0055277e    mov ecx,[ebp+8]"
"	      00552781    call 0055A1B1h"
"	      00552786    jmp near ptr 0055278Bh"
"	      0055278b    pop edi"
"	      0055278c    pop esi"
"	      0055278d    pop ebx"
"	      0055278e    leave"
"	      0055278f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552790
enum TreeSim::ReturnCode cYObject::sPutObjIntoTreeNum(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1280:
	asm( 
"	      00552790    push ebp"
"	      00552791    mov ebp,esp"
"	      00552793    push ebx"
"	      00552794    push esi"
"	      00552795    push edi"
"	      00552796    mov eax,[ebp+10h]"
"	      00552799    push eax"
"	      0055279a    mov eax,[ebp+0Ch]"
"	      0055279d    push eax"
"	      0055279e    mov ecx,[ebp+8]"
"	      005527a1    call 0055A1D9h"
"	      005527a6    jmp near ptr 005527ABh"
"	      005527ab    pop edi"
"	      005527ac    pop esi"
"	      005527ad    pop ebx"
"	      005527ae    leave"
"	      005527af    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527b0
enum TreeSim::ReturnCode cYObject::sVisitOz(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1281:
	asm( 
"	      005527b0    push ebp"
"	      005527b1    mov ebp,esp"
"	      005527b3    push ebx"
"	      005527b4    push esi"
"	      005527b5    push edi"
"	      005527b6    mov eax,[ebp+10h]"
"	      005527b9    push eax"
"	      005527ba    mov eax,[ebp+0Ch]"
"	      005527bd    push eax"
"	      005527be    mov ecx,[ebp+8]"
"	      005527c1    call 0055A2DAh"
"	      005527c6    jmp near ptr 005527CBh"
"	      005527cb    pop edi"
"	      005527cc    pop esi"
"	      005527cd    pop ebx"
"	      005527ce    leave"
"	      005527cf    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527d0
enum TreeSim::ReturnCode cYObject::sMakeMyMedevacVictimVisible(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1283:
	asm( 
"	      005527d0    push ebp"
"	      005527d1    mov ebp,esp"
"	      005527d3    push ebx"
"	      005527d4    push esi"
"	      005527d5    push edi"
"	      005527d6    mov eax,[ebp+10h]"
"	      005527d9    push eax"
"	      005527da    mov eax,[ebp+0Ch]"
"	      005527dd    push eax"
"	      005527de    mov ecx,[ebp+8]"
"	      005527e1    call 0055A57Fh"
"	      005527e6    jmp near ptr 005527EBh"
"	      005527eb    pop edi"
"	      005527ec    pop esi"
"	      005527ed    pop ebx"
"	      005527ee    leave"
"	      005527ef    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527f0
enum TreeSim::ReturnCode cYObject::sMakeMyMedevacVictimInvisible(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1284:
	asm( 
"	      005527f0    push ebp"
"	      005527f1    mov ebp,esp"
"	      005527f3    push ebx"
"	      005527f4    push esi"
"	      005527f5    push edi"
"	      005527f6    mov eax,[ebp+10h]"
"	      005527f9    push eax"
"	      005527fa    mov eax,[ebp+0Ch]"
"	      005527fd    push eax"
"	      005527fe    mov ecx,[ebp+8]"
"	      00552801    call 0055A64Ah"
"	      00552806    jmp near ptr 0055280Bh"
"	      0055280b    pop edi"
"	      0055280c    pop esi"
"	      0055280d    pop ebx"
"	      0055280e    leave"
"	      0055280f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552810
enum TreeSim::ReturnCode cYObject::sMakeMeMasterOfStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1285:
	asm( 
"	      00552810    push ebp"
"	      00552811    mov ebp,esp"
"	      00552813    push ebx"
"	      00552814    push esi"
"	      00552815    push edi"
"	      00552816    mov eax,[ebp+10h]"
"	      00552819    push eax"
"	      0055281a    mov eax,[ebp+0Ch]"
"	      0055281d    push eax"
"	      0055281e    mov ecx,[ebp+8]"
"	      00552821    call 0055A68Fh"
"	      00552826    jmp near ptr 0055282Bh"
"	      0055282b    pop edi"
"	      0055282c    pop esi"
"	      0055282d    pop ebx"
"	      0055282e    leave"
"	      0055282f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552830
enum TreeSim::ReturnCode cYObject::sMakeMyStackObjectVisitOz(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1286:
	asm( 
"	      00552830    push ebp"
"	      00552831    mov ebp,esp"
"	      00552833    push ebx"
"	      00552834    push esi"
"	      00552835    push edi"
"	      00552836    mov eax,[ebp+10h]"
"	      00552839    push eax"
"	      0055283a    mov eax,[ebp+0Ch]"
"	      0055283d    push eax"
"	      0055283e    mov ecx,[ebp+8]"
"	      00552841    call 0055A7CAh"
"	      00552846    jmp near ptr 0055284Bh"
"	      0055284b    pop edi"
"	      0055284c    pop esi"
"	      0055284d    pop ebx"
"	      0055284e    leave"
"	      0055284f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552850
enum TreeSim::ReturnCode cYObject::sPutTotedMedVicOnStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1287:
	asm( 
"	      00552850    push ebp"
"	      00552851    mov ebp,esp"
"	      00552853    push ebx"
"	      00552854    push esi"
"	      00552855    push edi"
"	      00552856    mov eax,[ebp+10h]"
"	      00552859    push eax"
"	      0055285a    mov eax,[ebp+0Ch]"
"	      0055285d    push eax"
"	      0055285e    mov ecx,[ebp+8]"
"	      00552861    call 0055AAD0h"
"	      00552866    jmp near ptr 0055286Bh"
"	      0055286b    pop edi"
"	      0055286c    pop esi"
"	      0055286d    pop ebx"
"	      0055286e    leave"
"	      0055286f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552870
enum TreeSim::ReturnCode cYObject::sTakeAnyMedVicOffStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1288:
	asm( 
"	      00552870    push ebp"
"	      00552871    mov ebp,esp"
"	      00552873    push ebx"
"	      00552874    push esi"
"	      00552875    push edi"
"	      00552876    mov eax,[ebp+10h]"
"	      00552879    push eax"
"	      0055287a    mov eax,[ebp+0Ch]"
"	      0055287d    push eax"
"	      0055287e    mov ecx,[ebp+8]"
"	      00552881    call 0055ACF9h"
"	      00552886    jmp near ptr 0055288Bh"
"	      0055288b    pop edi"
"	      0055288c    pop esi"
"	      0055288d    pop ebx"
"	      0055288e    leave"
"	      0055288f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552890
enum TreeSim::ReturnCode cYObject::sGetOnStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1289:
	asm( 
"	      00552890    push ebp"
"	      00552891    mov ebp,esp"
"	      00552893    push ebx"
"	      00552894    push esi"
"	      00552895    push edi"
"	      00552896    mov eax,[ebp+10h]"
"	      00552899    push eax"
"	      0055289a    mov eax,[ebp+0Ch]"
"	      0055289d    push eax"
"	      0055289e    mov ecx,[ebp+8]"
"	      005528a1    call 0055ADF0h"
"	      005528a6    jmp near ptr 005528ABh"
"	      005528ab    pop edi"
"	      005528ac    pop esi"
"	      005528ad    pop ebx"
"	      005528ae    leave"
"	      005528af    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528b0
enum TreeSim::ReturnCode cYObject::sUpdateStackVictimToted(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1290:
	asm( 
"	      005528b0    push ebp"
"	      005528b1    mov ebp,esp"
"	      005528b3    push ebx"
"	      005528b4    push esi"
"	      005528b5    push edi"
"	      005528b6    mov eax,[ebp+10h]"
"	      005528b9    push eax"
"	      005528ba    mov eax,[ebp+0Ch]"
"	      005528bd    push eax"
"	      005528be    mov ecx,[ebp+8]"
"	      005528c1    call 0055AF39h"
"	      005528c6    jmp near ptr 005528CBh"
"	      005528cb    pop edi"
"	      005528cc    pop esi"
"	      005528cd    pop ebx"
"	      005528ce    leave"
"	      005528cf    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528d0
enum TreeSim::ReturnCode cYObject::sGetNumSpacesOnStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1291:
	asm( 
"	      005528d0    push ebp"
"	      005528d1    mov ebp,esp"
"	      005528d3    push ebx"
"	      005528d4    push esi"
"	      005528d5    push edi"
"	      005528d6    mov eax,[ebp+10h]"
"	      005528d9    push eax"
"	      005528da    mov eax,[ebp+0Ch]"
"	      005528dd    push eax"
"	      005528de    mov ecx,[ebp+8]"
"	      005528e1    call 0055B003h"
"	      005528e6    jmp near ptr 005528EBh"
"	      005528eb    pop edi"
"	      005528ec    pop esi"
"	      005528ed    pop ebx"
"	      005528ee    leave"
"	      005528ef    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528f0
enum TreeSim::ReturnCode cYObject::sDropToted(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1292:
	asm( 
"	      005528f0    push ebp"
"	      005528f1    mov ebp,esp"
"	      005528f3    push ebx"
"	      005528f4    push esi"
"	      005528f5    push edi"
"	      005528f6    mov eax,[ebp+10h]"
"	      005528f9    push eax"
"	      005528fa    mov eax,[ebp+0Ch]"
"	      005528fd    push eax"
"	      005528fe    mov ecx,[ebp+8]"
"	      00552901    call 0055B1A1h"
"	      00552906    jmp near ptr 0055290Bh"
"	      0055290b    pop edi"
"	      0055290c    pop esi"
"	      0055290d    pop ebx"
"	      0055290e    leave"
"	      0055290f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552910
enum TreeSim::ReturnCode cYObject::sUpdateStackVictimPickedUp(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1293:
	asm( 
"	      00552910    push ebp"
"	      00552911    mov ebp,esp"
"	      00552913    push ebx"
"	      00552914    push esi"
"	      00552915    push edi"
"	      00552916    mov eax,[ebp+10h]"
"	      00552919    push eax"
"	      0055291a    mov eax,[ebp+0Ch]"
"	      0055291d    push eax"
"	      0055291e    mov ecx,[ebp+8]"
"	      00552921    call 0055B1F7h"
"	      00552926    jmp near ptr 0055292Bh"
"	      0055292b    pop edi"
"	      0055292c    pop esi"
"	      0055292d    pop ebx"
"	      0055292e    leave"
"	      0055292f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552930
enum TreeSim::ReturnCode cYObject::sCloseToHeli(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1294:
	asm( 
"	      00552930    push ebp"
"	      00552931    mov ebp,esp"
"	      00552933    push ebx"
"	      00552934    push esi"
"	      00552935    push edi"
"	      00552936    mov eax,[ebp+10h]"
"	      00552939    push eax"
"	      0055293a    mov eax,[ebp+0Ch]"
"	      0055293d    push eax"
"	      0055293e    mov ecx,[ebp+8]"
"	      00552941    call 0055B2C1h"
"	      00552946    jmp near ptr 0055294Bh"
"	      0055294b    pop edi"
"	      0055294c    pop esi"
"	      0055294d    pop ebx"
"	      0055294e    leave"
"	      0055294f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552950
enum TreeSim::ReturnCode cYObject::sSetMyExpression(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1295:
	asm( 
"	      00552950    push ebp"
"	      00552951    mov ebp,esp"
"	      00552953    push ebx"
"	      00552954    push esi"
"	      00552955    push edi"
"	      00552956    mov eax,[ebp+10h]"
"	      00552959    push eax"
"	      0055295a    mov eax,[ebp+0Ch]"
"	      0055295d    push eax"
"	      0055295e    mov ecx,[ebp+8]"
"	      00552961    call 0055B3A5h"
"	      00552966    jmp near ptr 0055296Bh"
"	      0055296b    pop edi"
"	      0055296c    pop esi"
"	      0055296d    pop ebx"
"	      0055296e    leave"
"	      0055296f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552970
enum TreeSim::ReturnCode cYObject::sGetHeliSpeedPlusDamage(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1296:
	asm( 
"	      00552970    push ebp"
"	      00552971    mov ebp,esp"
"	      00552973    push ebx"
"	      00552974    push esi"
"	      00552975    push edi"
"	      00552976    mov eax,[ebp+10h]"
"	      00552979    push eax"
"	      0055297a    mov eax,[ebp+0Ch]"
"	      0055297d    push eax"
"	      0055297e    mov ecx,[ebp+8]"
"	      00552981    call 0055B417h"
"	      00552986    jmp near ptr 0055298Bh"
"	      0055298b    pop edi"
"	      0055298c    pop esi"
"	      0055298d    pop ebx"
"	      0055298e    leave"
"	      0055298f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552990
enum TreeSim::ReturnCode cYObject::sIsThisCellSafe(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1297:
	asm( 
"	      00552990    push ebp"
"	      00552991    mov ebp,esp"
"	      00552993    push ebx"
"	      00552994    push esi"
"	      00552995    push edi"
"	      00552996    mov eax,[ebp+10h]"
"	      00552999    push eax"
"	      0055299a    mov eax,[ebp+0Ch]"
"	      0055299d    push eax"
"	      0055299e    mov ecx,[ebp+8]"
"	      005529a1    call 0055B549h"
"	      005529a6    jmp near ptr 005529ABh"
"	      005529ab    pop edi"
"	      005529ac    pop esi"
"	      005529ad    pop ebx"
"	      005529ae    leave"
"	      005529af    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529b0
enum TreeSim::ReturnCode cYObject::sPlaySound(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1298:
	asm( 
"	      005529b0    push ebp"
"	      005529b1    mov ebp,esp"
"	      005529b3    push ebx"
"	      005529b4    push esi"
"	      005529b5    push edi"
"	      005529b6    mov eax,[ebp+10h]"
"	      005529b9    push eax"
"	      005529ba    mov eax,[ebp+0Ch]"
"	      005529bd    push eax"
"	      005529be    mov ecx,[ebp+8]"
"	      005529c1    call 0055B5CAh"
"	      005529c6    jmp near ptr 005529CBh"
"	      005529cb    pop edi"
"	      005529cc    pop esi"
"	      005529cd    pop ebx"
"	      005529ce    leave"
"	      005529cf    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529d0
enum TreeSim::ReturnCode cYObject::sGetOnHeliIfHarnessRaised(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1299:
	asm( 
"	      005529d0    push ebp"
"	      005529d1    mov ebp,esp"
"	      005529d3    push ebx"
"	      005529d4    push esi"
"	      005529d5    push edi"
"	      005529d6    mov eax,[ebp+10h]"
"	      005529d9    push eax"
"	      005529da    mov eax,[ebp+0Ch]"
"	      005529dd    push eax"
"	      005529de    mov ecx,[ebp+8]"
"	      005529e1    call 0055B631h"
"	      005529e6    jmp near ptr 005529EBh"
"	      005529eb    pop edi"
"	      005529ec    pop esi"
"	      005529ed    pop ebx"
"	      005529ee    leave"
"	      005529ef    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529f0
enum TreeSim::ReturnCode cYObject::sAmIOnHeli(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1300:
	asm( 
"	      005529f0    push ebp"
"	      005529f1    mov ebp,esp"
"	      005529f3    push ebx"
"	      005529f4    push esi"
"	      005529f5    push edi"
"	      005529f6    mov eax,[ebp+10h]"
"	      005529f9    push eax"
"	      005529fa    mov eax,[ebp+0Ch]"
"	      005529fd    push eax"
"	      005529fe    mov ecx,[ebp+8]"
"	      00552a01    call 0055B739h"
"	      00552a06    jmp near ptr 00552A0Bh"
"	      00552a0b    pop edi"
"	      00552a0c    pop esi"
"	      00552a0d    pop ebx"
"	      00552a0e    leave"
"	      00552a0f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a10
enum TreeSim::ReturnCode cYObject::sThrowFieryProjectile(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1301:
	asm( 
"	      00552a10    push ebp"
"	      00552a11    mov ebp,esp"
"	      00552a13    push ebx"
"	      00552a14    push esi"
"	      00552a15    push edi"
"	      00552a16    mov eax,[ebp+10h]"
"	      00552a19    push eax"
"	      00552a1a    mov eax,[ebp+0Ch]"
"	      00552a1d    push eax"
"	      00552a1e    mov ecx,[ebp+8]"
"	      00552a21    call 0055B789h"
"	      00552a26    jmp near ptr 00552A2Bh"
"	      00552a2b    pop edi"
"	      00552a2c    pop esi"
"	      00552a2d    pop ebx"
"	      00552a2e    leave"
"	      00552a2f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a30
enum TreeSim::ReturnCode cYObject::sTellStartingObjectTrueOrFalse(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1302:
	asm( 
"	      00552a30    push ebp"
"	      00552a31    mov ebp,esp"
"	      00552a33    push ebx"
"	      00552a34    push esi"
"	      00552a35    push edi"
"	      00552a36    mov eax,[ebp+10h]"
"	      00552a39    push eax"
"	      00552a3a    mov eax,[ebp+0Ch]"
"	      00552a3d    push eax"
"	      00552a3e    mov ecx,[ebp+8]"
"	      00552a41    call 0055B7B1h"
"	      00552a46    jmp near ptr 00552A4Bh"
"	      00552a4b    pop edi"
"	      00552a4c    pop esi"
"	      00552a4d    pop ebx"
"	      00552a4e    leave"
"	      00552a4f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a50
enum TreeSim::ReturnCode cYObject::sPutMyCarInStack(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1303:
	asm( 
"	      00552a50    push ebp"
"	      00552a51    mov ebp,esp"
"	      00552a53    push ebx"
"	      00552a54    push esi"
"	      00552a55    push edi"
"	      00552a56    mov eax,[ebp+10h]"
"	      00552a59    push eax"
"	      00552a5a    mov eax,[ebp+0Ch]"
"	      00552a5d    push eax"
"	      00552a5e    mov ecx,[ebp+8]"
"	      00552a61    call 00557570h"
"	      00552a66    jmp near ptr 00552A6Bh"
"	      00552a6b    pop edi"
"	      00552a6c    pop esi"
"	      00552a6d    pop ebx"
"	      00552a6e    leave"
"	      00552a6f    ret"
);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a70
enum TreeSim::ReturnCode cYObject::sDoIHaveAMaster(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1304:
	asm( 
"	      00552a70    push ebp"
"	      00552a71    mov ebp,esp"
"	      00552a73    push ebx"
"	      00552a74    push esi"
"	      00552a75    push edi"
"	      00552a76    mov eax,[ebp+10h]"
"	      00552a79    push eax"
"	      00552a7a    mov eax,[ebp+0Ch]"
"	      00552a7d    push eax"
"	      00552a7e    mov ecx,[ebp+8]"
"	      00552a81    call 0055752Bh"
"	      00552a86    jmp near ptr 00552A8Bh"
"	      00552a8b    pop edi"
"	      00552a8c    pop esi"
"	      00552a8d    pop ebx"
"	      00552a8e    leave"
"	      00552a8f    ret"
);
}

