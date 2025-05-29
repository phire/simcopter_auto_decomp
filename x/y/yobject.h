// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552040
class cYObject* cYObject::GetObjectA(short id) {
// LINE 512:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
// LINE 513:
	__asm        movsx  eax, id;
	__asm        cmp    eax, 0x7D00;
	__asm        jne    near ptr 0x0055205F;
	__asm        mov    eax, ds:[0x5B8680];
	__asm        jmp    near ptr 0x005520D2;
// LINE 515:
	__asm        movsx  eax, id;
	__asm        test   eax, eax;
	__asm        jl     near ptr 0x00552078;
	__asm        movsx  eax, id;
	__asm        cmp    eax, 0x64;
	__asm        jl     near ptr 0x00552094;
// LINE 516:
	__asm        push   0x8C085;
	__asm        push   0x5BB9F4;
	__asm        push   0x204;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 517:
	__asm        movsx  eax, id;
	__asm        cmp    dword ptr [eax*4+0x636D40], 0;
	__asm        jne    near ptr 0x005520C2;
	__asm        push   0x8C085;
	__asm        push   0x5BB9D0;
	__asm        push   0x205;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 519:
	__asm        movsx  eax, id;
	__asm        mov    eax, [eax*4+0x636D40];
	__asm        jmp    near ptr 0x005520D2;
// LINE 520:
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005520e0
void cYObject::SetAnim(unsigned long name) {
// LINE 759:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 760:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x90], 0;
	__asm        jne    near ptr 0x00552118;
	__asm        push   0x8C085;
	__asm        push   0x5BBB9C;
	__asm        push   0x2F8;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 761:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x98], 0;
	__asm        je     near ptr 0x0055213D;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x98];
	__asm        mov    ecx, name;
	__asm        cmp    [eax+0x1C], ecx;
	__asm        je     near ptr 0x00552184;
// LINE 762:
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    ecx, [eax+0x90];
	__asm        call   0x00560BF0;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x98], eax;
// LINE 763:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x98], 0;
	__asm        jne    near ptr 0x00552184;
	__asm        push   0x8C085;
	__asm        push   0x5BBB74;
	__asm        push   0x2FB;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 765:
	__asm        jmp    near ptr 0x00552189;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    4;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552190
class cYObject* cYObject::PutTotedMedVicOn(struct _DYOBJ_INST* thing) {
	class cYObject* obj;

// LINE 1022:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 0x14;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    this, ecx;
// LINE 1023:
	__asm        cmp    thing, 0;
	__asm        jne    near ptr 0x005521C2;
	__asm        push   0x8C085;
	__asm        push   0x5BBE90;
	__asm        push   0x3FF;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 1024:
	__asm        mov    ecx, this;
	__asm        call   0x005573F5;
	__asm        mov    obj, eax;
// LINE 1025:
	__asm        cmp    obj, 0;
	__asm        je     near ptr 0x0055235C;
// LINE 1026:
// Block start:
	unsigned short yes;
	__asm        mov    eax, obj;
	__asm        movsx  eax, word ptr [eax+0xD8];
	__asm        cmp    eax, 6;
	__asm        je     near ptr 0x00552206;
	__asm        push   0x8C085;
	__asm        push   0x5BBE70;
	__asm        push   0x402;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 1027:
	__asm        jmp    near ptr 0x0055220B;
	__asm        mov    eax, obj;
	__asm        mov    ecx, this;
	__asm        add    ecx, 0x24;
	__asm        cmp    [eax+0x130], ecx;
	__asm        je     near ptr 0x0055223C;
	__asm        push   0x8C085;
	__asm        push   0x5BBE44;
	__asm        push   0x403;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 1029:
	__asm        cmp    thing, 0;
	__asm        jne    near ptr 0x00552262;
	__asm        push   0x8C085;
	__asm        push   0x5BBEBC;
	__asm        push   0x3E6;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
	__asm        jmp    near ptr 0x00552267;
	__asm        mov    eax, obj;
	__asm        mov    eax, [eax+0x3C];
	__asm        mov    ecx, thing;
	__asm        sub    eax, [ecx+0x18];
	__asm        mov    ecx, obj;
	__asm        add    eax, [ecx+0x44];
	__asm        mov    ecx, thing;
	__asm        sub    eax, [ecx+0x20];
	__asm        mov    ecx, obj;
	__asm        add    eax, [ecx+0x40];
	__asm        mov    ecx, thing;
	__asm        sub    eax, [ecx+0x1C];
	__asm        sar    eax, 0x10;
	__asm        movsx  eax, ax;
	__asm        cdq;
	__asm        xor    eax, edx;
	__asm        sub    eax, edx;
	__asm        mov    [ebp-0xC], ax;
	__asm        jmp    near ptr 0x0055229F;
	__asm        mov    eax, [ebp-0xC];
	__asm        and    eax, 0xFFFF;
	__asm        cmp    eax, 0x1E;
	__asm        jle    near ptr 0x005522B5;
	__asm        jmp    near ptr 0x005522CC;
	__asm        jmp    near ptr 0x005522E8;
	__asm        jmp    near ptr 0x005522CC;
	__asm        test   dword ptr [ebp-0x10], 0xFFFF;
	__asm        jne    near ptr 0x005522E8;
	__asm        push   0x8C085;
	__asm        push   0x5BBE24;
	__asm        push   0x405;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 1030:
	__asm        mov    eax, thing;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0054CECA;
	__asm        mov    yes, ax;
// LINE 1031:
	__asm        test   reinterpret_cast<uint32_t>(yes), 0xFFFF;
	__asm        jne    near ptr 0x00552321;
	__asm        push   0x8C085;
	__asm        push   0x5BBDE4;
	__asm        push   0x407;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 1032:
	__asm        mov    eax, obj;
	__asm        movsx  eax, word ptr [eax+0xE2];
	__asm        test   eax, eax;
	__asm        je     near ptr 0x0055234F;
	__asm        push   0x8C085;
	__asm        push   0x5BBDC8;
	__asm        push   0x408;
	__asm        push   0x5BBA14;
	__asm        call   0x00554F30;
	__asm        add    esp, 0x10;
// LINE 1033:
	__asm        mov    eax, obj;
	__asm        jmp    near ptr 0x00552363;
// LINE 1035:
// Block end:
	__asm        jmp    near ptr 0x00552363;
// LINE 1036:
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x00552363;
// LINE 1038:
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret    4;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552370
enum TreeSim::ReturnCode cYObject::sIdle(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1242:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x005575DC;
	__asm        jmp    near ptr 0x0055238B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552390
enum TreeSim::ReturnCode cYObject::sSetAnim(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1243:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x005576F6;
	__asm        jmp    near ptr 0x005523AB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523b0
enum TreeSim::ReturnCode cYObject::sAttr(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1244:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x005577CD;
	__asm        jmp    near ptr 0x005523CB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523d0
enum TreeSim::ReturnCode cYObject::sWalk(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1246:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00557807;
	__asm        jmp    near ptr 0x005523EB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523f0
enum TreeSim::ReturnCode cYObject::sSetBody(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1247:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00557948;
	__asm        jmp    near ptr 0x0055240B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552410
enum TreeSim::ReturnCode cYObject::sRandom(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1248:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00557B25;
	__asm        jmp    near ptr 0x0055242B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552430
enum TreeSim::ReturnCode cYObject::sWalkToAndGrabOntoStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1253:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00557C20;
	__asm        jmp    near ptr 0x0055244B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552450
enum TreeSim::ReturnCode cYObject::sUpdateMyMission(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1254:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00557F40;
	__asm        jmp    near ptr 0x0055246B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552470
enum TreeSim::ReturnCode cYObject::sCheckForTrue(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1255:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00557F90;
	__asm        jmp    near ptr 0x0055248B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552490
enum TreeSim::ReturnCode cYObject::sCompareMyLocWith(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1256:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055826F;
	__asm        jmp    near ptr 0x005524AB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524b0
enum TreeSim::ReturnCode cYObject::sSelfDecommission(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1257:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x005587C8;
	__asm        jmp    near ptr 0x005524CB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524d0
enum TreeSim::ReturnCode cYObject::sGetOffMasterObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1258:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x005587F9;
	__asm        jmp    near ptr 0x005524EB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524f0
enum TreeSim::ReturnCode cYObject::sTurnTowardsStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1259:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x005588F3;
	__asm        jmp    near ptr 0x0055250B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552510
enum TreeSim::ReturnCode cYObject::sIsThisLocType(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1260:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055898A;
	__asm        jmp    near ptr 0x0055252B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552530
enum TreeSim::ReturnCode cYObject::sIsThisLocTypeNeutral(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1261:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00558A02;
	__asm        jmp    near ptr 0x0055254B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552550
enum TreeSim::ReturnCode cYObject::sCanJumpOffHere(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1262:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00558ABB;
	__asm        jmp    near ptr 0x0055256B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552570
enum TreeSim::ReturnCode cYObject::sCheckForSpotlightInMyCell(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1263:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00558B03;
	__asm        jmp    near ptr 0x0055258B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552590
enum TreeSim::ReturnCode cYObject::sIncrementRiotVal(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1264:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00558C9C;
	__asm        jmp    near ptr 0x005525AB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525b0
enum TreeSim::ReturnCode cYObject::sGetSurroundingRiotVal(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1265:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00558D4D;
	__asm        jmp    near ptr 0x005525CB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525d0
enum TreeSim::ReturnCode cYObject::sIsThisScurkID(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1266:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00558F7C;
	__asm        jmp    near ptr 0x005525EB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525f0
enum TreeSim::ReturnCode cYObject::sGosubToInitbhav(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1267:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x005590A2;
	__asm        jmp    near ptr 0x0055260B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552610
enum TreeSim::ReturnCode cYObject::sAdjustRadiusForRiotVal(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1268:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055919A;
	__asm        jmp    near ptr 0x0055262B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552630
enum TreeSim::ReturnCode cYObject::sJoinRiot(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1269:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00559202;
	__asm        jmp    near ptr 0x0055264B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552650
enum TreeSim::ReturnCode cYObject::sSetDirection(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1270:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00559787;
	__asm        jmp    near ptr 0x0055266B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552670
enum TreeSim::ReturnCode cYObject::sThrowProjectile(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1271:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x005598BA;
	__asm        jmp    near ptr 0x0055268B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552690
enum TreeSim::ReturnCode cYObject::sTurnFromStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1272:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00559B31;
	__asm        jmp    near ptr 0x005526AB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526b0
enum TreeSim::ReturnCode cYObject::sTurnFromLastHitter(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1273:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00559BC8;
	__asm        jmp    near ptr 0x005526CB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526d0
enum TreeSim::ReturnCode cYObject::sTurnTowardsLastHitter(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1274:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00559C65;
	__asm        jmp    near ptr 0x005526EB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526f0
enum TreeSim::ReturnCode cYObject::sGetOutOfRoadEtc(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1275:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00559D02;
	__asm        jmp    near ptr 0x0055270B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552710
enum TreeSim::ReturnCode cYObject::sGenerateMedevacAndSetSelfAsVictim(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1276:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00559F1E;
	__asm        jmp    near ptr 0x0055272B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552730
enum TreeSim::ReturnCode cYObject::sTurnToNearbyFire(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1277:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00559F74;
	__asm        jmp    near ptr 0x0055274B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552750
enum TreeSim::ReturnCode cYObject::sDie(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1278:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055A15B;
	__asm        jmp    near ptr 0x0055276B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552770
enum TreeSim::ReturnCode cYObject::sWalkToStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1279:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055A1B1;
	__asm        jmp    near ptr 0x0055278B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552790
enum TreeSim::ReturnCode cYObject::sPutObjIntoTreeNum(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1280:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055A1D9;
	__asm        jmp    near ptr 0x005527AB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527b0
enum TreeSim::ReturnCode cYObject::sVisitOz(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1281:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055A2DA;
	__asm        jmp    near ptr 0x005527CB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527d0
enum TreeSim::ReturnCode cYObject::sMakeMyMedevacVictimVisible(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1283:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055A57F;
	__asm        jmp    near ptr 0x005527EB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527f0
enum TreeSim::ReturnCode cYObject::sMakeMyMedevacVictimInvisible(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1284:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055A64A;
	__asm        jmp    near ptr 0x0055280B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552810
enum TreeSim::ReturnCode cYObject::sMakeMeMasterOfStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1285:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055A68F;
	__asm        jmp    near ptr 0x0055282B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552830
enum TreeSim::ReturnCode cYObject::sMakeMyStackObjectVisitOz(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1286:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055A7CA;
	__asm        jmp    near ptr 0x0055284B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552850
enum TreeSim::ReturnCode cYObject::sPutTotedMedVicOnStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1287:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055AAD0;
	__asm        jmp    near ptr 0x0055286B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552870
enum TreeSim::ReturnCode cYObject::sTakeAnyMedVicOffStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1288:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055ACF9;
	__asm        jmp    near ptr 0x0055288B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552890
enum TreeSim::ReturnCode cYObject::sGetOnStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1289:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055ADF0;
	__asm        jmp    near ptr 0x005528AB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528b0
enum TreeSim::ReturnCode cYObject::sUpdateStackVictimToted(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1290:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055AF39;
	__asm        jmp    near ptr 0x005528CB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528d0
enum TreeSim::ReturnCode cYObject::sGetNumSpacesOnStackObject(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1291:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B003;
	__asm        jmp    near ptr 0x005528EB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528f0
enum TreeSim::ReturnCode cYObject::sDropToted(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1292:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B1A1;
	__asm        jmp    near ptr 0x0055290B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552910
enum TreeSim::ReturnCode cYObject::sUpdateStackVictimPickedUp(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1293:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B1F7;
	__asm        jmp    near ptr 0x0055292B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552930
enum TreeSim::ReturnCode cYObject::sCloseToHeli(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1294:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B2C1;
	__asm        jmp    near ptr 0x0055294B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552950
enum TreeSim::ReturnCode cYObject::sSetMyExpression(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1295:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B3A5;
	__asm        jmp    near ptr 0x0055296B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552970
enum TreeSim::ReturnCode cYObject::sGetHeliSpeedPlusDamage(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1296:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B417;
	__asm        jmp    near ptr 0x0055298B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552990
enum TreeSim::ReturnCode cYObject::sIsThisCellSafe(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1297:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B549;
	__asm        jmp    near ptr 0x005529AB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529b0
enum TreeSim::ReturnCode cYObject::sPlaySound(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1298:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B5CA;
	__asm        jmp    near ptr 0x005529CB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529d0
enum TreeSim::ReturnCode cYObject::sGetOnHeliIfHarnessRaised(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1299:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B631;
	__asm        jmp    near ptr 0x005529EB;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529f0
enum TreeSim::ReturnCode cYObject::sAmIOnHeli(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1300:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B739;
	__asm        jmp    near ptr 0x00552A0B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a10
enum TreeSim::ReturnCode cYObject::sThrowFieryProjectile(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1301:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B789;
	__asm        jmp    near ptr 0x00552A2B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a30
enum TreeSim::ReturnCode cYObject::sTellStartingObjectTrueOrFalse(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1302:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055B7B1;
	__asm        jmp    near ptr 0x00552A4B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a50
enum TreeSim::ReturnCode cYObject::sPutMyCarInStack(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1303:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x00557570;
	__asm        jmp    near ptr 0x00552A6B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a70
enum TreeSim::ReturnCode cYObject::sDoIHaveAMaster(class cYObject* obj, struct TreeSim::StackElem* elem, struct Behavior::Node* node) {
// LINE 1304:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
	__asm        mov    eax, node;
	__asm        push   eax;
	__asm        mov    eax, elem;
	__asm        push   eax;
	__asm        mov    ecx, obj;
	__asm        call   0x0055752B;
	__asm        jmp    near ptr 0x00552A8B;
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

