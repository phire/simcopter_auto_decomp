// Module: Resource.obj
// Source: C:\Copter\source\engine\Resource.c
// autogenerated by simcopter_tool from PDB file

// Type: int32_t;

// Type: void;

// Type: /*packed*/ struct VRResource (forward reference);
struct VRResource{ // packed(0x10 bytes) TI: 0x18ae
	/*+0x0*/   char * mem;
	/*+0x4*/   int32_t mempoolid;
	/*+0x8*/   int32_t type;
	/*+0xc*/   int32_t entry;
};

// Type: /*packed*/ struct GEOM_Resource (forward reference);
struct GEOM_Resource{ // packed(0x18 bytes) TI: 0x2f05
	/*+0x0*/   /*packed*/ struct VRResource res; // 0x10 bytes
	/*+0x10*/  int32_t count;
	/*+0x14*/  int32_t barrymempool;
	/*+0x18*/  int32_t pointer[0]; // 0x0 bytes
};

// Type: char *;

// Type: void * __ptr32;

// Type: /*packed*/ struct Chunk;
struct Chunk{ // packed(0x8 bytes) TI: 0x2ee9
	/*+0x0*/   int32_t Id;
	/*+0x4*/   int32_t Size;
};



// Contribution: 1:000d42c0-000d505d Module: 146, 16 byte alignment, code, execute, read, 
// FUNCTION: COPTER_D 0x004d52c0
void InitResource() {
// LINE 93:
	strcpy(0x6663f0, 0x59c230);
// LINE 94:
	ResourceFilePtr = 0x0;
// LINE 95:
	ResourceDir = 0x0;
// LINE 96:
	GEOM_GPdir = 0x0;
// LINE 97:
	GEOM_IDdir = 0x0;
// LINE 98:
	CMAP_directory = 0x0;
// LINE 100:
}

// FUNCTION: COPTER_D 0x004d530f
void VRResFreeBarrys(/*packed*/ struct VRResource *res) {
	/*bp-0x4*/   /*packed*/ struct GEOM_Resource *geo;

// LINE 113:
	geo = res;
// LINE 115:
	__asm        mov    eax, res;
	__asm        cmp    dword ptr [eax+8], 1;
	__asm        je     _T21;
// LINE 116:
	return;
// LINE 118:
_T21:
	__asm        mov    eax, geo;
	__asm        cmp    dword ptr [eax+0x14], 0;
	__asm        jge    _T33;
// LINE 119:
	return;
// LINE 121:
_T33:
	S2AllocFreePool(geo->barrymempool);
// LINE 122:
}

// FUNCTION: COPTER_D 0x004d5356
/*packed*/ struct VRResource* VRLoadResource(char * name, int32_t Flags, void * __ptr32 misc) {
	/*bp-0x4*/   /*packed*/ struct VRResource *res;
	/*bp-0x8*/   int32_t i;

// LINE 142:
	__asm        mov    eax, Flags;
	__asm        mov    [ebp-0xC], eax;
	__asm        jmp    _T49c;
// LINE 146:
_T14:
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        call   GetDir_CMAP;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        jne    _FOR_3b;
// LINE 147:
	return 0x0;
// LINE 148:
_FOR_3b:
	for (i = 0x0; (CMAP_hdr.PaletteCount > i); i++) {
// LINE 149:
		__asm        mov    eax, misc;
		__asm        push   eax;
		__asm        mov    eax, i;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        add    eax, CMAP_directory;
		__asm        push   eax;
		__asm        call   _stricmp;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _T136;
// LINE 151:
		bufferBad = 0x1;
// LINE 153:
		__asm        push   0;
		__asm        mov    eax, i;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        mov    ecx, CMAP_directory;
		__asm        mov    eax, [eax+ecx+0x11];
		__asm        push   eax;
		__asm        mov    eax, ResourceFilePtr;
		__asm        push   eax;
		__asm        call   _lseek;
		__asm        add    esp, 0xC;
		__asm        cmp    eax, 0xFFFFFFFF;
		__asm        jne    _Tbd;
// LINE 154:
		GlobalError = 0x3;
// LINE 155:
		return 0x0;
// LINE 157:
_Tbd:
		__asm        push   0x3E8;
		__asm        call   S2AllocPool;
		__asm        add    esp, 4;
		__asm        mov    G_currmempool, eax;
		__asm        cmp    G_currmempool, 0;
		__asm        jge    _Te3;
// LINE 158:
		return 0x0;
// LINE 159:
_Te3:
		res = LoadPalette();
// LINE 160:
		__asm        cmp    res, 0;
		__asm        jne    _Tfc;
// LINE 161:
		return 0x0;
// LINE 162:
_Tfc:
		res->mempoolid = G_currmempool;
// LINE 163:
		__asm        mov    eax, res;
		__asm        push   eax;
		__asm        call   RegisterResource;
		__asm        add    esp, 4;
		__asm        test   eax, eax;
		__asm        jne    _T12e;
// LINE 164:
		VRUnLoadResource(res);
// LINE 165:
		return 0x0;
// LINE 167:
_T12e:
		return res;
// LINE 169:
_T136:
	}
// LINE 170:
_T13b:
	GlobalError = 0x7;
// LINE 171:
	return 0x0;
// LINE 172:
	__asm        jmp    _T4c3;
// LINE 176:
_T151:
	__asm        push   0x10000;
	__asm        call   S2AllocPool;
	__asm        add    esp, 4;
	__asm        mov    G_currmempool, eax;
	__asm        cmp    G_currmempool, 0;
	__asm        jge    _T177;
// LINE 177:
	return 0x0;
// LINE 178:
_T177:
	res = LoadImages(name);
// LINE 179:
	__asm        cmp    res, 0;
	__asm        jne    _T197;
// LINE 180:
	return 0x0;
// LINE 181:
_T197:
	res->mempoolid = G_currmempool;
// LINE 182:
	__asm        mov    eax, res;
	__asm        push   eax;
	__asm        call   RegisterResource;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        jne    _T1c9;
// LINE 183:
	VRUnLoadResource(res);
// LINE 184:
	return 0x0;
// LINE 186:
_T1c9:
	return res;
// LINE 190:
_T1d1:
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        call   GetDir_GEOM;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        jne    _FOR_1f8;
// LINE 191:
	return 0x0;
// LINE 193:
_FOR_1f8:
	for (i = 0x0; (GEOM_hdr.GroupCount > i); i++) {
// LINE 194:
		__asm        mov    eax, misc;
		__asm        push   eax;
		__asm        mov    eax, i;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*2];
		__asm        lea    eax, [ecx+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        add    eax, GEOM_GPdir;
		__asm        push   eax;
		__asm        call   _stricmp;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _T32d;
// LINE 196:
		bufferBad = 0x1;
// LINE 198:
		__asm        push   0;
		__asm        mov    eax, i;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*2];
		__asm        lea    eax, [ecx+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        mov    ecx, GEOM_GPdir;
		__asm        mov    eax, [eax+ecx+0x11];
		__asm        push   eax;
		__asm        mov    eax, ResourceFilePtr;
		__asm        push   eax;
		__asm        call   _lseek;
		__asm        add    esp, 0xC;
		__asm        cmp    eax, 0xFFFFFFFF;
		__asm        jne    _T280;
// LINE 199:
		GlobalError = 0x3;
// LINE 200:
		return 0x0;
// LINE 202:
_T280:
		__asm        push   0x10000;
		__asm        call   S2AllocPool;
		__asm        add    esp, 4;
		__asm        mov    G_currmempool, eax;
		__asm        cmp    G_currmempool, 0;
		__asm        jge    _T2a6;
// LINE 203:
		return 0x0;
// LINE 204:
_T2a6:
		__asm        mov    eax, i;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*2];
		__asm        lea    eax, [ecx+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        mov    ecx, GEOM_GPdir;
		__asm        mov    eax, [eax+ecx+0x15];
		__asm        push   eax;
		__asm        mov    eax, i;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*2];
		__asm        lea    eax, [ecx+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        add    eax, GEOM_GPdir;
		__asm        add    eax, 0x19;
		__asm        push   eax;
		__asm        call   LoadGroup;
		__asm        add    esp, 8;
		__asm        mov    res, eax;
// LINE 205:
		__asm        cmp    res, 0;
		__asm        jne    _T2f3;
// LINE 206:
		return 0x0;
// LINE 207:
_T2f3:
		res->mempoolid = G_currmempool;
// LINE 208:
		__asm        mov    eax, res;
		__asm        push   eax;
		__asm        call   RegisterResource;
		__asm        add    esp, 4;
		__asm        test   eax, eax;
		__asm        jne    _T325;
// LINE 209:
		VRUnLoadResource(res);
// LINE 210:
		return 0x0;
// LINE 212:
_T325:
		return res;
// LINE 214:
_T32d:
	}
// LINE 215:
_T332:
	GlobalError = 0x7;
// LINE 216:
	return 0x0;
// LINE 217:
	__asm        jmp    _T4c3;
// LINE 221:
_T348:
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        call   GetDir_GEOM;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        jne    _FOR_36f;
// LINE 222:
	return 0x0;
// LINE 224:
_FOR_36f:
	for (i = 0x0; (GEOM_hdr.IdCount > i); i++) {
// LINE 225:
		__asm        mov    eax, i;
		__asm        shl    eax, 2;
		__asm        lea    eax, [eax+eax*8];
		__asm        mov    ecx, GEOM_IDdir;
		__asm        mov    edx, misc;
		__asm        cmp    [eax+ecx], edx;
		__asm        jne    _T475;
// LINE 227:
		bufferBad = 0x1;
// LINE 229:
		__asm        push   0;
		__asm        mov    eax, i;
		__asm        shl    eax, 2;
		__asm        lea    eax, [eax+eax*8];
		__asm        mov    ecx, GEOM_IDdir;
		__asm        mov    eax, [eax+ecx+4];
		__asm        push   eax;
		__asm        mov    eax, ResourceFilePtr;
		__asm        push   eax;
		__asm        call   _lseek;
		__asm        add    esp, 0xC;
		__asm        cmp    eax, 0xFFFFFFFF;
		__asm        jne    _T3e4;
// LINE 230:
		GlobalError = 0x3;
// LINE 231:
		return 0x0;
// LINE 233:
_T3e4:
		__asm        push   0x10000;
		__asm        call   S2AllocPool;
		__asm        add    esp, 4;
		__asm        mov    G_currmempool, eax;
		__asm        cmp    G_currmempool, 0;
		__asm        jge    _T40a;
// LINE 234:
		return 0x0;
// LINE 235:
_T40a:
		__asm        push   1;
		__asm        mov    eax, i;
		__asm        shl    eax, 2;
		__asm        lea    eax, [eax+eax*8];
		__asm        add    eax, GEOM_IDdir;
		__asm        add    eax, 8;
		__asm        push   eax;
		__asm        call   LoadGroup;
		__asm        add    esp, 8;
		__asm        mov    res, eax;
// LINE 236:
		__asm        cmp    res, 0;
		__asm        jne    _T43b;
// LINE 237:
		return 0x0;
// LINE 238:
_T43b:
		res->mempoolid = G_currmempool;
// LINE 239:
		__asm        mov    eax, res;
		__asm        push   eax;
		__asm        call   RegisterResource;
		__asm        add    esp, 4;
		__asm        test   eax, eax;
		__asm        jne    _T46d;
// LINE 240:
		VRUnLoadResource(res);
// LINE 241:
		return 0x0;
// LINE 243:
_T46d:
		return res;
// LINE 245:
_T475:
	}
// LINE 246:
_T47a:
	GlobalError = 0x8;
// LINE 247:
	return 0x0;
// LINE 248:
	__asm        jmp    _T4c3;
// LINE 253:
_T490:
	return 0x0;
// LINE 255:
	__asm        jmp    _T4c3;
_T49c:
	__asm        dec    dword ptr [ebp-0xC];
	__asm        cmp    dword ptr [ebp-0xC], 3;
	__asm        ja     _T490;

	__asm        mov    eax, [ebp-0xC];
	__asm        jmp    _Switch_4b3[0][eax*4];
	// Switch pointers:
	//   _T1d1
	//   _T348
	//   _T151
	//   _T14
// LINE 256:
_T4c3:
	return 0x0;
// LINE 257:
}

// FUNCTION: COPTER_D 0x004d5825
int32_t VRUnLoadAllResources() {
	/*bp-0x4*/   /*packed*/ struct VRResource *res;

// LINE 278:
__WHILE_09:
	while ((NextResource != 0x0)) {
// LINE 279:
		res = ResourceArray[0];
// LINE 280:
		__asm        mov    eax, res;
		__asm        push   eax;
		__asm        call   VRUnLoadResource;
		__asm        add    esp, 4;
		__asm        test   eax, eax;
		__asm        jne    _T39;
// LINE 281:
		return 0x0;
// LINE 282:
_T39:
	}
// LINE 283:
_T3e:
	return 0x1;
// LINE 284:
}

// FUNCTION: COPTER_D 0x004d5872
int32_t VRUnLoadResource(/*packed*/ struct VRResource *res) {
	/*bp-0x4*/   /*packed*/ struct GEOM_Resource *geo;

// LINE 305:
	__asm        mov    eax, res;
	__asm        mov    eax, [eax+8];
	__asm        mov    [ebp-8], eax;
	__asm        jmp    _T66;
// LINE 308:
_T17:
	geo = res;
// LINE 309:
	UnRegisterResource(res);
// LINE 317:
	__asm        jmp    _T89;
// LINE 320:
_T2e:
	UnRegisterResource(res);
// LINE 321:
	__asm        jmp    _T89;
// LINE 324:
_T3f:
	UnRegisterResource(res);
// LINE 325:
	__asm        jmp    _T89;
// LINE 328:
_T50:
	GlobalError = 0xb;
// LINE 329:
	return 0x0;
// LINE 331:
	__asm        jmp    _T89;
_T66:
	__asm        cmp    dword ptr [ebp-8], 1;
	__asm        je     _T17;

	__asm        cmp    dword ptr [ebp-8], 3;
	__asm        je     _T2e;

	__asm        cmp    dword ptr [ebp-8], 4;
	__asm        je     _T3f;

	__asm        jmp    _T50;
// LINE 334:
_T89:
	__asm        mov    eax, res;
	__asm        cmp    dword ptr [eax+4], 0;
	__asm        jl     _Ta5;
// LINE 335:
	S2AllocFreePool(res->mempoolid);
// LINE 337:
_Ta5:
	return 0x1;
// LINE 338:
}

// FUNCTION: COPTER_D 0x004d5926
int32_t GetDir_GEOM(char * name) {
	/*bp-0x4*/   int32_t i;
	/*bp-0xc*/   /*packed*/ struct Chunk chunk; // 0x8 bytes

// LINE 364:
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        call   GetResourceDir;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        jne    _T24;
// LINE 365:
	return 0x0;
// LINE 369:
_T24:
	__asm        cmp    GEOM_GPdir, 0;
	__asm        je     _FOR_54;

	__asm        cmp    GEOM_IDdir, 0;
	__asm        je     _FOR_54;
// LINE 370:
	return 0x1;
// LINE 375:
_FOR_54:
	for (i = 0x0; (ResourceDirHdr.Count > i); i++) {
// LINE 377:
		__asm        mov    eax, i;
		__asm        mov    ecx, ResourceDir;
		__asm        cmp    dword ptr [ecx+eax*8], 0x4D4F4547;
		__asm        jne    _T26e;
// LINE 379:
		bufferBad = 0x1;
// LINE 381:
		__asm        push   0;
		__asm        mov    eax, i;
		__asm        mov    ecx, ResourceDir;
		__asm        mov    eax, [ecx+eax*8+4];
		__asm        push   eax;
		__asm        mov    eax, ResourceFilePtr;
		__asm        push   eax;
		__asm        call   _lseek;
		__asm        add    esp, 0xC;
		__asm        cmp    eax, 0xFFFFFFFF;
		__asm        jne    _Tbe;
// LINE 382:
		GlobalError = 0x3;
// LINE 383:
		return 0x0;
// LINE 386:
_Tbe:
		__asm        push   8;
		__asm        lea    eax, chunk.Id;
		__asm        push   eax;
		__asm        call   ReadResource;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _Tdb;
// LINE 387:
		return 0x0;
// LINE 403:
_Tdb:
		__asm        cmp    chunk.Id, 0x4D4F4547;
		__asm        je     _Tf9;
// LINE 404:
		GlobalError = 0x6;
// LINE 405:
		return 0x0;
// LINE 408:
_Tf9:
		__asm        push   0x10;
		__asm        push   0x6666B0;
		__asm        call   ReadResource;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _T117;
// LINE 409:
		return 0x0;
// LINE 438:
_T117:
		__asm        mov    eax, GEOM_hdr.GroupCount;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*2];
		__asm        lea    eax, [ecx+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        push   eax;
		__asm        mov    eax, ResFileMemPool;
		__asm        push   eax;
		__asm        call   S2Alloc;
		__asm        add    esp, 8;
		__asm        mov    GEOM_GPdir, eax;
// LINE 440:
		__asm        mov    eax, GEOM_hdr.IdCount;
		__asm        shl    eax, 2;
		__asm        lea    eax, [eax+eax*8];
		__asm        push   eax;
		__asm        mov    eax, ResFileMemPool;
		__asm        push   eax;
		__asm        call   S2Alloc;
		__asm        add    esp, 8;
		__asm        mov    GEOM_IDdir, eax;
// LINE 441:
		__asm        cmp    GEOM_GPdir, 0;
		__asm        jne    _T199;

		__asm        cmp    GEOM_IDdir, 0;
		__asm        jne    _T199;
// LINE 442:
		GEOM_IDdir = 0x0;
// LINE 443:
		GEOM_GPdir = 0x0;
// LINE 444:
		GlobalError = 0x4;
// LINE 445:
		return 0x0;
// LINE 449:
_T199:
		bufferBad = 0x1;
// LINE 451:
		__asm        push   0;
		__asm        mov    eax, GEOM_hdr.Dir_Group_Offset;
		__asm        push   eax;
		__asm        mov    eax, ResourceFilePtr;
		__asm        push   eax;
		__asm        call   _lseek;
		__asm        add    esp, 0xC;
		__asm        cmp    eax, 0xFFFFFFFF;
		__asm        jne    _T1d3;
// LINE 452:
		GlobalError = 0x3;
// LINE 453:
		return 0x0;
// LINE 456:
_T1d3:
		__asm        mov    eax, GEOM_hdr.GroupCount;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*2];
		__asm        lea    eax, [ecx+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        push   eax;
		__asm        mov    eax, GEOM_GPdir;
		__asm        push   eax;
		__asm        call   ReadResource;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _T201;
// LINE 457:
		return 0x0;
// LINE 533:
_T201:
		bufferBad = 0x1;
// LINE 535:
		__asm        push   0;
		__asm        mov    eax, GEOM_hdr.Dir_Id_Offset;
		__asm        push   eax;
		__asm        mov    eax, ResourceFilePtr;
		__asm        push   eax;
		__asm        call   _lseek;
		__asm        add    esp, 0xC;
		__asm        cmp    eax, 0xFFFFFFFF;
		__asm        jne    _T23b;
// LINE 536:
		GlobalError = 0x3;
// LINE 537:
		return 0x0;
// LINE 540:
_T23b:
		__asm        mov    eax, GEOM_hdr.IdCount;
		__asm        shl    eax, 2;
		__asm        lea    eax, [eax+eax*8];
		__asm        push   eax;
		__asm        mov    eax, GEOM_IDdir;
		__asm        push   eax;
		__asm        call   ReadResource;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _T264;
// LINE 541:
		return 0x0;
// LINE 609:
_T264:
		return 0x1;
// LINE 611:
_T26e:
	}
// LINE 612:
_T273:
	GlobalError = 0x5;
// LINE 613:
	return 0x0;
// LINE 615:
}

// FUNCTION: COPTER_D 0x004d5baf
int32_t GetDir_CMAP(char * name) {
	/*bp-0x4*/   int32_t i;
	/*bp-0xc*/   /*packed*/ struct Chunk chunk; // 0x8 bytes

// LINE 640:
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        call   GetResourceDir;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        jne    _T24;
// LINE 641:
	return 0x0;
// LINE 645:
_T24:
	__asm        cmp    CMAP_directory, 0;
	__asm        je     _FOR_47;
// LINE 646:
	return 0x1;
// LINE 651:
_FOR_47:
	for (i = 0x0; (ResourceDirHdr.Count > i); i++) {
// LINE 653:
		__asm        mov    eax, i;
		__asm        mov    ecx, ResourceDir;
		__asm        cmp    dword ptr [ecx+eax*8], 0x50414D43;
		__asm        jne    _T17e;
// LINE 655:
		bufferBad = 0x1;
// LINE 657:
		__asm        push   0;
		__asm        mov    eax, i;
		__asm        mov    ecx, ResourceDir;
		__asm        mov    eax, [ecx+eax*8+4];
		__asm        push   eax;
		__asm        mov    eax, ResourceFilePtr;
		__asm        push   eax;
		__asm        call   _lseek;
		__asm        add    esp, 0xC;
		__asm        cmp    eax, 0xFFFFFFFF;
		__asm        jne    _Tb1;
// LINE 658:
		GlobalError = 0x3;
// LINE 659:
		return 0x0;
// LINE 662:
_Tb1:
		__asm        push   8;
		__asm        lea    eax, chunk.Id;
		__asm        push   eax;
		__asm        call   ReadResource;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _Tce;
// LINE 663:
		return 0x0;
// LINE 678:
_Tce:
		__asm        cmp    chunk.Id, 0x50414D43;
		__asm        je     _Tec;
// LINE 679:
		GlobalError = 0x6;
// LINE 680:
		return 0x0;
// LINE 683:
_Tec:
		__asm        push   4;
		__asm        push   0x6666A4;
		__asm        call   ReadResource;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _T10a;
// LINE 684:
		return 0x0;
// LINE 694:
_T10a:
		__asm        mov    eax, CMAP_hdr.PaletteCount;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        push   eax;
		__asm        mov    eax, ResFileMemPool;
		__asm        push   eax;
		__asm        call   S2Alloc;
		__asm        add    esp, 8;
		__asm        mov    CMAP_directory, eax;
// LINE 695:
		__asm        cmp    CMAP_directory, 0;
		__asm        jne    _T149;
// LINE 696:
		GlobalError = 0x4;
// LINE 697:
		return 0x0;
// LINE 700:
_T149:
		__asm        mov    eax, CMAP_hdr.PaletteCount;
		__asm        mov    ecx, eax;
		__asm        lea    eax, [eax+eax*4];
		__asm        lea    eax, [ecx+eax*4];
		__asm        push   eax;
		__asm        mov    eax, CMAP_directory;
		__asm        push   eax;
		__asm        call   ReadResource;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _T174;
// LINE 701:
		return 0x0;
// LINE 726:
_T174:
		return 0x1;
// LINE 728:
_T17e:
	}
// LINE 729:
_T183:
	GlobalError = 0x5;
// LINE 730:
	return 0x0;
// LINE 732:
}

// FUNCTION: COPTER_D 0x004d5d48
int32_t GetResourceDir(char * name) {
	/*bp-0x8*/   /*packed*/ struct Chunk chunk; // 0x8 bytes

// LINE 758:
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        push   0x6663F0;
	__asm        call   _stricmp;
	__asm        add    esp, 8;
	__asm        test   eax, eax;
	__asm        jne    _T74;
// LINE 759:
	__asm        cmp    ResourceDir, 0;
	__asm        je     _T39;
// LINE 760:
	return 0x1;
// LINE 766:
_T39:
	bufferBad = 0x1;
// LINE 768:
	__asm        push   0;
	__asm        push   0;
	__asm        mov    eax, ResourceFilePtr;
	__asm        push   eax;
	__asm        call   _lseek;
	__asm        add    esp, 0xC;
	__asm        cmp    eax, 0xFFFFFFFF;
	__asm        jne    _T6f;
// LINE 769:
	GlobalError = 0x3;
// LINE 770:
	return 0x0;
// LINE 773:
_T6f:
	__asm        jmp    _T8f;
// LINE 774:
_T74:
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        call   OpenResourceFile;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        jne    _T8f;
// LINE 775:
	return 0x0;
// LINE 783:
_T8f:
	__asm        push   8;
	__asm        lea    eax, chunk.Id;
	__asm        push   eax;
	__asm        call   ReadResource;
	__asm        add    esp, 8;
	__asm        test   eax, eax;
	__asm        jne    _Tac;
// LINE 784:
	return 0x0;
// LINE 801:
_Tac:
	__asm        push   4;
	__asm        push   0x666694;
	__asm        call   ReadResource;
	__asm        add    esp, 8;
	__asm        test   eax, eax;
	__asm        jne    _Tca;
// LINE 802:
	return 0x0;
// LINE 815:
_Tca:
	ResourceDir = S2Alloc(ResFileMemPool, (ResourceDirHdr.Count << 0x3));
// LINE 816:
	__asm        cmp    ResourceDir, 0;
	__asm        jne    _T104;
// LINE 817:
	GlobalError = 0x4;
// LINE 818:
	return 0x0;
// LINE 821:
_T104:
	__asm        mov    eax, ResourceDirHdr.Count;
	__asm        shl    eax, 3;
	__asm        push   eax;
	__asm        mov    eax, ResourceDir;
	__asm        push   eax;
	__asm        call   ReadResource;
	__asm        add    esp, 8;
	__asm        test   eax, eax;
	__asm        jne    _T12a;
// LINE 822:
	return 0x0;
// LINE 848:
_T12a:
	return 0x1;
// LINE 849:
}

// FUNCTION: COPTER_D 0x004d5e81
int32_t OpenResourceFile(char * name) {
// LINE 872:
	VRCloseResourceFile();
// LINE 873:
	__asm        push   0x8000;
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        call   _open;
	__asm        add    esp, 8;
	__asm        mov    ResourceFilePtr, eax;
	__asm        cmp    ResourceFilePtr, 0xFFFFFFFF;
	__asm        jne    _T3f;
// LINE 874:
	GlobalError = 0x1;
// LINE 875:
	return 0x0;
// LINE 878:
_T3f:
	__asm        push   0x7D0;
	__asm        call   S2AllocPool;
	__asm        add    esp, 4;
	__asm        mov    ResFileMemPool, eax;
	__asm        cmp    ResFileMemPool, 0;
	__asm        jge    _T7d;
// LINE 880:
	_close(ResourceFilePtr);
// LINE 881:
	GlobalError = 0x1;
// LINE 882:
	return 0x0;
// LINE 884:
_T7d:
	strcpy(0x6663f0, name);
// LINE 885:
	return 0x1;
// LINE 887:
}

// FUNCTION: COPTER_D 0x004d5f1e
int32_t ReadResource(void * __ptr32 buf, int32_t s) {
// LINE 1058:
	__asm        mov    eax, s;
	__asm        push   eax;
	__asm        mov    eax, buf;
	__asm        push   eax;
	__asm        mov    eax, ResourceFilePtr;
	__asm        push   eax;
	__asm        call   _read;
	__asm        add    esp, 0xC;
	__asm        cmp    eax, s;
	__asm        je     _T36;
// LINE 1059:
	GlobalError = 0x2;
// LINE 1060:
	return 0x0;
// LINE 1062:
_T36:
	return 0x1;
// LINE 1064:
}

// FUNCTION: COPTER_D 0x004d5f63
void VRCloseResourceFile() {
// LINE 1092:
	__asm        cmp    ResourceFilePtr, 0;
	__asm        je     _T21;
// LINE 1093:
	_close(ResourceFilePtr);
// LINE 1094:
_T21:
	__asm        cmp    ResFileMemPool, 0;
	__asm        jl     _T3c;
// LINE 1096:
	S2AllocFreePool(ResFileMemPool);
// LINE 1099:
_T3c:
	InitResource();
// LINE 1100:
}

// FUNCTION: COPTER_D 0x004d5fa9
int32_t RegisterResource(/*packed*/ struct VRResource *res) {
// LINE 1119:
	__asm        cmp    NextResource, 0x64;
	__asm        jl     _T24;
// LINE 1120:
	GlobalError = 0xc;
// LINE 1121:
	return 0x0;
// LINE 1123:
_T24:
	res->entry = NextResource;
// LINE 1124:
	__asm        mov    eax, res;
	__asm        mov    ecx, NextResource;
	__asm        mov    ResourceArray[0][ecx*4], eax;
	__asm        inc    NextResource;
// LINE 1125:
	return 0x1;
// LINE 1127:
}

// FUNCTION: COPTER_D 0x004d5ffd
void UnRegisterResource(/*packed*/ struct VRResource *res) {
	/*bp-0x4*/   /*packed*/ struct VRResource *r;
	/*bp-0x8*/   int32_t i;

// LINE 1146:
	i = res->entry;
// LINE 1147:
	__asm        mov    eax, i;
	__asm        mov    ecx, res;
	__asm        cmp    ResourceArray[0][eax*4], ecx;
	__asm        je     _T2a;
// LINE 1148:
	return;
// LINE 1149:
_T2a:
	NextResource--;
// LINE 1150:
	__asm        mov    eax, NextResource;
	__asm        mov    eax, ResourceArray[0][eax*4];
	__asm        mov    ecx, i;
	__asm        mov    ResourceArray[0][ecx*4], eax;
	__asm        mov    eax, i;
	__asm        mov    eax, ResourceArray[0][eax*4];
	__asm        mov    r, eax;
// LINE 1151:
	r->entry = i;
// LINE 1153:
}



// Contribution: 3:00005220-00005230 Module: 146, 4 byte alignment, initialized_data, read, write, 
// GLOBAL: COPTER_D 0x0059c220
int32_t bufferBad = 1;

// GLOBAL: COPTER_D 0x0059c224
int32_t NextResource = 0;

// GLOBAL: COPTER_D 0x0059c228
int32_t ResFileMemPool = -1;

// GLOBAL: COPTER_D 0x0059c22c
int32_t G_currmempool = -1;



// Unknown globals:
// The PDB was slightly corrupted and we aren't sure which file these globals belong to.
// GLOBAL: COPTER_D 0x006666b0
/*packed*/ struct GEOM_Header GEOM_hdr; // Contrib missing

// GLOBAL: COPTER_D 0x006666a4
/*packed*/ struct CMAP_Header CMAP_hdr; // Contrib missing

// GLOBAL: COPTER_D 0x006666a0
int32_t ResourceFilePtr; // Contrib missing

// GLOBAL: COPTER_D 0x0066669c
/*packed*/ struct GEOM_DirId *GEOM_IDdir; // Contrib missing

// GLOBAL: COPTER_D 0x00666698
/*packed*/ struct GEOM_DirGroup *GEOM_GPdir; // Contrib missing

// GLOBAL: COPTER_D 0x00666694
/*packed*/ struct DIRC_Header ResourceDirHdr; // Contrib missing

// GLOBAL: COPTER_D 0x00666690
/*packed*/ struct CMAP_Dir *CMAP_directory; // Contrib missing

// GLOBAL: COPTER_D 0x00666500
/*packed*/ struct VRResource *ResourceArray[100]; // Contrib missing

// GLOBAL: COPTER_D 0x006663f0
char ResourceFileName[260]; // Contrib missing

// GLOBAL: COPTER_D 0x006663ec
/*packed*/ struct DIRC_Dir *ResourceDir; // Contrib missing

// GLOBAL: COPTER_D 0x006663f0
char ResourceFileName[260]; // Contrib missing

// GLOBAL: COPTER_D 0x006663ec
/*packed*/ struct DIRC_Dir *ResourceDir; // Contrib missing

// GLOBAL: COPTER_D 0x006666a0
int32_t ResourceFilePtr; // Contrib missing

// GLOBAL: COPTER_D 0x00666694
/*packed*/ struct DIRC_Header ResourceDirHdr; // Contrib missing

// GLOBAL: COPTER_D 0x00666500
/*packed*/ struct VRResource *ResourceArray[100]; // Contrib missing

