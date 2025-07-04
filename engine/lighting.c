// Module: Lighting.obj
// Source: C:\Copter\source\engine\Lighting.c
// autogenerated by simcopter_tool from PDB file

// Type: /*packed*/ struct COLOR_SHADE (forward reference);
struct COLOR_SHADE{ // packed(0x8 bytes) TI: 0x2eb5
	/*+0x0*/   int32_t base;
	/*+0x4*/   int32_t count;
};

// Type: /*packed*/ struct Point3d;
struct Point3d{ // packed(0xc bytes) TI: 0x18b0
	/*+0x0*/   int32_t x;
	/*+0x4*/   int32_t y;
	/*+0x8*/   int32_t z;
};

// Type: int32_t;

// Type: /*packed*/ struct TEXT_Resource (forward reference);
struct TEXT_Resource{ // packed(0x18 bytes) TI: 0x2ec2
	/*+0x0*/   /*packed*/ struct VRResource res; // 0x10 bytes
	/*+0x10*/  int32_t count;
	/*+0x14*/  uint32_t * bmpcolors;
	/*+0x18*/  /*packed*/ struct VRBITMAP bmp[0]; // 0x0 bytes
};

// Type: /*packed*/ struct VRResource (forward reference);
struct VRResource{ // packed(0x10 bytes) TI: 0x18ae
	/*+0x0*/   char * mem;
	/*+0x4*/   int32_t mempoolid;
	/*+0x8*/   int32_t type;
	/*+0xc*/   int32_t entry;
};

// Type: unsigned char *;

// Type: /*packed*/ struct VRBmpHdr (forward reference);
struct VRBmpHdr{ // packed(0x10 bytes) TI: 0x2312
	/*+0x0*/   /*packed*/ struct VRBmpInfo info; // 0xc bytes
	/*+0xc*/   int32_t ScanOffset[1];
};

// Type: uint32_t *;

// Type: int32_t *;

// Type: /*packed*/ struct _FaceHdr (forward reference);
struct _FaceHdr{ // packed(0x30 bytes) TI: 0x2e99
	/*+0x0*/   /*packed*/ struct _FaceHdr *NextFace;
	/*+0x4*/   int32_t Nverts;
	/*+0x8*/   int32_t Attrib1;
	/*+0xc*/   int32_t Attrib2;
	/*+0x10*/  int32_t Plotter;
	/*+0x14*/  int32_t Count2d;
	/*+0x18*/  /*packed*/ struct Clip3d *Verts2d;
	/*+0x1c*/  int32_t PlyVerts;
	/*+0x20*/  /*packed*/ struct MapVert *MapVerts;
	/*+0x24*/  int32_t Bitmap;
	/*+0x28*/  /*packed*/ struct MapVert *Barrys;
	/*+0x2c*/  /*packed*/ struct Project3d *Normal;
};

// Type: void;

// Type: /*packed*/ struct VRObjInfo;
struct VRObjInfo{ // packed(0x24 bytes) TI: 0x2ea8
	/*+0x0*/   int32_t Faces;
	/*+0x4*/   int32_t Verts;
	/*+0x8*/   int32_t Attribute;
	/*+0xc*/   int32_t Radius;
	/*+0x10*/  /*packed*/ struct Point3d *ObjCenter;
	/*+0x14*/  /*packed*/ struct Point3d *VertsPtr;
	/*+0x18*/  /*packed*/ struct Xform3d *VertsXfm;
	/*+0x1c*/  /*packed*/ struct Point3d *OrgVerts;
	/*+0x20*/  int32_t *Matrix[4][4];
};

// Type: /*packed*/ struct ObjectHdr (forward reference);
struct ObjectHdr{ // packed(0x90 bytes) TI: 0x2ebb
	/*+0x0*/   int32_t Attrib;
	/*+0x4*/   int32_t NVerts;
	/*+0x8*/   /*packed*/ struct Point3d *VertsPtr;
	/*+0xc*/   int32_t MemPool;
	/*+0x10*/  int32_t NFaces;
	/*+0x14*/  int32_t PolyVerts;
	/*+0x18*/  /*packed*/ struct Point3d CenterOrg; // 0xc bytes
	/*+0x24*/  /*packed*/ struct Point3d Center; // 0xc bytes
	/*+0x30*/  int32_t Radius;
	/*+0x34*/  /*packed*/ struct _BSPtree *bsptree;
	/*+0x38*/  int32_t StaticCnt;
	/*+0x3c*/  int32_t StaticPtr;
	/*+0x40*/  int32_t MiscReg1;
	/*+0x44*/  int32_t ID;
	/*+0x48*/  int32_t Entry;
	/*+0x4c*/  /*packed*/ struct _FaceHdr *FacePtr;
	/*+0x50*/  int32_t Matrix[4][4]; // 0x40 bytes
};

// Type: /*packed*/ struct Point3d (forward reference);
struct Point3d{ // packed(0xc bytes) TI: 0x18b0
	/*+0x0*/   int32_t x;
	/*+0x4*/   int32_t y;
	/*+0x8*/   int32_t z;
};



// Contribution: 1:000d7cc0-000d89a4 Module: 132, 16 byte alignment, code, execute, read, 
// FUNCTION: COPTER_D 0x004d8cc0
int32_t VRCreateTexColors(/*packed*/ struct VRResource *res, int32_t create_new) {
	/*bp-0x4*/   /*packed*/ struct VRBmpHdr *bhdr;
	/*bp-0x8*/   int32_t maxval;
	/*bp-0xc*/   int32_t i;
	/*bp-0x10*/  int32_t j;
	/*bp-0x14*/  /*packed*/ struct TEXT_Resource *hdr;
	/*bp-0x18*/  int32_t maxcolor;
	/*bp-0x1c*/  unsigned char * tptr;

// LINE 122:
	hdr = res;
// LINE 123:
	S_texres = hdr;
// LINE 126:
	__asm        cmp    create_new, 1;
	__asm        jne    _T40;
// LINE 129:
	hdr->bmpcolors = S2Alloc(res->mempoolid, (hdr->count << 0x2));
// LINE 132:
_T40:
	__asm        mov    eax, hdr;
	__asm        cmp    dword ptr [eax+0x14], 0;
	__asm        jne    _FOR_6d;
// LINE 134:
	GlobalError = 0x4;
// LINE 135:
	return 0x1;
// LINE 141:
_FOR_6d:
	for (i = 0x0; (hdr->count > i); i++) {
// LINE 143:
		bhdr = VRInt2BmpHdr(res, i);
// LINE 146:
		__asm        mov    eax, bhdr;
		__asm        movsx  eax, word ptr [eax+8];
		__asm        test   al, 4;
		__asm        je     _Tc7;
// LINE 148:
		__asm        mov    eax, create_new;
		__asm        push   eax;
		__asm        mov    eax, res;
		__asm        push   eax;
		__asm        mov    eax, bhdr;
		__asm        push   eax;
		__asm        mov    eax, hdr;
		__asm        mov    eax, [eax+0x14];
		__asm        mov    ecx, i;
		__asm        lea    eax, [eax+ecx*4];
		__asm        push   eax;
		__asm        call   CreateTiledTexColors;
		__asm        add    esp, 0x10;
// LINE 149:
		__asm        jmp    _FOR_NEXT_6d;
// LINE 152:
_Tc7:
		tptr = bhdr;
// LINE 153:
		tptr += ((bhdr->info.height << 0x2) + 0xc);
// LINE 154:
		memset(0x606a78, 0x0, 0x400);
// LINE 156:
_FOR_fc:
		for (j = 0x0; ((bhdr->info.height * bhdr->info.width) > j); j++) {
// LINE 158:
			__asm        mov    eax, tptr;
			__asm        xor    ecx, ecx;
			__asm        mov    cl, [eax];
			__asm        inc    S_ctrs[ecx*4];
// LINE 159:
			tptr++;
		}
// LINE 162:
_T12a:
		maxval = 0x0;
// LINE 163:
_FOR_13d:
		for (j = 0x0; (j < 0x100); j++) {
// LINE 165:
			__asm        mov    eax, j;
			__asm        mov    ecx, maxval;
			__asm        cmp    S_ctrs[eax*4], ecx;
			__asm        jle    _T173;
// LINE 167:
			__asm        mov    eax, j;
			__asm        mov    eax, S_ctrs[eax*4];
			__asm        mov    maxval, eax;
// LINE 168:
			maxcolor = j;
// LINE 170:
_T173:
		}
// LINE 171:
_T178:
		__asm        mov    eax, maxcolor;
		__asm        mov    ecx, hdr;
		__asm        mov    ecx, [ecx+0x14];
		__asm        mov    edx, i;
		__asm        mov    [ecx+edx*4], eax;
	}
// LINE 174:
_T18c:
	return 0x0;
// LINE 175:
}

// FUNCTION: COPTER_D 0x004d8e58
int32_t CreateTiledTexColors(uint32_t * tabentry, /*packed*/ struct VRBmpHdr *bhdr, /*packed*/ struct VRResource *res, int32_t create_new) {
	/*bp-0x4*/   int32_t notiles;
	/*bp-0x8*/   int32_t maxval;
	/*bp-0xc*/   uint32_t * bmpcolors;
	/*bp-0x10*/  int32_t i;
	/*bp-0x14*/  int32_t j;
	/*bp-0x18*/  int32_t k;
	/*bp-0x1c*/  int32_t maxcolor;
	/*bp-0x20*/  unsigned char * ltptr;
	/*bp-0x24*/  unsigned char * tptr;

// LINE 201:
	__asm        mov    ecx, bhdr;
	__asm        mov    eax, 0x100;
	__asm        cdq;
	__asm        idiv   dword ptr [ecx];
	__asm        mov    notiles, eax;
// LINE 202:
	notiles = (notiles * notiles);
// LINE 205:
	__asm        cmp    create_new, 1;
	__asm        jne    _T64;
// LINE 207:
	bmpcolors = S2Alloc(res->mempoolid, (notiles << 0x2));
// LINE 208:
	tabentry[0] = bmpcolors;
// LINE 209:
	__asm        mov    eax, tabentry;
	__asm        cmp    dword ptr [eax], 0;
	__asm        jne    _T5f;
// LINE 210:
	return 0x0;
// LINE 212:
_T5f:
	__asm        jmp    _FOR_78;
// LINE 214:
_T64:
	bmpcolors = tabentry[0];
// LINE 224:
_FOR_78:
	for (i = 0x0; (i < notiles); i++) {
// LINE 226:
		__asm        mov    eax, i;
		__asm        mov    ecx, bhdr;
		__asm        mov    eax, [ecx+eax*8+0x10];
		__asm        mov    tptr, eax;
		__asm        mov    eax, tptr;
		__asm        mov    ltptr, eax;
// LINE 228:
		memset(0x606a78, 0x0, 0x400);
// LINE 231:
_FOR_ba:
		for (j = 0x0; (bhdr->info.height > j); j++) {
// LINE 233:
_FOR_d8:
			for (k = 0x0; (bhdr->info.width > k); k++) {
// LINE 235:
				__asm        mov    eax, tptr;
				__asm        xor    ecx, ecx;
				__asm        mov    cl, [eax];
				__asm        inc    S_ctrs[ecx*4];
// LINE 236:
				tptr++;
			}
// LINE 238:
_Tff:
			ltptr += 0x100;
// LINE 239:
			tptr = ltptr;
		}
// LINE 243:
_T111:
		maxval = 0x0;
// LINE 244:
_FOR_124:
		for (j = 0x0; (j < 0x100); j++) {
// LINE 246:
			__asm        mov    eax, j;
			__asm        mov    ecx, maxval;
			__asm        cmp    S_ctrs[eax*4], ecx;
			__asm        jle    _T15a;
// LINE 248:
			__asm        mov    eax, j;
			__asm        mov    eax, S_ctrs[eax*4];
			__asm        mov    maxval, eax;
// LINE 249:
			maxcolor = j;
// LINE 251:
_T15a:
		}
// LINE 252:
_T15f:
		bmpcolors[i] = maxcolor;
	}
// LINE 255:
_T170:
	return 0x1;
// LINE 256:
}

// FUNCTION: COPTER_D 0x004d8fd7
void VRFaceSetTexColor(int32_t face) {
	/*bp-0x4*/   int32_t loword;
	/*bp-0x8*/   /*packed*/ struct _FaceHdr *fh;
	/*bp-0xc*/   int32_t * tilebmpcolors;
	/*bp-0x10*/  int32_t hiword;

// LINE 272:
	fh = face;
// LINE 281:
	__asm        mov    eax, fh;
	__asm        test   byte ptr [eax+8], 1;
	__asm        jne    _T50;

	__asm        mov    eax, fh;
	__asm        test   byte ptr [eax+9], 8;
	__asm        jne    _T50;

	__asm        mov    eax, fh;
	__asm        test   byte ptr [eax+9], 0x80;
	__asm        jne    _T50;

	__asm        mov    eax, fh;
	__asm        test   byte ptr [eax+0xA], 1;
	__asm        jne    _T50;

	__asm        mov    eax, fh;
	__asm        test   byte ptr [eax+9], 0x40;
	__asm        je     _T55;
// LINE 282:
_T50:
	return;
// LINE 288:
_T55:
	hiword = (fh->Bitmap >> 0x10);
// LINE 289:
	loword = (fh->Bitmap & 0xffff);
// LINE 291:
	__asm        cmp    hiword, 0;
	__asm        je     _T9e;
// LINE 293:
	__asm        mov    eax, S_texres;
	__asm        mov    eax, [eax+0x14];
	__asm        mov    ecx, hiword;
	__asm        mov    eax, [eax+ecx*4];
	__asm        mov    tilebmpcolors, eax;
// LINE 294:
	fh->Attrib2 = tilebmpcolors[loword];
// LINE 296:
	__asm        jmp    _Tb2;
// LINE 298:
_T9e:
	__asm        mov    eax, S_texres;
	__asm        mov    eax, [eax+0x14];
	__asm        mov    ecx, loword;
	__asm        mov    eax, [eax+ecx*4];
	__asm        mov    ecx, fh;
	__asm        mov    [ecx+0xC], eax;
// LINE 301:
_Tb2:
	return;
// LINE 302:
}

// FUNCTION: COPTER_D 0x004d9093
int32_t VRGetTexColor(int32_t bitmap) {
	/*bp-0x4*/   int32_t loword;
	/*bp-0x8*/   int32_t color;
	/*bp-0xc*/   int32_t * tilebmpcolors;
	/*bp-0x10*/  int32_t hiword;

// LINE 322:
	hiword = (bitmap >> 0x10);
// LINE 323:
	loword = (bitmap & 0xffff);
// LINE 325:
	__asm        cmp    hiword, 0;
	__asm        je     _T49;
// LINE 327:
	__asm        mov    eax, S_texres;
	__asm        mov    eax, [eax+0x14];
	__asm        mov    ecx, hiword;
	__asm        mov    eax, [eax+ecx*4];
	__asm        mov    tilebmpcolors, eax;
// LINE 328:
	color = tilebmpcolors[loword];
// LINE 330:
	__asm        jmp    _T5a;
// LINE 332:
_T49:
	__asm        mov    eax, S_texres;
	__asm        mov    eax, [eax+0x14];
	__asm        mov    ecx, loword;
	__asm        mov    eax, [eax+ecx*4];
	__asm        mov    color, eax;
// LINE 334:
_T5a:
	return color;
// LINE 335:
}

// FUNCTION: COPTER_D 0x004d90fa
/*packed*/ struct COLOR_SHADE* VRGetColorShade(int32_t color) {
	/*bp-0x4*/   /*packed*/ struct COLOR_SHADE *cptr;

// LINE 348:
	cptr = 0x5adc10;
// LINE 350:
	__asm        cmp    color, 0;
	__asm        jl     _T27;

	__asm        cmp    color, 0x100;
	__asm        jle    _LOOP_2e;
// LINE 351:
_T27:
	return 0x0;
// LINE 355:
_LOOP_2e:
	for (;;) {
// LINE 355:
_LOOP_2e:
		__asm        mov    eax, cptr;
		__asm        mov    ecx, color;
		__asm        cmp    [eax], ecx;
		__asm        jg     _T58;

		__asm        mov    eax, cptr;
		__asm        mov    eax, [eax+4];
		__asm        mov    ecx, cptr;
		__asm        add    eax, [ecx];
		__asm        cmp    eax, color;
		__asm        jle    _T58;
// LINE 356:
		return cptr;
// LINE 358:
_T58:
		cptr += 0x8;
	}
// LINE 361:
}

// FUNCTION: COPTER_D 0x004d9160
void VRSetIntensities(int32_t ambient, int32_t var1, int32_t var2, int32_t var3) {
// LINE 371:
	S_ambient = ambient;
// LINE 372:
	S_intensity1 = var1;
// LINE 373:
	S_intensity2 = var2;
// LINE 374:
	S_intensity3 = var3;
// LINE 375:
}

// FUNCTION: COPTER_D 0x004d918b
void VRObjSetShading(int32_t obj) {
	/*bp-0x4*/   int32_t level;
	/*bp-0x8*/   int32_t diffuse;
	/*bp-0x2c*/  /*packed*/ struct VRObjInfo oinfo; // 0x24 bytes
	/*bp-0x30*/  int32_t face;
	/*bp-0x34*/  int32_t color;
	/*bp-0x38*/  /*packed*/ struct _FaceHdr *fh;
	/*bp-0x3c*/  int32_t i;
	/*bp-0x40*/  int32_t intensity;
	/*bp-0x44*/  /*packed*/ struct COLOR_SHADE *cptr;

// LINE 399:
	_VRGetObjInfo(obj, oinfo.Faces);
// LINE 400:
	__asm        mov    eax, obj;
	__asm        push   eax;
	__asm        call   _VRGetFirstFace;
	__asm        add    esp, 4;
	__asm        mov    face, eax;
// LINE 401:
_FOR_34:
	for (i = 0x0; (oinfo.Faces > i); i++) {
// LINE 403:
		fh = face;
// LINE 406:
		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+8], 4;
		__asm        jne    _T70;

		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+9], 0x80;
		__asm        jne    _T70;

		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+0xA], 1;
		__asm        je     _T75;
// LINE 408:
_T70:
		__asm        jmp    next_face;
// LINE 411:
_T75:
		cptr = VRGetColorShade(fh->Attrib2);
// LINE 412:
		__asm        cmp    cptr, 0;
		__asm        jne    _T96;

		__asm        jmp    next_face;
// LINE 416:
_T96:
		intensity = 0x0;
// LINE 419:
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax+8];
		__asm        push   eax;
		__asm        mov    eax, G_litevect1.z;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        mov    ebx, eax;
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax+4];
		__asm        push   eax;
		__asm        mov    eax, G_litevect1.y;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        add    ebx, eax;
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax];
		__asm        push   eax;
		__asm        mov    eax, G_litevect1.x;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        add    ebx, eax;
		__asm        mov    diffuse, ebx;
// LINE 421:
		__asm        cmp    diffuse, 0;
		__asm        jle    _T10c;
// LINE 422:
		__asm        mov    eax, S_intensity1;
		__asm        push   eax;
		__asm        mov    eax, diffuse;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        mov    intensity, eax;
// LINE 427:
_T10c:
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax+8];
		__asm        push   eax;
		__asm        mov    eax, G_litevect2.z;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        mov    ebx, eax;
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax+4];
		__asm        push   eax;
		__asm        mov    eax, G_litevect2.y;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        add    ebx, eax;
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax];
		__asm        push   eax;
		__asm        mov    eax, G_litevect2.x;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        add    ebx, eax;
		__asm        mov    diffuse, ebx;
// LINE 429:
		__asm        cmp    diffuse, 0;
		__asm        jle    _T17b;
// LINE 430:
		__asm        mov    eax, S_intensity2;
		__asm        push   eax;
		__asm        mov    eax, diffuse;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        add    intensity, eax;
// LINE 433:
_T17b:
		intensity += S_ambient;
// LINE 435:
		__asm        cmp    intensity, 0x10000;
		__asm        jl     _T1a4;
// LINE 437:
		color = ((cptr->count + cptr->base) - 1);
// LINE 439:
		__asm        jmp    _T1cc;
// LINE 441:
_T1a4:
		__asm        mov    eax, intensity;
		__asm        push   eax;
		__asm        mov    eax, cptr;
		__asm        mov    eax, [eax+4];
		__asm        shl    eax, 0x10;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        mov    level, eax;
// LINE 442:
		__asm        sar    level, 0x10;
// LINE 443:
		color = (cptr->base + level);
// LINE 449:
_T1cc:
		__asm        cmp    color, 0xEA;
		__asm        jl     _T1f9;

		__asm        cmp    color, 0xF5;
		__asm        jg     _T1f9;
// LINE 451:
		color = (0xf5 - (color - 0xea));
// LINE 454:
_T1f9:
		fh->Attrib2 = color;
// LINE 457:
		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+8], 1;
		__asm        jne    _T21c;

		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+9], 8;
		__asm        je     next_face;
_T21c:
		__asm        mov    eax, fh;
		__asm        cmp    dword ptr [eax+0x10], 0xB;
		__asm        je     next_face;
// LINE 458:
		fh->Bitmap = color;
// LINE 461:
next_face:
		__asm        mov    eax, face;
		__asm        push   eax;
		__asm        call   _VRGetNextFace;
		__asm        add    esp, 4;
		__asm        mov    face, eax;
	}
// LINE 463:
__RETURN:
}

// FUNCTION: COPTER_D 0x004d93d6
void VRDyObjSetShading(int32_t obj, int32_t *tmat[4][4]) {
	/*bp-0x4*/   int32_t level;
	/*bp-0x8*/   int32_t diffuse;
	/*bp-0xc*/   int32_t color;
	/*bp-0x10*/  /*packed*/ struct _FaceHdr *fh;
	/*bp-0x14*/  int32_t i;
	/*bp-0x18*/  int32_t intensity;
	/*bp-0x1c*/  /*packed*/ struct ObjectHdr *oh;
	/*bp-0x20*/  /*packed*/ struct COLOR_SHADE *cptr;
	/*bp-0x2c*/  /*packed*/ struct Point3d rotlitevect; // 0xc bytes

// LINE 481:
	oh = obj;
// LINE 489:
	__asm        mov    eax, oh;
	__asm        test   byte ptr [eax+1], 1;
	__asm        jne    _T21;
// LINE 490:
	return;
// LINE 493:
_T21:
	_VRRotateP3d(0x5add50, rotlitevect.x, tmat);
// LINE 496:
	fh = oh->FacePtr;
// LINE 497:
_FOR_4b:
	for (i = 0x0; (oh->NFaces > i); i++) {
// LINE 500:
		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+8], 4;
		__asm        jne    _T84;

		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+9], 0x80;
		__asm        jne    _T84;

		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+0xA], 1;
		__asm        je     _T89;
// LINE 502:
_T84:
		__asm        jmp    next_face;
// LINE 505:
_T89:
		cptr = VRGetColorShade(fh->Attrib2);
// LINE 506:
		__asm        cmp    cptr, 0;
		__asm        jne    _Taa;

		__asm        jmp    next_face;
// LINE 510:
_Taa:
		intensity = 0x0;
// LINE 513:
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax+4];
		__asm        push   eax;
		__asm        mov    eax, rotlitevect.y;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        mov    ebx, eax;
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax+8];
		__asm        push   eax;
		__asm        mov    eax, rotlitevect.z;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        add    ebx, eax;
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x2C];
		__asm        mov    eax, [eax];
		__asm        push   eax;
		__asm        mov    eax, rotlitevect.x;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        add    ebx, eax;
		__asm        mov    diffuse, ebx;
// LINE 515:
		__asm        cmp    diffuse, 0;
		__asm        jle    _T11a;
// LINE 516:
		__asm        mov    eax, S_intensity3;
		__asm        push   eax;
		__asm        mov    eax, diffuse;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        mov    intensity, eax;
// LINE 519:
_T11a:
		intensity += S_ambient;
// LINE 521:
		__asm        cmp    intensity, 0x10000;
		__asm        jl     _T143;
// LINE 523:
		color = ((cptr->count + cptr->base) - 1);
// LINE 525:
		__asm        jmp    _T16b;
// LINE 527:
_T143:
		__asm        mov    eax, intensity;
		__asm        push   eax;
		__asm        mov    eax, cptr;
		__asm        mov    eax, [eax+4];
		__asm        shl    eax, 0x10;
		__asm        push   eax;
		__asm        call   _FixedMul;
		__asm        add    esp, 8;
		__asm        mov    level, eax;
// LINE 528:
		__asm        sar    level, 0x10;
// LINE 529:
		color = (cptr->base + level);
// LINE 531:
_T16b:
		fh->Attrib2 = color;
// LINE 534:
		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+8], 1;
		__asm        jne    _T18e;

		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+9], 8;
		__asm        je     next_face;
_T18e:
		__asm        mov    eax, fh;
		__asm        cmp    dword ptr [eax+0x10], 0xB;
		__asm        je     next_face;
// LINE 535:
		fh->Bitmap = color;
// LINE 539:
next_face:
		fh = fh->NextFace;
	}
// LINE 541:
__RETURN:
}

// FUNCTION: COPTER_D 0x004d958c
void VRTexTileSqFace(int32_t face, /*packed*/ struct VRResource *res, int32_t tf) {
	/*bp-0x4*/   int32_t minu;
	/*bp-0x8*/   int32_t stvert;
	/*bp-0xc*/   /*packed*/ struct _FaceHdr *fh;
	/*bp-0x10*/  int32_t minv;
	/*bp-0x14*/  int32_t i;

// LINE 563:
	fh = face;
// LINE 569:
	__asm        mov    eax, fh;
	__asm        cmp    dword ptr [eax+4], 4;
	__asm        je     _T21;
// LINE 570:
	return;
// LINE 573:
_T21:
	stvert = 0x0;
// LINE 574:
	minu = 0x1e0000;
// LINE 575:
	minv = 0x1e0000;
// LINE 576:
_FOR_42:
	for (i = 0x0; (i < 0x4); i++) {
// LINE 578:
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x28];
		__asm        mov    ecx, i;
		__asm        mov    edx, minu;
		__asm        cmp    [eax+ecx*8], edx;
		__asm        jge    _T9f;

		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x28];
		__asm        mov    ecx, i;
		__asm        mov    edx, minv;
		__asm        cmp    [eax+ecx*8+4], edx;
		__asm        jge    _T9f;
// LINE 580:
		stvert = i;
// LINE 581:
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x28];
		__asm        mov    ecx, i;
		__asm        mov    eax, [eax+ecx*8];
		__asm        mov    minu, eax;
// LINE 582:
		__asm        mov    eax, fh;
		__asm        mov    eax, [eax+0x28];
		__asm        mov    ecx, i;
		__asm        mov    eax, [eax+ecx*8+4];
		__asm        mov    minv, eax;
// LINE 584:
_T9f:
	}
// LINE 587:
_Ta4:
	__asm        mov    eax, stvert;
	__asm        and    eax, 3;
	__asm        mov    ecx, fh;
	__asm        mov    ecx, [ecx+0x20];
	__asm        mov    dword ptr [ecx+eax*8], 0;
// LINE 588:
	__asm        mov    eax, stvert;
	__asm        and    eax, 3;
	__asm        mov    ecx, fh;
	__asm        mov    ecx, [ecx+0x20];
	__asm        mov    dword ptr [ecx+eax*8+4], 0;
// LINE 589:
	__asm        mov    eax, tf;
	__asm        shl    eax, 0x16;
	__asm        mov    ecx, stvert;
	__asm        inc    ecx;
	__asm        and    ecx, 3;
	__asm        mov    edx, fh;
	__asm        mov    edx, [edx+0x20];
	__asm        mov    [edx+ecx*8], eax;
// LINE 590:
	__asm        mov    eax, stvert;
	__asm        inc    eax;
	__asm        and    eax, 3;
	__asm        mov    ecx, fh;
	__asm        mov    ecx, [ecx+0x20];
	__asm        mov    dword ptr [ecx+eax*8+4], 0;
// LINE 591:
	__asm        mov    eax, tf;
	__asm        shl    eax, 0x16;
	__asm        mov    ecx, stvert;
	__asm        sub    ecx, 2;
	__asm        and    ecx, 3;
	__asm        mov    edx, fh;
	__asm        mov    edx, [edx+0x20];
	__asm        mov    [edx+ecx*8], eax;
// LINE 592:
	__asm        mov    eax, tf;
	__asm        shl    eax, 0x16;
	__asm        mov    ecx, stvert;
	__asm        sub    ecx, 2;
	__asm        and    ecx, 3;
	__asm        mov    edx, fh;
	__asm        mov    edx, [edx+0x20];
	__asm        mov    [edx+ecx*8+4], eax;
// LINE 593:
	__asm        mov    eax, stvert;
	__asm        dec    eax;
	__asm        and    eax, 3;
	__asm        mov    ecx, fh;
	__asm        mov    ecx, [ecx+0x20];
	__asm        mov    dword ptr [ecx+eax*8], 0;
// LINE 594:
	__asm        mov    eax, tf;
	__asm        shl    eax, 0x16;
	__asm        mov    ecx, stvert;
	__asm        dec    ecx;
	__asm        and    ecx, 3;
	__asm        mov    edx, fh;
	__asm        mov    edx, [edx+0x20];
	__asm        mov    [edx+ecx*8+4], eax;
// LINE 597:
	fh->Plotter = 0x12;
// LINE 598:
	VRFaceSetTexColor(face);
// LINE 599:
	fh->Bitmap = VRInt2BmpHdr(res, fh->Bitmap);
// LINE 600:
}

// FUNCTION: COPTER_D 0x004d9712
void VRObjSetGouraudShade(/*packed*/ struct ObjectHdr *oh, /*packed*/ struct Point3d *vnorms) {
	/*bp-0x4*/   int32_t vertidx;
	/*bp-0x8*/   int32_t level;
	/*bp-0xc*/   int32_t diffuse;
	/*bp-0x10*/  int32_t color;
	/*bp-0x14*/  /*packed*/ struct _FaceHdr *fh;
	/*bp-0x18*/  int32_t * faceverts;
	/*bp-0x1c*/  int32_t i;
	/*bp-0x20*/  int32_t intensity;
	/*bp-0x24*/  int32_t j;
	/*bp-0x28*/  /*packed*/ struct COLOR_SHADE *cptr;
	/*bp-0x2c*/  /*packed*/ struct Point3d *vn;

// LINE 621:
	fh = oh->FacePtr;
// LINE 622:
_FOR_1e:
	for (i = 0x0; (oh->NFaces > i); i++) {
// LINE 624:
		__asm        mov    eax, fh;
		__asm        test   byte ptr [eax+9], 0x40;
		__asm        jne    _T42;

		__asm        jmp    next_face;
// LINE 625:
_T42:
		cptr = VRGetColorShade(fh->Attrib2);
// LINE 626:
		__asm        cmp    cptr, 0;
		__asm        jne    _T63;

		__asm        jmp    next_face;
// LINE 633:
_T63:
		faceverts = fh->PlyVerts;
// LINE 634:
_FOR_78:
		for (j = 0x0; (fh->Nverts > j); j++) {
// LINE 641:
			vertidx = (faceverts[j] >> 0x4);
// LINE 642:
			__asm        mov    eax, vertidx;
			__asm        lea    eax, [eax+eax*2];
			__asm        shl    eax, 2;
			__asm        add    eax, vnorms;
			__asm        mov    vn, eax;
// LINE 646:
			intensity = 0x0;
// LINE 649:
			__asm        mov    eax, vn;
			__asm        mov    eax, [eax+4];
			__asm        push   eax;
			__asm        mov    eax, G_litevect1.y;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        mov    ebx, eax;
			__asm        mov    eax, vn;
			__asm        mov    eax, [eax];
			__asm        push   eax;
			__asm        mov    eax, G_litevect1.x;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        add    ebx, eax;
			__asm        mov    eax, vn;
			__asm        mov    eax, [eax+8];
			__asm        push   eax;
			__asm        mov    eax, G_litevect1.z;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        add    ebx, eax;
			__asm        mov    diffuse, ebx;
// LINE 651:
			__asm        cmp    diffuse, 0;
			__asm        jle    _T115;
// LINE 652:
			__asm        mov    eax, S_intensity1;
			__asm        push   eax;
			__asm        mov    eax, diffuse;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        mov    intensity, eax;
// LINE 657:
_T115:
			__asm        mov    eax, vn;
			__asm        mov    eax, [eax+4];
			__asm        push   eax;
			__asm        mov    eax, G_litevect2.y;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        mov    ebx, eax;
			__asm        mov    eax, vn;
			__asm        mov    eax, [eax];
			__asm        push   eax;
			__asm        mov    eax, G_litevect2.x;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        add    ebx, eax;
			__asm        mov    eax, vn;
			__asm        mov    eax, [eax+8];
			__asm        push   eax;
			__asm        mov    eax, G_litevect2.z;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        add    ebx, eax;
			__asm        mov    diffuse, ebx;
// LINE 659:
			__asm        cmp    diffuse, 0;
			__asm        jle    _T17b;
// LINE 660:
			__asm        mov    eax, S_intensity2;
			__asm        push   eax;
			__asm        mov    eax, diffuse;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        add    intensity, eax;
// LINE 663:
_T17b:
			intensity += S_ambient;
// LINE 665:
			__asm        cmp    intensity, 0x10000;
			__asm        jl     _T1a4;
// LINE 667:
			color = ((cptr->count + cptr->base) - 1);
// LINE 669:
			__asm        jmp    _T1cc;
// LINE 671:
_T1a4:
			__asm        mov    eax, intensity;
			__asm        push   eax;
			__asm        mov    eax, cptr;
			__asm        mov    eax, [eax+4];
			__asm        shl    eax, 0x10;
			__asm        push   eax;
			__asm        call   _FixedMul;
			__asm        add    esp, 8;
			__asm        mov    level, eax;
// LINE 672:
			__asm        sar    level, 0x10;
// LINE 673:
			color = (cptr->base + level);
// LINE 677:
_T1cc:
			__asm        mov    eax, color;
			__asm        shl    eax, 0x10;
			__asm        mov    ecx, fh;
			__asm        mov    ecx, [ecx+0x20];
			__asm        mov    edx, j;
			__asm        mov    [ecx+edx*8], eax;
		}
// LINE 681:
next_face:
		fh = fh->NextFace;
	}
// LINE 683:
__RETURN:
}

// FUNCTION: COPTER_D 0x004d9907
void VRObjSetTranslucent(int32_t obj, /*packed*/ struct VRResource *res, int32_t bitmap) {
	/*bp-0x4*/   /*packed*/ struct VRBmpHdr *bhdr;
	/*bp-0x8*/   /*packed*/ struct _FaceHdr *fh;
	/*bp-0xc*/   int32_t i;
	/*bp-0x10*/  /*packed*/ struct ObjectHdr *oh;

// LINE 699:
	oh = obj;
// LINE 705:
	bhdr = VRInt2BmpHdr(res, bitmap);
// LINE 708:
	fh = oh->FacePtr;
// LINE 709:
_FOR_37:
	for (i = 0x0; (oh->NFaces > i); i++) {
// LINE 711:
		fh->Attrib1 = 0x3;
// LINE 712:
		fh->Plotter = 0xb;
// LINE 713:
		fh->Bitmap = bhdr;
// LINE 714:
		fh = fh->NextFace;
	}
// LINE 716:
__RETURN:
}

// FUNCTION: COPTER_D 0x004d997f
void VRFaceSetColor(int32_t face, int32_t color) {
	/*bp-0x4*/   /*packed*/ struct _FaceHdr *fh;

// LINE 728:
	fh = face;
// LINE 730:
	fh->Attrib2 = color;
// LINE 731:
	fh->Bitmap = color;
// LINE 732:
}



// Contribution: 3:00016c10-00016d6b Module: 132, 8 byte alignment, initialized_data, read, write, 
// GLOBAL: COPTER_D 0x005adc10
/*packed*/ struct COLOR_SHADE G_shadetab[36] = { 0 /* todo */ };

// GLOBAL: COPTER_D 0x005add30
/*packed*/ struct Point3d G_litevect1 = { 0 /* todo */ };

// GLOBAL: COPTER_D 0x005add40
/*packed*/ struct Point3d G_litevect2 = { 0 /* todo */ };

// GLOBAL: COPTER_D 0x005add50
/*packed*/ struct Point3d G_litevect3 = { 0 /* todo */ };

// GLOBAL: COPTER_D 0x005add5c
static int32_t S_ambient = 6553;

// GLOBAL: COPTER_D 0x005add60
static int32_t S_intensity1 = 26214;

// GLOBAL: COPTER_D 0x005add64
static int32_t S_intensity2 = 19660;

// GLOBAL: COPTER_D 0x005add68
static int32_t S_intensity3 = 52428;



// Contribution: 3:0006fa70-0006fe77 Module: 132, 8 byte alignment, uninitialized_data, read, write, 
// GLOBAL: COPTER_D 0x00606a70
static /*packed*/ struct TEXT_Resource *S_texres;

// GLOBAL: COPTER_D 0x00606a78
static int32_t S_ctrs[256];



// Unknown globals:
// The PDB was slightly corrupted and we aren't sure which file these globals belong to.

// WARNING: this global might actually belong to: Io.obj
// GLOBAL: COPTER_D 0x00654cdc
int32_t VRClearClr; // Contrib missing

