// Module: joystick.obj
// Source: C:\Copter\source\sparkal\joystick.cpp
// autogenerated by simcopter_tool from PDB file

// Type: void;

// Type: class JoystickManager (forward reference);
class JoystickManager{
public:
	void JoystickManager();
	int32_t Initialize();
	int32_t Normalize(int32_t);
	int32_t GetPositionQualitative(int32_t, int32_t, int32_t);
	int32_t GetPositionQuantitative(int32_t, int32_t, int32_t);
	int32_t GetButtonState(int32_t, int32_t, int32_t);
	int32_t GetCompleteState(int32_t);
	int32_t GetPointOfView(int32_t, int32_t);
	int32_t Calibrate(int32_t);
	int32_t GetWindowsThreshold(int32_t, long *);
	int32_t SetWindowsThreshold(int32_t, long);
	int32_t GetNormalizedThreshold(long *);
	int32_t SetNormalizedThreshold(long);
	long GetNormalizedMin();
	long GetNormalizedMax();
	void SetNormalizedMinMax(long, long);
	int32_t IsJoystickPresent(char *);
	int32_t IsJoystickPresent(uint32_t);
	int32_t GetJoystickName(uint32_t, char *);
	int32_t GetJoystickIndex(char *, int32_t *);
	int32_t GetJoystickCount();
	int32_t GetVirtualJoystickIndex(int32_t);
protected:
	int32_t nJoystickCount;
	char bJoystickPresent[16];
	int32_t nJoystickIndexAssociation[16];
	long lNormalizedMinimum;
	long lNormalizedMaximum;
	long lNormalizedCenter;
	long lJoystickThreshold;
	struct tagJOYCAPSA joystickCaps[16];
	struct joyinfoex_tag joystickInfoCache[16];
};

// Type: int32_t;

// Type: struct joyinfo_tag;
struct joyinfo_tag{
	uint32_t wXpos;
	uint32_t wYpos;
	uint32_t wZpos;
	uint32_t wButtons;
};

// Type: uint32_t;

// Type: char *;

// Type: int32_t *;

// Type: struct joyinfoex_tag;
struct joyinfoex_tag{
	unsigned long dwSize;
	unsigned long dwFlags;
	unsigned long dwXpos;
	unsigned long dwYpos;
	unsigned long dwZpos;
	unsigned long dwRpos;
	unsigned long dwUpos;
	unsigned long dwVpos;
	unsigned long dwButtons;
	unsigned long dwButtonNumber;
	unsigned long dwPOV;
	unsigned long dwReserved1;
	unsigned long dwReserved2;
};

// Type: unsigned long;

// Type: struct joyinfoex_tag (forward reference);

// Type: unsigned long *;

// Type: long *;

// Type: long;



// Contribution: 1:00099480-00099d21 Module: 15, 16 byte alignment, code, execute, read, 
// STATIC INITIALIZER:
// FUNCTION: COPTER_D 0x0049a480
void $E2() {

	__asm        call   $E1;
	__asm        jmp    near ptr 0x0049A490;
}

// STATIC INITIALIZER:
// FUNCTION: COPTER_D 0x0049a495
void $E1() {

	__asm        mov    ecx, 0x604C78;
	__asm        call   JoystickManager::JoystickManager;
	__asm        jmp    near ptr 0x0049A4AA;
}

// FUNCTION: COPTER_D 0x0049a4af
void JoystickManager::JoystickManager() {
	int32_t i;

// LINE 29:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x54], 0xFFFFFF9C;
// LINE 30:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x58], 0x64;
// LINE 31:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x5C], 0;
// LINE 32:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+0x60], 0;
// LINE 33:
	__asm        mov    i, 0;
	__asm        jmp    _T43;

_T40:
	__asm        inc    i;
_T43:
	__asm        cmp    i, 0x10;
	__asm        jge    _T6b;
// LINE 34:
	__asm        mov    eax, i;
	__asm        mov    ecx, this;
	__asm        mov    byte ptr [eax+ecx+4], 0;
// LINE 35:
	__asm        mov    eax, i;
	__asm        mov    ecx, this;
	__asm        mov    dword ptr [ecx+eax*4+0x14], 0;
// LINE 36:
	__asm        jmp    _T40;
// LINE 38:
_T6b:
	__asm        jmp    near ptr 0x0049A51F;

	__asm        mov    eax, this;
}

// FUNCTION: COPTER_D 0x0049a527
int32_t JoystickManager::Initialize() {
	int32_t nMaxJoysticks;
	struct joyinfo_tag joyInfo;
	int32_t i;
	uint32_t mmResult;

// LINE 51:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0;
// LINE 60:
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0;
// LINE 61:
	__asm        mov    i, 0;
	__asm        jmp    _T2d;

_T2a:
	__asm        inc    i;
_T2d:
	__asm        cmp    i, 0x10;
	__asm        jge    _T55;
// LINE 62:
	__asm        mov    eax, i;
	__asm        mov    ecx, this;
	__asm        mov    byte ptr [eax+ecx+4], 0;
// LINE 63:
	__asm        mov    eax, i;
	__asm        mov    ecx, this;
	__asm        mov    dword ptr [ecx+eax*4+0x14], 0;
// LINE 64:
	__asm        jmp    _T2a;
// LINE 66:
_T55:
	__asm        call   dword ptr ds:[0x6C38DC];
	__asm        mov    nMaxJoysticks, eax;
// LINE 67:
	__asm        cmp    nMaxJoysticks, 0x10;
	__asm        jle    _T6f;
// LINE 68:
	__asm        mov    nMaxJoysticks, 0x10;
// LINE 70:
_T6f:
	__asm        mov    i, 0;
	__asm        jmp    _T7e;

_T7b:
	__asm        inc    i;
_T7e:
	__asm        mov    eax, i;
	__asm        cmp    nMaxJoysticks, eax;
	__asm        jle    _Tf3;
// LINE 71:
	__asm        lea    eax, joyInfo.wXpos;
	__asm        push   eax;
	__asm        mov    eax, i;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38E0];
	__asm        mov    mmResult, eax;
// LINE 72:
	__asm        cmp    mmResult, 0;
	__asm        jne    _Tee;
// LINE 73:
	__asm        mov    eax, i;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx];
	__asm        mov    edx, this;
	__asm        mov    [edx+ecx*4+0x14], eax;
// LINE 74:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    byte ptr [eax+ecx+4], 1;
// LINE 75:
	__asm        push   0x194;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*8];
	__asm        lea    eax, [eax+eax*8];
	__asm        sub    eax, ecx;
	__asm        add    eax, this;
	__asm        add    eax, 0x64;
	__asm        push   eax;
	__asm        mov    eax, i;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38E4];
// LINE 76:
	__asm        mov    eax, this;
	__asm        inc    dword ptr [eax];
// LINE 78:
_Tee:
	__asm        jmp    _T7b;
// LINE 82:
_Tf3:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax];
	__asm        jmp    near ptr 0x0049A624;
// LINE 83:
}

// FUNCTION: COPTER_D 0x0049a629
int32_t JoystickManager::IsJoystickPresent(char * szJoystickName) {
	int32_t i;

// LINE 93:
	__asm        mov    i, 0;
	__asm        jmp    _T1b;

_T18:
	__asm        inc    i;
_T1b:
	__asm        cmp    i, 0x10;
	__asm        jge    _T5f;
// LINE 95:
	__asm        mov    eax, szJoystickName;
	__asm        push   eax;
	__asm        mov    eax, i;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*8];
	__asm        lea    eax, [eax+eax*8];
	__asm        sub    eax, ecx;
	__asm        add    eax, this;
	__asm        add    eax, 0x68;
	__asm        push   eax;
	__asm        call   strcmp;
	__asm        add    esp, 8;
	__asm        test   eax, eax;
	__asm        jne    _T5a;
// LINE 96:
	__asm        mov    eax, 1;
	__asm        jmp    _T66;
// LINE 98:
_T5a:
	__asm        jmp    _T18;
// LINE 99:
_T5f:
	__asm        xor    eax, eax;
	__asm        jmp    _T66;
// LINE 100:
}

// FUNCTION: COPTER_D 0x0049a696
int32_t JoystickManager::GetJoystickName(uint32_t nJoystick, char * szJoystickName) {
// LINE 107:
	__asm        cmp    nJoystick, 0x10;
	__asm        jb     _T1d;
// LINE 108:
	__asm        xor    eax, eax;
	__asm        jmp    _T64;
// LINE 109:
_T1d:
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, this;
	__asm        movsx  eax, byte ptr [eax+ecx+4];
	__asm        test   eax, eax;
	__asm        jne    _T37;
// LINE 110:
	__asm        xor    eax, eax;
	__asm        jmp    _T64;
// LINE 112:
_T37:
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*8];
	__asm        lea    eax, [eax+eax*8];
	__asm        sub    eax, ecx;
	__asm        add    eax, this;
	__asm        add    eax, 0x68;
	__asm        push   eax;
	__asm        mov    eax, szJoystickName;
	__asm        push   eax;
	__asm        call   strcpy;
	__asm        add    esp, 8;
// LINE 113:
	__asm        mov    eax, 1;
	__asm        jmp    _T64;
// LINE 115:
}

// FUNCTION: COPTER_D 0x0049a701
int32_t JoystickManager::GetJoystickIndex(char * szJoystickName, int32_t * nJoystick) {
	int32_t i;

// LINE 127:
	__asm        mov    i, 0;
	__asm        jmp    _T1b;

_T18:
	__asm        inc    i;
_T1b:
	__asm        cmp    i, 0x10;
	__asm        jge    _T67;
// LINE 129:
	__asm        mov    eax, szJoystickName;
	__asm        push   eax;
	__asm        mov    eax, i;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*8];
	__asm        lea    eax, [eax+eax*8];
	__asm        sub    eax, ecx;
	__asm        add    eax, this;
	__asm        add    eax, 0x68;
	__asm        push   eax;
	__asm        call   strcmp;
	__asm        add    esp, 8;
	__asm        test   eax, eax;
	__asm        jne    _T62;
// LINE 130:
	__asm        mov    eax, i;
	__asm        mov    ecx, nJoystick;
	__asm        mov    [ecx], eax;
// LINE 131:
	__asm        mov    eax, 1;
	__asm        jmp    _T71;
// LINE 134:
_T62:
	__asm        jmp    _T18;
// LINE 135:
_T67:
	__asm        mov    eax, 0xFFFFFFFF;
	__asm        jmp    _T71;
// LINE 136:
}

// FUNCTION: COPTER_D 0x0049a779
int32_t JoystickManager::Normalize(int32_t nPosition) {
// LINE 160:
	__asm        push   0xFFFF;
	__asm        mov    eax, nPosition;
	__asm        push   eax;
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x58];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x54];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C372C];
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x54];
	__asm        add    ecx, eax;
	__asm        mov    nPosition, ecx;
// LINE 167:
	__asm        mov    eax, nPosition;
	__asm        jmp    near ptr 0x0049A7B4;
// LINE 168:
}

// FUNCTION: COPTER_D 0x0049a7bb
int32_t JoystickManager::GetPositionQualitative(int32_t nJoystick, int32_t nAxis, int32_t bUseCache) {
	int32_t nOneQuarterOfTheRange;
	int32_t nValue;

// LINE 191:
	__asm        mov    eax, bUseCache;
	__asm        push   eax;
	__asm        mov    eax, nAxis;
	__asm        push   eax;
	__asm        mov    eax, nJoystick;
	__asm        push   eax;
	__asm        mov    ecx, this;
	__asm        call   JoystickManager::GetPositionQuantitative;
	__asm        mov    nValue, eax;
// LINE 192:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x58];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x54];
	__asm        sar    eax, 2;
	__asm        mov    nOneQuarterOfTheRange, eax;
// LINE 193:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x5C];
	__asm        sub    eax, nOneQuarterOfTheRange;
	__asm        cmp    eax, nValue;
	__asm        jle    _T51;
// LINE 194:
	__asm        mov    eax, 0xFFFFFFFF;
	__asm        jmp    _T74;
// LINE 195:
_T51:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x5C];
	__asm        add    eax, nOneQuarterOfTheRange;
	__asm        cmp    eax, nValue;
	__asm        jge    _T6d;
// LINE 196:
	__asm        mov    eax, 1;
	__asm        jmp    _T74;
// LINE 199:
_T6d:
	__asm        xor    eax, eax;
	__asm        jmp    _T74;
// LINE 200:
}

// FUNCTION: COPTER_D 0x0049a836
int32_t JoystickManager::GetPositionQuantitative(int32_t nJoystick, int32_t nAxis, int32_t bUseCache) {
	int32_t nReturnValue;
	struct joyinfoex_tag joyInfoEx;
	unsigned long dwFlagToUse;
	struct joyinfoex_tag* joyInfoExToUse;
	uint32_t mmResult;
	unsigned long * dwResultToUse;

// LINE 227:
	__asm        cmp    nJoystick, 0x10;
	__asm        jle    _T1d;
// LINE 228:
	__asm        xor    eax, eax;
	__asm        jmp    _T1a0;
// LINE 230:
_T1d:
	__asm        cmp    bUseCache, 0;
	__asm        je     _T45;
// LINE 231:
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*2];
	__asm        lea    eax, [ecx+eax*4];
	__asm        shl    eax, 2;
	__asm        add    eax, this;
	__asm        add    eax, 0x19A4;
	__asm        mov    joyInfoExToUse, eax;
// LINE 232:
	__asm        jmp    _T4b;
// LINE 233:
_T45:
	__asm        lea    eax, joyInfoEx.dwSize;
	__asm        mov    joyInfoExToUse, eax;
// LINE 235:
_T4b:
	__asm        mov    eax, nAxis;
	__asm        mov    [ebp-0x50], eax;
	__asm        jmp    _Te0;
// LINE 237:
	__asm        mov    dwFlagToUse, 1;
// LINE 238:
	__asm        mov    eax, joyInfoExToUse;
	__asm        add    eax, 8;
	__asm        mov    dwResultToUse, eax;
// LINE 239:
	__asm        jmp    _T10c;
// LINE 241:
	__asm        mov    dwFlagToUse, 2;
// LINE 242:
	__asm        mov    eax, joyInfoExToUse;
	__asm        add    eax, 0xC;
	__asm        mov    dwResultToUse, eax;
// LINE 243:
	__asm        jmp    _T10c;
// LINE 245:
	__asm        mov    dwFlagToUse, 4;
// LINE 246:
	__asm        mov    eax, joyInfoExToUse;
	__asm        add    eax, 0x10;
	__asm        mov    dwResultToUse, eax;
// LINE 247:
	__asm        jmp    _T10c;
// LINE 249:
	__asm        mov    dwFlagToUse, 8;
// LINE 250:
	__asm        mov    eax, joyInfoExToUse;
	__asm        add    eax, 0x14;
	__asm        mov    dwResultToUse, eax;
// LINE 251:
	__asm        jmp    _T10c;
// LINE 253:
	__asm        mov    dwFlagToUse, 0x10;
// LINE 254:
	__asm        mov    eax, joyInfoExToUse;
	__asm        add    eax, 0x18;
	__asm        mov    dwResultToUse, eax;
// LINE 255:
	__asm        jmp    _T10c;
// LINE 257:
	__asm        mov    dwFlagToUse, 0x20;
// LINE 258:
	__asm        mov    eax, joyInfoExToUse;
	__asm        add    eax, 0x1C;
	__asm        mov    dwResultToUse, eax;
// LINE 259:
	__asm        jmp    _T10c;
// LINE 261:
_Td4:
	__asm        xor    eax, eax;
	__asm        jmp    _T1a0;
// LINE 262:
	__asm        jmp    _T10c;

_Te0:
	__asm        cmp    dword ptr [ebp-0x50], 5;
	__asm        ja     _Td4;

	__asm        mov    eax, [ebp-0x50];
	__asm        jmp    dword ptr [eax*4+0x49A92A];
// Switch pointers
// LINE 263:
_T10c:
	__asm        cmp    bUseCache, 0;
	__asm        jne    _T156;
// LINE 264:
	__asm        mov    eax, joyInfoExToUse;
	__asm        mov    dword ptr [eax], 0x34;
// LINE 265:
	__asm        mov    eax, dwFlagToUse;
	__asm        mov    ecx, joyInfoExToUse;
	__asm        mov    [ecx+4], eax;
// LINE 266:
	__asm        jmp    near ptr 0x0049A963;

	__asm        mov    eax, joyInfoExToUse;
	__asm        push   eax;
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, this;
	__asm        mov    eax, [ecx+eax*4+0x14];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38D8];
	__asm        mov    mmResult, eax;
// LINE 267:
	__asm        cmp    mmResult, 0;
	__asm        je     _T156;
// LINE 268:
	__asm        xor    eax, eax;
	__asm        jmp    _T1a0;
// LINE 270:
_T156:
	__asm        mov    eax, dwResultToUse;
	__asm        mov    eax, [eax];
	__asm        push   eax;
	__asm        mov    ecx, this;
	__asm        call   JoystickManager::Normalize;
	__asm        mov    nReturnValue, eax;
// LINE 272:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x5C];
	__asm        mov    ecx, this;
	__asm        add    eax, [ecx+0x60];
	__asm        cmp    eax, nReturnValue;
	__asm        jle    _T198;

	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x5C];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x60];
	__asm        cmp    eax, nReturnValue;
	__asm        jge    _T198;
// LINE 273:
	__asm        xor    eax, eax;
	__asm        jmp    _T1a0;
// LINE 274:
_T198:
	__asm        mov    eax, nReturnValue;
	__asm        jmp    _T1a0;
// LINE 279:
}

// FUNCTION: COPTER_D 0x0049a9dd
int32_t JoystickManager::GetButtonState(int32_t nJoystick, int32_t nButton, int32_t bUseCache) {
	struct joyinfoex_tag joyInfoEx;
	struct joyinfoex_tag* joyInfoExToUse;
	uint32_t mmResult;

// LINE 304:
	__asm        cmp    nJoystick, 0x10;
	__asm        jg     _T20;

	__asm        cmp    nButton, 0x20;
	__asm        jle    _T27;
// LINE 305:
_T20:
	__asm        xor    eax, eax;
	__asm        jmp    _Tb5;
// LINE 306:
_T27:
	__asm        cmp    bUseCache, 0;
	__asm        je     _T4f;
// LINE 307:
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*2];
	__asm        lea    eax, [ecx+eax*4];
	__asm        shl    eax, 2;
	__asm        add    eax, this;
	__asm        add    eax, 0x19A4;
	__asm        mov    joyInfoExToUse, eax;
// LINE 308:
	__asm        jmp    _T55;
// LINE 309:
_T4f:
	__asm        lea    eax, joyInfoEx.dwSize;
	__asm        mov    joyInfoExToUse, eax;
// LINE 311:
_T55:
	__asm        cmp    bUseCache, 0;
	__asm        jne    _Ta0;
// LINE 312:
	__asm        mov    eax, joyInfoExToUse;
	__asm        mov    dword ptr [eax], 0x34;
// LINE 313:
	__asm        mov    eax, joyInfoExToUse;
	__asm        mov    dword ptr [eax+4], 0x80;
// LINE 314:
	__asm        jmp    near ptr 0x0049AA54;

	__asm        mov    eax, joyInfoExToUse;
	__asm        push   eax;
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, this;
	__asm        mov    eax, [ecx+eax*4+0x14];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38D8];
	__asm        mov    mmResult, eax;
// LINE 315:
	__asm        cmp    mmResult, 0;
	__asm        je     _Ta0;
// LINE 316:
	__asm        xor    eax, eax;
	__asm        jmp    _Tb5;
// LINE 318:
_Ta0:
	__asm        mov    eax, nButton;
	__asm        mov    eax, [eax*4+0x591228];
	__asm        mov    ecx, joyInfoExToUse;
	__asm        and    eax, [ecx+0x20];
	__asm        jmp    _Tb5;
// LINE 323:
}

// FUNCTION: COPTER_D 0x0049aa99
int32_t JoystickManager::GetCompleteState(int32_t nJoystick) {
	uint32_t mmResult;

// LINE 341:
	__asm        cmp    nJoystick, 0x10;
	__asm        jle    _T1d;
// LINE 342:
	__asm        xor    eax, eax;
	__asm        jmp    _T9a;
// LINE 343:
_T1d:
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*2];
	__asm        lea    eax, [ecx+eax*4];
	__asm        mov    ecx, this;
	__asm        mov    dword ptr [ecx+eax*4+0x19A4], 0x34;
// LINE 344:
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*2];
	__asm        lea    eax, [ecx+eax*4];
	__asm        mov    ecx, this;
	__asm        mov    dword ptr [ecx+eax*4+0x19A8], 0xFF;
// LINE 345:
	__asm        jmp    near ptr 0x0049AAED;

	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*2];
	__asm        lea    eax, [ecx+eax*4];
	__asm        shl    eax, 2;
	__asm        add    eax, this;
	__asm        add    eax, 0x19A4;
	__asm        push   eax;
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, this;
	__asm        mov    eax, [ecx+eax*4+0x14];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38D8];
	__asm        mov    mmResult, eax;
// LINE 346:
	__asm        cmp    mmResult, 0;
	__asm        jne    _T93;
// LINE 347:
	__asm        mov    eax, 1;
	__asm        jmp    _T9a;
// LINE 349:
_T93:
	__asm        xor    eax, eax;
	__asm        jmp    _T9a;
// LINE 351:
}

// FUNCTION: COPTER_D 0x0049ab3a
int32_t JoystickManager::GetPointOfView(int32_t nJoystick, int32_t bUseCache) {
	struct joyinfoex_tag joyInfoEx;
	struct joyinfoex_tag* joyInfoExToUse;
	uint32_t mmResult;

// LINE 382:
	__asm        cmp    nJoystick, 0x10;
	__asm        jle    _T1d;
// LINE 383:
	__asm        xor    eax, eax;
	__asm        jmp    _Ta1;
// LINE 384:
_T1d:
	__asm        cmp    bUseCache, 0;
	__asm        je     _T45;
// LINE 385:
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, eax;
	__asm        lea    eax, [eax+eax*2];
	__asm        lea    eax, [ecx+eax*4];
	__asm        shl    eax, 2;
	__asm        add    eax, this;
	__asm        add    eax, 0x19A4;
	__asm        mov    joyInfoExToUse, eax;
// LINE 386:
	__asm        jmp    _T4b;
// LINE 387:
_T45:
	__asm        lea    eax, joyInfoEx.dwSize;
	__asm        mov    joyInfoExToUse, eax;
// LINE 389:
_T4b:
	__asm        cmp    bUseCache, 0;
	__asm        jne    _T96;
// LINE 390:
	__asm        mov    eax, joyInfoExToUse;
	__asm        mov    dword ptr [eax], 0x34;
// LINE 391:
	__asm        mov    eax, joyInfoExToUse;
	__asm        mov    dword ptr [eax+4], 0x40;
// LINE 392:
	__asm        jmp    near ptr 0x0049ABA7;

	__asm        mov    eax, joyInfoExToUse;
	__asm        push   eax;
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, this;
	__asm        mov    eax, [ecx+eax*4+0x14];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38D8];
	__asm        mov    mmResult, eax;
// LINE 393:
	__asm        cmp    mmResult, 0;
	__asm        je     _T96;
// LINE 394:
	__asm        xor    eax, eax;
	__asm        jmp    _Ta1;
// LINE 396:
_T96:
	__asm        mov    eax, joyInfoExToUse;
	__asm        mov    eax, [eax+0x28];
	__asm        jmp    _Ta1;
// LINE 401:
}

// FUNCTION: COPTER_D 0x0049abe2
int32_t JoystickManager::Calibrate(int32_t nJoystick) {
	uint32_t nReturnValue;

// LINE 419:
	__asm        push   1;
	__asm        push   0x59A28C;
	__asm        call   dword ptr ds:[0x6C35DC];
	__asm        mov    nReturnValue, eax;
// LINE 420:
	__asm        cmp    nReturnValue, 0x1F;
	__asm        jbe    _T30;
// LINE 421:
	__asm        mov    eax, 1;
	__asm        jmp    _T37;
// LINE 422:
_T30:
	__asm        xor    eax, eax;
	__asm        jmp    _T37;
// LINE 427:
}

// FUNCTION: COPTER_D 0x0049ac20
int32_t JoystickManager::GetWindowsThreshold(int32_t nJoystick, long * lThreshold) {
	uint32_t mmResult;

// LINE 453:
	__asm        cmp    nJoystick, 0x10;
	__asm        jle    _T1d;
// LINE 454:
	__asm        xor    eax, eax;
	__asm        jmp    _T55;
// LINE 455:
_T1d:
	__asm        jmp    near ptr 0x0049AC42;

	__asm        mov    eax, lThreshold;
	__asm        push   eax;
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, this;
	__asm        mov    eax, [ecx+eax*4+0x14];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38D4];
	__asm        mov    mmResult, eax;
// LINE 456:
	__asm        cmp    mmResult, 0;
	__asm        jne    _T4e;
// LINE 457:
	__asm        mov    eax, 1;
	__asm        jmp    _T55;
// LINE 458:
_T4e:
	__asm        xor    eax, eax;
	__asm        jmp    _T55;
// LINE 463:
}

// FUNCTION: COPTER_D 0x0049ac7c
int32_t JoystickManager::SetWindowsThreshold(int32_t nJoystick, long lThreshold) {
	uint32_t mmResult;

// LINE 477:
	__asm        cmp    nJoystick, 0x10;
	__asm        jle    _T1d;
// LINE 478:
	__asm        xor    eax, eax;
	__asm        jmp    _T55;
// LINE 479:
_T1d:
	__asm        jmp    near ptr 0x0049AC9E;

	__asm        mov    eax, lThreshold;
	__asm        push   eax;
	__asm        mov    eax, nJoystick;
	__asm        mov    ecx, this;
	__asm        mov    eax, [ecx+eax*4+0x14];
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38D0];
	__asm        mov    mmResult, eax;
// LINE 480:
	__asm        cmp    mmResult, 0;
	__asm        jne    _T4e;
// LINE 481:
	__asm        mov    eax, 1;
	__asm        jmp    _T55;
// LINE 482:
_T4e:
	__asm        xor    eax, eax;
	__asm        jmp    _T55;
// LINE 487:
}

// FUNCTION: COPTER_D 0x0049acd8
void JoystickManager::SetNormalizedMinMax(long lNewMin, long lNewMax) {
// LINE 499:
	__asm        mov    eax, lNewMin;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x54], eax;
// LINE 500:
	__asm        mov    eax, lNewMax;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+0x58], eax;
// LINE 501:
	__asm        mov    eax, this;
	__asm        mov    eax, [eax+0x58];
	__asm        mov    ecx, this;
	__asm        sub    eax, [ecx+0x54];
	__asm        cdq;
	__asm        sub    eax, edx;
	__asm        sar    eax, 1;
	__asm        mov    ecx, this;
	__asm        mov    ecx, [ecx+0x54];
	__asm        add    ecx, eax;
	__asm        mov    eax, this;
	__asm        mov    [eax+0x5C], ecx;
// LINE 503:
	__asm        jmp    near ptr 0x0049AD1B;
}



// Contribution: 2:00002228-000022a7 Module: 15, 8 byte alignment, initialized_data, read, 
// LOCAL: COPTER_D 0x00591228
// dwJoystickButtonConstants


// Contribution: 3:0000008c-0000008f Module: 15, 4 byte alignment, initialized_data, read, write, 
// LOCAL: COPTER_D 0x0059708c
// $S3


// Contribution: 3:0000328c-0000329b Module: 15, 4 byte alignment, initialized_data, read, write, 


// Contribution: 3:0006dc78-0006f95b Module: 15, 8 byte alignment, uninitialized_data, read, write, 
// GLOBAL: COPTER_D 0x00604c78
// gJoystickManager
