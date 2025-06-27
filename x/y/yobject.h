// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552040
/*unpacked*/ class cYObject* cYObject::GetObjectA(short id) {
// LINE 513:
	__asm        movsx  eax, id;
	__asm        cmp    eax, 0x7D00;
	__asm        jne    _T1f;

	return gAvatar;
// LINE 515:
_T1f:
	__asm        movsx  eax, id;
	__asm        test   eax, eax;
	__asm        jl     _T38;

	__asm        movsx  eax, id;
	__asm        cmp    eax, 0x64;
	__asm        jl     _T54;
// LINE 516:
_T38:
	doAssert(0x8c085, 0x5bb9f4, 0x204, 0x5bba14);
// LINE 517:
_T54:
	__asm        movsx  eax, id;
	__asm        cmp    cYObject::sObjects[0][eax*4], 0;
	__asm        jne    _T82;

	doAssert(0x8c085, 0x5bb9d0, 0x205, 0x5bba14);
// LINE 519:
_T82:
	__asm        movsx  eax, id;
	__asm        mov    eax, cYObject::sObjects[0][eax*4];
	__asm        jmp    __RETURN;
// LINE 520:
__RETURN:
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005520e0
void cYObject::SetAnim(unsigned long name) {
// LINE 760:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x90], 0;
	__asm        jne    _T38;

	doAssert(0x8c085, 0x5bbb9c, 0x2f8, 0x5bba14);
// LINE 761:
_T38:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x98], 0;
	__asm        je     _T5d;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x98];
	__asm        mov    ecx, name;
	__asm        cmp    [eax+0x1C], ecx;
	__asm        je     _Ta4;
// LINE 762:
_T5d:
	this->fAnim = this->fBody->cCopterBody::GetPrivateAnim(name);
// LINE 763:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x98], 0;
	__asm        jne    _Ta4;

	doAssert(0x8c085, 0x5bbb74, 0x2fb, 0x5bba14);
// LINE 765:
_Ta4:
	return;
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552190
/*unpacked*/ class cYObject* cYObject::PutTotedMedVicOn(/*unpacked*/ struct _DYOBJ_INST *thing) {
	/*bp-0x4*/   /*unpacked*/ class cYObject *obj;

// LINE 1023:
	__asm        cmp    thing, 0;
	__asm        jne    _T32;

	doAssert(0x8c085, 0x5bbe90, 0x3ff, 0x5bba14);
// LINE 1024:
_T32:
	obj = this->cYObject::GetToted();
// LINE 1025:
	__asm        cmp    obj, 0;
	__asm        je     _T1cc;
// LINE 1026:
// Block start:
	/*bp-0x8*/   unsigned short yes;
	__asm        mov    eax, obj;
	__asm        movsx  eax, word ptr [eax+0xD8];
	__asm        cmp    eax, 6;
	__asm        je     _T76;

	doAssert(0x8c085, 0x5bbe70, 0x402, 0x5bba14);
// LINE 1027:
_T76:
	__asm        jmp    _T7b;
_T7b:
	__asm        mov    eax, obj;
	__asm        mov    ecx, this;
	__asm        add    ecx, 0x24;
	__asm        cmp    [eax+0x130], ecx;
	__asm        je     _Tac;

	doAssert(0x8c085, 0x5bbe44, 0x403, 0x5bba14);
// LINE 1029:
_Tac:
	__asm        cmp    thing, 0;
	__asm        jne    _Td2;

	doAssert(0x8c085, 0x5bbebc, 0x3e6, 0x5bba14);
_Td2:
	__asm        jmp    _Td7;
_Td7:
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
	__asm        jmp    _T10f;
_T10f:
	__asm        mov    eax, [ebp-0xC];
	__asm        and    eax, 0xFFFF;
	__asm        cmp    eax, 0x1E;
	__asm        jle    _T125;

	__asm        jmp    _T13c;
_T125:
	__asm        jmp    _T158;

	__asm        jmp    _T13c;

	__asm        test   dword ptr [ebp-0x10], 0xFFFF;
	__asm        jne    _T158;
_T13c:
	doAssert(0x8c085, 0x5bbe24, 0x405, 0x5bba14);
// LINE 1030:
_T158:
	yes = obj->cYObject::SetMaster(thing);
// LINE 1031:
	__asm        test   reinterpret_cast<uint32_t>(yes), 0xFFFF;
	__asm        jne    _T191;

	doAssert(0x8c085, 0x5bbde4, 0x407, 0x5bba14);
// LINE 1032:
_T191:
	__asm        mov    eax, obj;
	__asm        movsx  eax, word ptr [eax+0xE2];
	__asm        test   eax, eax;
	__asm        je     _T1bf;

	doAssert(0x8c085, 0x5bbdc8, 0x408, 0x5bba14);
// LINE 1033:
_T1bf:
	return obj;
// LINE 1035:
// Block end:
	__asm        jmp    __RETURN;
// LINE 1036:
_T1cc:
	return 0x0;
// LINE 1038:
__RETURN:
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552370
enum TreeSim::ReturnCode cYObject::sIdle(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iIdle(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552390
enum TreeSim::ReturnCode cYObject::sSetAnim(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iSetAnim(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523b0
enum TreeSim::ReturnCode cYObject::sAttr(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iAttr(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523d0
enum TreeSim::ReturnCode cYObject::sWalk(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iWalk(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005523f0
enum TreeSim::ReturnCode cYObject::sSetBody(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iSetBody(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552410
enum TreeSim::ReturnCode cYObject::sRandom(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iRandom(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552430
enum TreeSim::ReturnCode cYObject::sWalkToAndGrabOntoStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iWalkToAndGrabOntoStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552450
enum TreeSim::ReturnCode cYObject::sUpdateMyMission(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iUpdateMyMission(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552470
enum TreeSim::ReturnCode cYObject::sCheckForTrue(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iCheckForTrue(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552490
enum TreeSim::ReturnCode cYObject::sCompareMyLocWith(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iCompareMyLocWith(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524b0
enum TreeSim::ReturnCode cYObject::sSelfDecommission(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iSelfDecommission(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524d0
enum TreeSim::ReturnCode cYObject::sGetOffMasterObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGetOffMasterObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005524f0
enum TreeSim::ReturnCode cYObject::sTurnTowardsStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iTurnTowardsStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552510
enum TreeSim::ReturnCode cYObject::sIsThisLocType(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iIsThisLocType(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552530
enum TreeSim::ReturnCode cYObject::sIsThisLocTypeNeutral(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iIsThisLocTypeNeutral(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552550
enum TreeSim::ReturnCode cYObject::sCanJumpOffHere(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iCanJumpOffHere(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552570
enum TreeSim::ReturnCode cYObject::sCheckForSpotlightInMyCell(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iCheckForSpotlightInMyCell(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552590
enum TreeSim::ReturnCode cYObject::sIncrementRiotVal(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iIncrementRiotVal(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525b0
enum TreeSim::ReturnCode cYObject::sGetSurroundingRiotVal(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGetSurroundingRiotVal(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525d0
enum TreeSim::ReturnCode cYObject::sIsThisScurkID(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iIsThisScurkID(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005525f0
enum TreeSim::ReturnCode cYObject::sGosubToInitbhav(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGosubToInitbhav(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552610
enum TreeSim::ReturnCode cYObject::sAdjustRadiusForRiotVal(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iAdjustRadiusForRiotVal(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552630
enum TreeSim::ReturnCode cYObject::sJoinRiot(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iJoinRiot(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552650
enum TreeSim::ReturnCode cYObject::sSetDirection(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iSetDirection(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552670
enum TreeSim::ReturnCode cYObject::sThrowProjectile(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iThrowProjectile(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552690
enum TreeSim::ReturnCode cYObject::sTurnFromStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iTurnFromStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526b0
enum TreeSim::ReturnCode cYObject::sTurnFromLastHitter(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iTurnFromLastHitter(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526d0
enum TreeSim::ReturnCode cYObject::sTurnTowardsLastHitter(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iTurnTowardsLastHitter(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005526f0
enum TreeSim::ReturnCode cYObject::sGetOutOfRoadEtc(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGetOutOfRoadEtc(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552710
enum TreeSim::ReturnCode cYObject::sGenerateMedevacAndSetSelfAsVictim(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGenerateMedevacAndSetSelfAsVictim(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552730
enum TreeSim::ReturnCode cYObject::sTurnToNearbyFire(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iTurnToNearbyFire(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552750
enum TreeSim::ReturnCode cYObject::sDie(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iDie(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552770
enum TreeSim::ReturnCode cYObject::sWalkToStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iWalkToStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552790
enum TreeSim::ReturnCode cYObject::sPutObjIntoTreeNum(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iPutObjIntoTreeNum(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527b0
enum TreeSim::ReturnCode cYObject::sVisitOz(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iVisitOz(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527d0
enum TreeSim::ReturnCode cYObject::sMakeMyMedevacVictimVisible(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iMakeMyMedevacVictimVisible(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005527f0
enum TreeSim::ReturnCode cYObject::sMakeMyMedevacVictimInvisible(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iMakeMyMedevacVictimInvisible(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552810
enum TreeSim::ReturnCode cYObject::sMakeMeMasterOfStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iMakeMeMasterOfStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552830
enum TreeSim::ReturnCode cYObject::sMakeMyStackObjectVisitOz(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iMakeMyStackObjectVisitOz(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552850
enum TreeSim::ReturnCode cYObject::sPutTotedMedVicOnStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iPutTotedMedVicOnStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552870
enum TreeSim::ReturnCode cYObject::sTakeAnyMedVicOffStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iTakeAnyMedVicOffStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552890
enum TreeSim::ReturnCode cYObject::sGetOnStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGetOnStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528b0
enum TreeSim::ReturnCode cYObject::sUpdateStackVictimToted(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iUpdateStackVictimToted(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528d0
enum TreeSim::ReturnCode cYObject::sGetNumSpacesOnStackObject(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGetNumSpacesOnStackObject(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005528f0
enum TreeSim::ReturnCode cYObject::sDropToted(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iDropToted(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552910
enum TreeSim::ReturnCode cYObject::sUpdateStackVictimPickedUp(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iUpdateStackVictimPickedUp(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552930
enum TreeSim::ReturnCode cYObject::sCloseToHeli(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iCloseToHeli(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552950
enum TreeSim::ReturnCode cYObject::sSetMyExpression(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iSetMyExpression(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552970
enum TreeSim::ReturnCode cYObject::sGetHeliSpeedPlusDamage(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGetHeliSpeedPlusDamage(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552990
enum TreeSim::ReturnCode cYObject::sIsThisCellSafe(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iIsThisCellSafe(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529b0
enum TreeSim::ReturnCode cYObject::sPlaySound(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iPlaySound(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529d0
enum TreeSim::ReturnCode cYObject::sGetOnHeliIfHarnessRaised(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iGetOnHeliIfHarnessRaised(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x005529f0
enum TreeSim::ReturnCode cYObject::sAmIOnHeli(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iAmIOnHeli(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a10
enum TreeSim::ReturnCode cYObject::sThrowFieryProjectile(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iThrowFieryProjectile(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a30
enum TreeSim::ReturnCode cYObject::sTellStartingObjectTrueOrFalse(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iTellStartingObjectTrueOrFalse(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a50
enum TreeSim::ReturnCode cYObject::sPutMyCarInStack(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iPutMyCarInStack(node, elem);
}

// Function in module: Yobject.obj
// FUNCTION: COPTER_D 0x00552a70
enum TreeSim::ReturnCode cYObject::sDoIHaveAMaster(/*unpacked*/ class cYObject *obj, /*unpacked*/ struct TreeSim::StackElem *elem, /*unpacked*/ struct Behavior::Node *node) {

	return obj->cYObject::iDoIHaveAMaster(node, elem);
}

