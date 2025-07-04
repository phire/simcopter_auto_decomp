// Module: Flatfile.obj
// Source: C:\Copter\Source\X\File\Flatfile.cpp
// autogenerated by simcopter_tool from PDB file

// Type: /*unpacked*/ class FlatFile (forward reference);
// VTABLE: COPTER_D 0x00593620
class FlatFile{ // not packed(0x110 bytes) TI: 0x32f4
	enum /* __unnamed */ {
		kMaxNameLen = 255,
	};
protected:
	/*+0x4*/   /*unpacked*/ class FlatFile *fNext;
	/*+0x8*/   unsigned char fName[256]; // 0x100 bytes
	/*+0x108*/ long fFileID;
	/*+0x10c*/ /*unpacked*/ struct _iobuf *fFile;
	long UniqueID();
private:
	static /*unpacked*/ class FlatFile *sList;
	static long sLastFileID;
	void Link();
	void Unlink();
	unsigned short Exclusive();
public:
	void FlatFile();
	virtual void ~FlatFile(); // vtable+0x0
	// calltype: NearC
	static /*unpacked*/ class FlatFile* FindByName(unsigned char *);
	unsigned short SameFile(/*unpacked*/ class FlatFile*);
	virtual long Open(unsigned char *); // vtable+0x4
	virtual long Open(char *); // vtable+0x8
	virtual long Close(); // vtable+0xc
	void OpenFromOtherFile(/*unpacked*/ class FlatFile*);
	long GetFileName(unsigned char *);
	unsigned short ValidFile();
	long ReadBlock(void * __ptr32, long *);
	long Read4(long *);
	long Read2(short *);
	long Read1(signed char *);
	long SetPos(long);
	long Advance(long);
	// calltype: NearC
	static short CheckForLeaks();
	long GetFileID();
	/*unpacked*/ struct _iobuf* GetFile();
};

// Type: long;

// Type: void;

// Type: unsigned char *;

// Type: char *;

// Type: unsigned char;

// Type: char;

// Type: void * __ptr32;

// Type: long *;

// Type: unsigned short;

// Type: short *;

// Type: signed char *;

// Type: short;

// Type: uint32_t;



// Contribution: 1:0015b270-0015bac4 Module: 195, 16 byte alignment, code, execute, read, 
// FUNCTION: COPTER_D 0x0055c270
void FlatFile::FlatFile() {

	this-><vftable> = 0x593620;
// LINE 14:
	this->fName[0] = 0x0;
// LINE 19:
	this->fFile = 0x0;
// LINE 21:
	this->fFileID = 0x0;
// LINE 22:
	this->FlatFile::Link();
// LINE 23:
	return;

	__asm        mov    eax, this;
}

// FUNCTION: COPTER_D 0x0055c2bb
void FlatFile::~FlatFile() {

	this-><vftable> = 0x593620;
// LINE 30:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x10C], 0;
	__asm        je     _T2d;

	this->FlatFile::Close();
// LINE 32:
_T2d:
	this->FlatFile::Unlink();
// LINE 33:
	return;
}

// FUNCTION: COPTER_D 0x0055c2fa
/*unpacked*/ class FlatFile* FlatFile::FindByName(unsigned char * name) {
	/*bp-0x4*/   /*unpacked*/ class FlatFile *srch;

// LINE 44:
_FOR_16:
	for (srch = FlatFile::sList; (srch != 0x0); srch = srch->fNext) {
// LINE 46:
		__asm        mov    ecx, srch;
		__asm        call   FlatFile::ValidFile;
		__asm        movzx  eax, ax;
		__asm        test   eax, eax;
		__asm        je     _T5f;

		__asm        mov    eax, srch;
		__asm        add    eax, 8;
		__asm        push   eax;
		__asm        mov    eax, name;
		__asm        push   eax;
		__asm        call   PStrCompare;
		__asm        add    esp, 8;
		__asm        test   eax, eax;
		__asm        jne    _T5f;

		return srch;
// LINE 47:
_T5f:
	}
// LINE 48:
_T64:
	return 0x0;
// LINE 49:
}

// FUNCTION: COPTER_D 0x0055c36a
long FlatFile::Open(char * name) {
	/*bp-0x100*/ unsigned char pstrbuff[256]; // 0x100 bytes

// LINE 54:
Memory::BlockMove(name, pstrbuff[0], 0x100);
// LINE 55:
	CtoPstr(pstrbuff[0]);
// LINE 56:
	__asm        lea    eax, pstrbuff[0];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
	__asm        jmp    __RETURN;
// LINE 57:
__RETURN:
}

// FUNCTION: COPTER_D 0x0055c3c7
long FlatFile::Open(unsigned char * name) {
	/*bp-0x4*/   long err;
	/*bp-0x8*/   /*unpacked*/ class FlatFile *same;

// LINE 61:
	__asm        mov    ecx, this;
	__asm        call   FlatFile::ValidFile;
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        je     _T32;

	return 0xffffffd1;
// LINE 63:
_T32:
	err = 0x0;
// LINE 65:
	same = FlatFile::FindByName(name);
// LINE 67:
	__asm        cmp    same, 0;
	__asm        jne    _T142;
// LINE 73:
// Block start:
	/*bp-0xc*/   long test;
	/*bp-0x10c*/ char cstrbuff[256]; // 0x100 bytes
_FOR_5e:
	test = 0x1;
	__asm        jmp    _FOR_COND_5e;
	{
_FOR_NEXT_5e:
		test++;
_FOR_COND_5e:
		__asm        mov    eax, name;
		__asm        xor    ecx, ecx;
		__asm        mov    cl, [eax];
		__asm        cmp    ecx, test;
		__asm        jl     _Tad;
// LINE 74:
		__asm        cmp    test, 2;
		__asm        je     _Ta8;

		__asm        mov    eax, test;
		__asm        mov    ecx, name;
		__asm        xor    edx, edx;
		__asm        mov    dl, [eax+ecx];
		__asm        cmp    edx, 0x3A;
		__asm        jne    _Ta8;
// LINE 75:
		doAssert(0x5bddec, 0x4b, 0x5bdde0, 0x8c085);
// LINE 77:
_Ta8:
		__asm        jmp    _FOR_NEXT_5e;
	}
// LINE 80:
_Tad:
Memory::BlockMove(name, cstrbuff[0], 0x100);
// LINE 81:
	PtoCstr(cstrbuff[0]);
// LINE 82:
	this->fFile = fopen(cstrbuff[0], 0x5bde14);
// LINE 83:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x10C], 0;
	__asm        je     _T11a;

	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x10C], 0xFFFFFFFF;
	__asm        jne    _T121;
_T11a:
	err = 0xffffffce;
// LINE 85:
_T121:
FlatFile::sLastFileID++;
	this->fFileID = FlatFile::sLastFileID;
	__asm        jmp    _T13d;
// LINE 87:
// Block end:
_T13d:
	__asm        jmp    _T16c;
// LINE 92:
_T142:
	this->fFile = same->fFile;
// LINE 94:
	this->fFileID = same->fFileID;
// LINE 97:
_T16c:
	__asm        cmp    err, 0;
	__asm        je     _T195;
// LINE 99:
	this->fName[0] = 0x0;
// LINE 100:
	this->fFileID = 0x0;
// LINE 102:
	__asm        jmp    _T1b0;
// LINE 104:
_T195:
Memory::BlockMove(name, (this + 0x8), 0x100);
// LINE 107:
_T1b0:
	return err;
// LINE 108:
}

// FUNCTION: COPTER_D 0x0055c586
void FlatFile::OpenFromOtherFile(/*unpacked*/ class FlatFile *other) {
	/*bp-0x100*/ unsigned char otherName[256]; // 0x100 bytes

// LINE 112:
	other->FlatFile::GetFileName(otherName[0]);
// LINE 113:
	__asm        lea    eax, otherName[0];
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        call   dword ptr [eax+4];
// LINE 114:
	return;
}

// FUNCTION: COPTER_D 0x0055c5cb
long FlatFile::Close() {
	/*bp-0x4*/   long err;

// LINE 118:
	__asm        mov    ecx, this;
	__asm        call   FlatFile::ValidFile;
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        jne    _T38;

	doAssert(0x5bde34, 0x76, 0x5bde18, 0x8c085);
// LINE 131:
_T38:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x10C], 0;
	__asm        jne    _T54;
// LINE 132:
	err = 0xffffffcf;
// LINE 133:
	__asm        jmp    _Ta0;
_T54:
	__asm        mov    ecx, this;
	__asm        call   FlatFile::Exclusive;
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        je     _T99;
// LINE 135:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x10C];
	__asm        push   eax;
	__asm        call   fclose;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        je     _T8d;

	err = 0xffffffce;
// LINE 136:
	__asm        jmp    _T94;
_T8d:
	err = 0x0;
// LINE 138:
_T94:
	__asm        jmp    _Ta0;
// LINE 139:
_T99:
	err = 0x0;
// LINE 142:
_Ta0:
	__asm        cmp    err, 0;
	__asm        jne    _Tc4;
// LINE 147:
	this->fFile = 0x0;
// LINE 149:
	this->fFileID = 0x0;
// LINE 151:
_Tc4:
	return err;
// LINE 152:
}

// FUNCTION: COPTER_D 0x0055c69c
long FlatFile::ReadBlock(void * __ptr32 buffer, long * blockSize) {
	/*bp-0x4*/   long actualSize;

// LINE 159:
	__asm        mov    ecx, this;
	__asm        call   FlatFile::ValidFile;
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        jne    _T29;

	return 0xffffffcf;
// LINE 172:
_T29:
	actualSize = fread(buffer, 0x1, blockSize[0], this->fFile);
// LINE 173:
	__asm        mov    eax, blockSize;
	__asm        mov    ecx, actualSize;
	__asm        cmp    [eax], ecx;
	__asm        je     _T67;

	return 0xffffffd0;
// LINE 174:
	__asm        jmp    __RETURN;
_T67:
	return 0x0;
// LINE 176:
__RETURN:
}

// FUNCTION: COPTER_D 0x0055c711
long FlatFile::SetPos(long fromStart) {
// LINE 180:
	__asm        mov    ecx, this;
	__asm        call   FlatFile::ValidFile;
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        jne    _T29;

	return 0xffffffcf;
// LINE 185:
_T29:
	__asm        push   0;
	__asm        mov    eax, fromStart;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x10C];
	__asm        push   eax;
	__asm        call   fseek;
	__asm        add    esp, 0xC;
	__asm        test   eax, eax;
	__asm        je     _T58;

	return 0xffffffce;
// LINE 186:
	__asm        jmp    __RETURN;
_T58:
	return 0x0;
// LINE 188:
__RETURN:
}

// FUNCTION: COPTER_D 0x0055c777
long FlatFile::Advance(long skipAmt) {
// LINE 192:
	__asm        mov    ecx, this;
	__asm        call   FlatFile::ValidFile;
	__asm        movzx  eax, ax;
	__asm        test   eax, eax;
	__asm        jne    _T29;

	return 0xffffffcf;
// LINE 197:
_T29:
	__asm        push   1;
	__asm        mov    eax, skipAmt;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x10C];
	__asm        push   eax;
	__asm        call   fseek;
	__asm        add    esp, 0xC;
	__asm        test   eax, eax;
	__asm        je     _T58;

	return 0xffffffce;
// LINE 198:
	__asm        jmp    __RETURN;
_T58:
	return 0x0;
// LINE 200:
__RETURN:
}

// FUNCTION: COPTER_D 0x0055c7dd
unsigned short FlatFile::ValidFile() {
// LINE 221:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0;
	__asm        jne    _T29;

	return 0x0;
// LINE 222:
	__asm        jmp    __RETURN;
_T29:
	return 0x1;
// LINE 223:
__RETURN:
}

// FUNCTION: COPTER_D 0x0055c814
unsigned short FlatFile::SameFile(/*unpacked*/ class FlatFile *other) {
// LINE 235:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0;
	__asm        je     _T57;

	__asm        jmp    _T21;
_T21:
	__asm        mov    eax, other;
	__asm        cmp    dword ptr [eax+0x108], 0;
	__asm        je     _T57;

	__asm        mov    eax, this;
	__asm        mov    ecx, other;
	__asm        mov    ecx, [ecx+0x108];
	__asm        cmp    [eax+0x108], ecx;
	__asm        jne    _T57;
// LINE 236:
	return 0x1;
// LINE 237:
	__asm        jmp    __RETURN;
// LINE 238:
_T57:
	return 0x0;
// LINE 239:
__RETURN:
}

// FUNCTION: COPTER_D 0x0055c87a
long FlatFile::Read4(long * val) {
	/*bp-0x4*/   long size;
	/*bp-0x8*/   long err;

// LINE 244:
	size = 0x4;
// LINE 245:
	err = this->FlatFile::ReadBlock(val, size);
// LINE 246:
	__asm        cmp    err, 0;
	__asm        jne    _T3c;

	Swizzle4(val);
// LINE 247:
_T3c:
	return err;
// LINE 248:
}

// FUNCTION: COPTER_D 0x0055c8c5
long FlatFile::Read2(short * val) {
	/*bp-0x4*/   long size;
	/*bp-0x8*/   long err;

// LINE 252:
	size = 0x2;
// LINE 253:
	err = this->FlatFile::ReadBlock(val, size);
// LINE 254:
	__asm        cmp    err, 0;
	__asm        jne    _T3c;

	Swizzle2(val);
// LINE 255:
_T3c:
	return err;
// LINE 256:
}

// FUNCTION: COPTER_D 0x0055c910
long FlatFile::Read1(signed char * val) {
	/*bp-0x4*/   long size;
	/*bp-0x8*/   long err;

// LINE 260:
	size = 0x1;
// LINE 261:
	err = this->FlatFile::ReadBlock(val, size);
// LINE 262:
	return err;
// LINE 263:
}

// FUNCTION: COPTER_D 0x0055c945
void FlatFile::Link() {
// LINE 266:
	this->fNext = FlatFile::sList;
// LINE 267:
FlatFile::sList = this;
// LINE 268:
	return;
}

// FUNCTION: COPTER_D 0x0055c96e
void FlatFile::Unlink() {
	/*bp-0x4*/   /*unpacked*/ class FlatFile **srch;

// LINE 271:
	srch = 0x5bddd8;
// LINE 273:
__WHILE_13:
	while ((srch-> != 0x0)) {
// LINE 274:
		__asm        mov    eax, srch;
		__asm        mov    ecx, this;
		__asm        cmp    [eax], ecx;
		__asm        jne    _T3f;
// LINE 275:
		srch-> = srch->->fNext;
// LINE 276:
		return;
// LINE 278:
_T3f:
		srch = (srch-> + 0x4);
	}
// LINE 280:
_T4f:
	doAssert(0x5bde74, 0x118, 0x5bde5c, 0x8c085);
// LINE 281:
	return;
}

// FUNCTION: COPTER_D 0x0055c9e3
unsigned short FlatFile::Exclusive() {
	/*bp-0x4*/   /*unpacked*/ class FlatFile *srch;

// LINE 285:
	srch = FlatFile::sList;
// LINE 286:
__WHILE_14:
	while ((srch != 0x0)) {
// LINE 287:
		__asm        mov    eax, this;
		__asm        cmp    srch, eax;
		__asm        je     _T49;

		__asm        mov    eax, srch;
		__asm        push   eax;
		__asm        mov    ecx, this;
		__asm        call   FlatFile::SameFile;
		__asm        movzx  eax, ax;
		__asm        test   eax, eax;
		__asm        je     _T49;
// LINE 288:
		return 0x0;
// LINE 289:
_T49:
		srch = srch->fNext;
	}
// LINE 291:
_T57:
	return 0x1;
// LINE 292:
}

// FUNCTION: COPTER_D 0x0055ca48
long FlatFile::GetFileName(unsigned char * name) {
// LINE 296:
	__asm        mov    eax, this;
	__asm        xor    ecx, ecx;
	__asm        mov    cl, [eax+8];
	__asm        inc    ecx;
	__asm        push   ecx;
	__asm        mov    eax, name;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        add    eax, 8;
	__asm        push   eax;
	__asm        call   Memory::BlockMove;
	__asm        add    esp, 0xC;
// LINE 297:
	return 0x0;
// LINE 298:
}

// FUNCTION: COPTER_D 0x0055ca7f
short FlatFile::CheckForLeaks() {
	/*bp-0x4*/   /*unpacked*/ class FlatFile *list;
	/*bp-0x8*/   short total;

// LINE 302:
	total = 0x0;
// LINE 304:
_FOR_1c:
	for (list = FlatFile::sList; (list != 0x0); list = list->fNext) {
// LINE 306:
		total++;
	}
// LINE 308:
_T38:
	return total;
// LINE 309:
}



// Contribution: 1:0015bad0-0015bb08 Module: 195, 16 byte alignment, code, (comdat), execute, read, 
// FUNCTION: COPTER_D 0x0055cad0
// FlatFile::`scalar deleting destructor'



// Contribution: 2:00004620-0000462f Module: 195, 8 byte alignment, initialized_data, (comdat), read, 
// vftable for FlatFile @ 0x00593620
//   00: FlatFile::`scalar deleting destructor' @ 0x0055cad0
//   01: FlatFile::Open @ 0x0055c3c7
//   02: FlatFile::Open @ 0x0055c36a
//   03: FlatFile::Close @ 0x0055c5cb
//   4 entries



// Contribution: 3:00026dd8-00026e98 Module: 195, 4 byte alignment, initialized_data, read, write, 
// GLOBAL: COPTER_D 0x005bddd8
/*unpacked*/ class FlatFile *FlatFile::sList = { 0 /* todo */ };

// GLOBAL: COPTER_D 0x005bdddc
long FlatFile::sLastFileID = 10;

