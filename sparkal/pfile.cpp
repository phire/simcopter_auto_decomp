// Module: Pfile.obj
// Source: C:\Copter\source\sparkal\Pfile.cpp
// autogenerated by simcopter_tool from PDB file

// Type: /*packed*/ class PFile (forward reference);
// VTABLE: COPTER_D 0x00590468
class PFile{ // packed(0x110 bytes) TI: 0x453c
	enum /* __unnamed */ {
		FileNull = -1,
	};
	enum SeekTypes {
		N_SEEK_FROM_FILE_START = 0,
		N_SEEK_FROM_FILE_CURRENT = 1,
		N_SEEK_FROM_FILE_END = 2,
	};
	enum AccessTypes {
		ReadOnly = 0,
		ReadWrite = 2,
		WriteOnly = 1,
		Create = 768,
		CreateExcl = 1280,
		Append = 8,
		Binary = 32768,
		Compat = 0,
		DenyNone = 64,
		DenyRead = 48,
		DenyWrite = 32,
		DenyRdWr = 16,
		NoInherit = 128,
	};
	enum PermissionTypes {
		PermRead = 256,
		PermWrite = 128,
		PermRdWr = 384,
	};
	enum seek_dir {
		beg = 0,
		cur = 1,
		end = 2,
	};
public:
	void PFile(char *);
	void PFile(const /*packed*/ class PFile&);
	void PFile(int32_t);
	void PFile();
	virtual void ~PFile(); // vtable+0x0
	int32_t Open(char *, unsigned short, unsigned short, int32_t);
	int32_t Close();
	int32_t GetHandle();
	long Position();
	void Length(long);
	long Length();
	long Seek(long, int32_t);
	long SeekToBegin();
	long SeekToEnd();
	int32_t IsOpen();
	int32_t Read(void * __ptr32, int32_t);
	int32_t Write(void * __ptr32, int32_t);
	void Flush();
	// calltype: NearC
	static void Remove(char *);
	// calltype: NearC
	static void Rename(char *, char *);
	// calltype: NearC
	static unsigned long Checksum(char *);
	long SetPath(char *);
	long FileCreate(char *, int32_t);
	long FileExists(char *);
	/*+0x4*/   char szFilePath[260]; // 0x104 bytes
	/*+0x108*/ int32_t Handle;
private:
	/*+0x10c*/ int32_t ShouldClose;
};

// Type: char *;

// Type: unsigned short;

// Type: int32_t;

// Type: uint32_t;

// Type: long;

// Type: /*packed*/ struct _OFSTRUCT;
struct _OFSTRUCT{ // packed(0x88 bytes) TI: 0x21e5
	/*+0x0*/   unsigned char cBytes; // 0x1 bytes
	/*+0x1*/   unsigned char fFixedDisk; // 0x1 bytes
	/*+0x2*/   unsigned short nErrCode; // 0x2 bytes
	/*+0x4*/   unsigned short Reserved1; // 0x2 bytes
	/*+0x6*/   unsigned short Reserved2; // 0x2 bytes
	/*+0x8*/   char szPathName[128]; // 0x80 bytes
};

// Type: unsigned char;

// Type: /*packed*/ class PFile;
// VTABLE: COPTER_D 0x00590468
class PFile{ // packed(0x110 bytes) TI: 0x453c
	enum /* __unnamed */ {
		FileNull = -1,
	};
	enum SeekTypes {
		N_SEEK_FROM_FILE_START = 0,
		N_SEEK_FROM_FILE_CURRENT = 1,
		N_SEEK_FROM_FILE_END = 2,
	};
	enum AccessTypes {
		ReadOnly = 0,
		ReadWrite = 2,
		WriteOnly = 1,
		Create = 768,
		CreateExcl = 1280,
		Append = 8,
		Binary = 32768,
		Compat = 0,
		DenyNone = 64,
		DenyRead = 48,
		DenyWrite = 32,
		DenyRdWr = 16,
		NoInherit = 128,
	};
	enum PermissionTypes {
		PermRead = 256,
		PermWrite = 128,
		PermRdWr = 384,
	};
	enum seek_dir {
		beg = 0,
		cur = 1,
		end = 2,
	};
public:
	void PFile(char *);
	void PFile(const /*packed*/ class PFile&);
	void PFile(int32_t);
	void PFile();
	virtual void ~PFile(); // vtable+0x0
	int32_t Open(char *, unsigned short, unsigned short, int32_t);
	int32_t Close();
	int32_t GetHandle();
	long Position();
	void Length(long);
	long Length();
	long Seek(long, int32_t);
	long SeekToBegin();
	long SeekToEnd();
	int32_t IsOpen();
	int32_t Read(void * __ptr32, int32_t);
	int32_t Write(void * __ptr32, int32_t);
	void Flush();
	// calltype: NearC
	static void Remove(char *);
	// calltype: NearC
	static void Rename(char *, char *);
	// calltype: NearC
	static unsigned long Checksum(char *);
	long SetPath(char *);
	long FileCreate(char *, int32_t);
	long FileExists(char *);
	/*+0x4*/   char szFilePath[260]; // 0x104 bytes
	/*+0x108*/ int32_t Handle;
private:
	/*+0x10c*/ int32_t ShouldClose;
};

// Type: unsigned char *;

// Type: unsigned long;



// Contribution: 1:0009f3a0-0009f9f6 Module: 10, 16 byte alignment, code, execute, read, 
// FUNCTION: COPTER_D 0x004a03a0
int32_t PFile::Open(char * name, unsigned short access, unsigned short __formal, int32_t bCreateIfNotFound) {
	/*bp-0x4*/   const uint32_t shareFlags;

// LINE 37:
	shareFlags = 0xf0;
// LINE 39:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0xFFFFFFFF;
	__asm        jle    _T28;

	__asm        jmp    _T2d;
_T28:
	__asm        jmp    _T46;
_T2d:
	__asm        jmp    _T3c;

	__asm        cmp    dword ptr [ebp-8], 0;
	__asm        je     _T46;
// LINE 40:
_T3c:
	return 0x1;
// LINE 43:
_T46:
	__asm        cmp    name, 0;
	__asm        je     _T7d;
// LINE 44:
	__asm        mov    eax, name;
	__asm        movsx  eax, byte ptr [eax];
	__asm        test   eax, eax;
	__asm        je     _T76;
// LINE 45:
	strcpy((this + 0x4), name);
// LINE 46:
	__asm        jmp    _T7d;
// LINE 47:
_T76:
	return 0x0;
// LINE 49:
_T7d:
	__asm        mov    eax, this;
	__asm        movsx  eax, byte ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jne    _T93;
// LINE 50:
	return 0x0;
// LINE 53:
_T93:
	__asm        mov    eax, this;
	__asm        add    eax, 4;
	__asm        push   eax;
	__asm        mov    ecx, this;
	__asm        call   PFile::FileExists;
	__asm        test   eax, eax;
	__asm        jne    _Tdd;
// LINE 54:
	__asm        cmp    bCreateIfNotFound, 0;
	__asm        je     _Td1;
// LINE 55:
	this->PFile::FileCreate((this + 0x4), access);
// LINE 56:
	__asm        jmp    _Td8;
// LINE 57:
_Td1:
	return 0x0;
// LINE 59:
_Td8:
	__asm        jmp    _T120;
// LINE 60:
_Tdd:
	__asm        test   reinterpret_cast<uint8_t>(access), 0xF0;
	__asm        jne    _Tf6;
// LINE 61:
	__asm        mov    eax, reinterpret_cast<uint32_t>(access);
	__asm        and    eax, 0xFFFF;
	__asm        or     eax, 0x40;
	__asm        mov    access, ax;
// LINE 64:
_Tf6:
	this->Handle = _sopen((this + 0x4), (reinterpret_cast<uint32_t>(access) & 0xfe0f), (reinterpret_cast<uint32_t>(access) & 0xf0));
// LINE 66:
_T120:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0xFFFFFFFF;
	__asm        jle    _T13a;

	__asm        mov    eax, 1;
	__asm        jmp    _T13c;
_T13a:
	__asm        xor    eax, eax;
_T13c:
	__asm        jmp    _T144;

	__asm        mov    eax, [ebp-0xC];
_T144:
	__asm        jmp    __RETURN;
// LINE 67:
__RETURN:
}

// FUNCTION: COPTER_D 0x004a04f0
int32_t PFile::Close() {
// LINE 76:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0xFFFFFFFF;
	__asm        jle    _T21;

	__asm        jmp    _T26;
_T21:
	__asm        jmp    _T66;
_T26:
	__asm        jmp    _T35;

	__asm        cmp    dword ptr [ebp-4], 0;
	__asm        je     _T66;
// LINE 77:
_T35:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x108];
	__asm        push   eax;
	__asm        call   _close;
	__asm        add    esp, 4;
	__asm        test   eax, eax;
	__asm        jne    _T66;
// LINE 78:
	this->Handle = 0xffffffff;
// LINE 79:
	return 0x1;
// LINE 82:
_T66:
	return 0x0;
// LINE 83:
}

// FUNCTION: COPTER_D 0x004a0562
long PFile::Length() {
	/*bp-0x4*/   long lFileLength;

// LINE 94:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0xFFFFFFFF;
	__asm        jle    _T26;

	__asm        jmp    _T75;

	__asm        jmp    _T26;
_T26:
	__asm        jmp    _T35;

	__asm        cmp    dword ptr [ebp-8], 0;
	__asm        jne    _T75;
// LINE 95:
_T35:
	__asm        push   0;
	__asm        push   0x180;
	__asm        push   0;
	__asm        push   0;
	__asm        mov    ecx, this;
	__asm        call   PFile::Open;
	__asm        test   eax, eax;
	__asm        je     _T75;
// LINE 96:
	lFileLength = _filelength(this->Handle);
// LINE 97:
	this->PFile::Close();
// LINE 98:
	return lFileLength;
// LINE 101:
_T75:
	return _filelength(this->Handle);
// LINE 102:
}

// FUNCTION: COPTER_D 0x004a05f3
long PFile::FileCreate(char * name, int32_t nAccessMode) {
// LINE 113:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0xFFFFFFFF;
	__asm        jle    _T21;

	__asm        jmp    _T26;
_T21:
	__asm        jmp    _T3c;
_T26:
	__asm        jmp    _T35;

	__asm        cmp    dword ptr [ebp-4], 0;
	__asm        je     _T3c;
// LINE 114:
_T35:
	return 0x0;
// LINE 117:
_T3c:
	__asm        cmp    name, 0;
	__asm        je     _T73;
// LINE 118:
	__asm        mov    eax, name;
	__asm        movsx  eax, byte ptr [eax];
	__asm        test   eax, eax;
	__asm        je     _T6c;
// LINE 119:
	strcpy((this + 0x4), name);
// LINE 120:
	__asm        jmp    _T73;
// LINE 121:
_T6c:
	return 0x0;
// LINE 123:
_T73:
	__asm        mov    eax, this;
	__asm        movsx  eax, byte ptr [eax+4];
	__asm        test   eax, eax;
	__asm        jne    _T89;
// LINE 124:
	return 0x0;
// LINE 125:
_T89:
	__asm        mov    eax, this;
	__asm        add    eax, 4;
	__asm        push   eax;
	__asm        mov    ecx, this;
	__asm        call   PFile::FileExists;
	__asm        test   eax, eax;
	__asm        je     _Ta7;
// LINE 126:
	return 0x0;
// LINE 127:
_Ta7:
	this->Handle = _creat((this + 0x4), nAccessMode);
// LINE 129:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0xFFFFFFFF;
	__asm        jle    _Tdd;

	__asm        mov    eax, 1;
	__asm        jmp    _Tdf;
_Tdd:
	__asm        xor    eax, eax;
_Tdf:
	__asm        jmp    _Te7;

	__asm        mov    eax, [ebp-8];
_Te7:
	__asm        jmp    __RETURN;
// LINE 130:
__RETURN:
}

// FUNCTION: COPTER_D 0x004a06e6
long PFile::FileExists(char * name) {
	/*bp-0x88*/  /*packed*/ struct _OFSTRUCT ofStruct; // 0x88 bytes
	/*bp-0x8c*/  char * szFilePathToUse;

// LINE 142:
	__asm        cmp    name, 0;
	__asm        je     _T2a;
// LINE 143:
	szFilePathToUse = name;
// LINE 144:
	__asm        jmp    _T39;
// LINE 145:
_T2a:
	szFilePathToUse = (this + 0x4);
// LINE 148:
_T39:
	__asm        push   0x4000;
	__asm        lea    eax, ofStruct.cBytes;
	__asm        push   eax;
	__asm        mov    eax, szFilePathToUse;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C3638];
	__asm        cmp    eax, 0xFFFFFFFF;
	__asm        je     _T65;

	__asm        mov    eax, 1;
	__asm        jmp    _T67;
_T65:
	__asm        xor    eax, eax;
_T67:
	__asm        jmp    __RETURN;
// LINE 152:
__RETURN:
}

// FUNCTION: COPTER_D 0x004a0759
long PFile::SetPath(char * szPath) {
// LINE 162:
	__asm        mov    eax, this;
	__asm        cmp    dword ptr [eax+0x108], 0xFFFFFFFF;
	__asm        jle    _T21;

	__asm        jmp    _T26;
_T21:
	__asm        jmp    _T3c;
_T26:
	__asm        jmp    _T35;

	__asm        cmp    dword ptr [ebp-4], 0;
	__asm        je     _T3c;
// LINE 163:
_T35:
	return 0x0;
// LINE 164:
_T3c:
	strcpy((this + 0x4), szPath);
// LINE 165:
	return 0x1;
// LINE 166:
}

// FUNCTION: COPTER_D 0x004a07b9
unsigned long PFile::Checksum(char * name) {
	/*bp-0x4*/   long lUsedBlockSize;
	/*bp-0x8*/   long lCurrentBlockStartPosition;
	/*bp-0xc*/   unsigned char * chBuffer;
	/*bp-0x10*/  long lFileLength;
	/*bp-0x14*/  long lCurrentValue;
	/*bp-0x18*/  const long lBlockSize;
	/*bp-0x128*/ /*packed*/ class PFile tempPFile; // 0x110 bytes
	/*bp-0x12c*/ long lIndex;
	/*bp-0x130*/ unsigned char chValue;

// LINE 174:
	lCurrentValue = 0x0;
// LINE 180:
	lBlockSize = 0x7d00;
// LINE 182:
	__asm        mov    tempPFile.Handle, 0xFFFFFFFF;
	__asm        mov    tempPFile.ShouldClose, 1;
	__asm        mov    tempPFile<vftable>, 0x590468;
	__asm        mov    _fmode, 0x8000;
	__asm        cmp    name, 0;
	__asm        je     _T5e;

	strcpy(tempPFile.szFilePath[0], name);
	__asm        jmp    _T65;
_T5e:
	tempPFile.szFilePath[0] = 0x0;
_T65:
	__asm        jmp    _T6a;
// LINE 183:
_T6a:
	__asm        push   0;
	__asm        push   0x100;
	__asm        push   0;
	__asm        push   0;
	__asm        lea    ecx, tempPFile<vftable>;
	__asm        call   PFile::Open;
	__asm        test   eax, eax;
	__asm        je     _T1da;
// LINE 184:
	lFileLength = tempPFile<vftable>->PFile::Length();
// LINE 186:
	chBuffer = operator new(0x7d00);
// LINE 187:
	__asm        cmp    chBuffer, 0;
	__asm        je     _FOR_190;
// LINE 189:
	lCurrentValue = 0x0;
// LINE 191:
	lCurrentBlockStartPosition = 0x0;
// LINE 193:
_FOR_c3:
	for (; (lCurrentBlockStartPosition < lFileLength); lCurrentBlockStartPosition += 0x7d00) {
// LINE 195:
		lUsedBlockSize = 0x7d00;
// LINE 196:
		__asm        mov    eax, lCurrentBlockStartPosition;
		__asm        add    eax, 0x7D00;
		__asm        cmp    eax, lFileLength;
		__asm        jle    _Tf7;
// LINE 197:
		lUsedBlockSize = (lFileLength - lCurrentBlockStartPosition);
// LINE 198:
_Tf7:
		__asm        jmp    _Tfc;
_Tfc:
		lUsedBlockSize = _read(tempPFile.Handle, chBuffer, lUsedBlockSize);
// LINE 199:
_FOR_122:
		for (lIndex = 0x0; (lUsedBlockSize > lIndex); lIndex++) {
// LINE 200:
			__asm        mov    eax, chBuffer;
			__asm        mov    ecx, lIndex;
			__asm        xor    edx, edx;
			__asm        mov    dl, [eax+ecx];
			__asm        add    lCurrentValue, edx;
			__asm        jmp    _FOR_NEXT_122;
		}
// LINE 201:
_T14d:
	}
// LINE 202:
_T152:
	__asm        mov    eax, chBuffer;
	__asm        mov    [ebp-0x134], eax;
	__asm        mov    eax, [ebp-0x134];
	__asm        mov    [ebp-0x13C], eax;
	__asm        mov    eax, [ebp-0x13C];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
// LINE 204:
	__asm        jmp    _T1cf;
// LINE 206:
_FOR_190:
	lCurrentValue = 0x0;
	lIndex = lCurrentValue;
	__asm        jmp    _FOR_COND_190;
_FOR_NEXT_190:
	for (; (lFileLength > lIndex); lIndex++) {
// LINE 207:
		_read(tempPFile.Handle, chValue, 0x1);
		__asm        jmp    _T1bf;
// LINE 208:
_T1bf:
		__asm        xor    eax, eax;
		__asm        mov    al, chValue;
		__asm        add    lCurrentValue, eax;
	}
// LINE 211:
_T1cf:
	tempPFile<vftable>->PFile::Close();
// LINE 213:
_T1da:
	__asm        mov    eax, lCurrentValue;
	__asm        mov    [ebp-0x138], eax;
	__asm        mov    tempPFile<vftable>, 0x590468;
	__asm        cmp    tempPFile.Handle, 0xFFFFFFFF;
	__asm        jle    _T1fc;

	__asm        jmp    _T201;
_T1fc:
	__asm        jmp    _T229;
_T201:
	__asm        jmp    _T213;

	__asm        cmp    dword ptr [ebp-0x140], 0;
	__asm        je     _T229;
_T213:
	__asm        cmp    tempPFile.ShouldClose, 0;
	__asm        je     _T229;

	_close(tempPFile.Handle);
_T229:
	__asm        jmp    _T22e;
_T22e:
	__asm        mov    eax, [ebp-0x138];
	__asm        jmp    __RETURN;
// LINE 214:
__RETURN:
}

