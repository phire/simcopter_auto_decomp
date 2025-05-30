// Module: cpuspeed.obj
// Source: C:\Copter\source\sparkal\cpuspeed.c
// autogenerated by simcopter_tool from PDB file

// Type: void * __ptr32;

// Type: unsigned long;

// Type: int32_t;

// Type: union _LARGE_INTEGER;

// Type: struct FREQ_INFO;
struct FREQ_INFO{
	unsigned long in_cycles;
	unsigned long ex_ticks;
	unsigned long raw_freq;
	unsigned long norm_freq;
};

// Type: unsigned short;

// Type: struct FREQ_INFO (forward reference);

// Type: unsigned short[12];

// Type: unsigned short *;

// Type: unsigned short[7];

// Type: unsigned short[6];

// Type: unsigned short[10];



// Contribution: 1:00046b60-00047268 Module: 48, 16 byte alignment, code, execute, read, 
// FUNCTION: COPTER_D 0x00447b60
int32_t DllMain(void * __ptr32 hDLL, unsigned long dwReason, void * __ptr32 lpReserved) {
// LINE 65:
	__asm        mov    eax, 1;
	__asm        jmp    near ptr 0x00447B70;
// LINE 67:
}

// FUNCTION: COPTER_D 0x00447b77
struct FREQ_INFO cpuspeed(int32_t clocks) {
	int32_t tries;
	unsigned long cycles;
	union _LARGE_INTEGER t1;
	unsigned long freq3;
	union _LARGE_INTEGER t0;
	unsigned long freq2;
	unsigned long total;
	union _LARGE_INTEGER count_freq;
	unsigned long freq;
	struct FREQ_INFO cpu_speed;
	unsigned short processor;
	unsigned long features;
	unsigned long stamp0;
	int32_t manual;
	unsigned long ticks;
	unsigned long stamp1;

// LINE 96:
	__asm        call   wincpuid;
	__asm        mov    processor, ax;
// LINE 98:
	__asm        call   wincpufeatures;
	__asm        mov    features, eax;
// LINE 108:
	__asm        mov    freq, 0;
// LINE 109:
	__asm        mov    freq2, 0;
// LINE 110:
	__asm        mov    freq3, 0;
// LINE 115:
	__asm        mov    manual, 0;
// LINE 119:
	__asm        mov    tries, 0;
// LINE 130:
	__asm        mov    cpu_speed.in_cycles, 0;
// LINE 131:
	__asm        mov    cpu_speed.ex_ticks, 0;
// LINE 132:
	__asm        mov    cpu_speed.raw_freq, 0;
// LINE 133:
	__asm        mov    cpu_speed.norm_freq, 0;
// LINE 135:
	__asm        test   *reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(&processor) + 1), 0x80;
	__asm        je     _T87;
// LINE 136:
	__asm        lea    eax, cpu_speed.in_cycles;
	__asm        mov    ecx, [ebp+8];
	__asm        mov    edx, [eax];
	__asm        mov    [ecx], edx;
	__asm        mov    edx, [eax+4];
	__asm        mov    [ecx+4], edx;
	__asm        mov    edx, [eax+8];
	__asm        mov    [ecx+8], edx;
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ecx+0xC], eax;
	__asm        mov    eax, [ebp+8];
	__asm        jmp    _T452;
// LINE 139:
_T87:
	__asm        cmp    clocks, 0;
	__asm        jne    _Tb4;
// LINE 140:
	__asm        mov    eax, reinterpret_cast<uint32_t>(processor);
	__asm        and    eax, 0xFFFF;
	__asm        mov    eax, [eax*4+0x598F28];
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*4];
	__asm        shl    eax, 5;
	__asm        mov    cycles, eax;
// LINE 142:
	__asm        jmp    _T10d;

_Tb4:
	__asm        cmp    clocks, 0;
	__asm        jle    _Te9;

	__asm        cmp    clocks, 0x96;
	__asm        jg     _Te9;
// LINE 143:
	__asm        mov    eax, clocks;
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*4];
	__asm        shl    eax, 5;
	__asm        mov    cycles, eax;
// LINE 144:
	__asm        mov    manual, 1;
// LINE 153:
	__asm        jmp    _T10d;
// LINE 154:
_Te9:
	__asm        lea    eax, cpu_speed.in_cycles;
	__asm        mov    ecx, [ebp+8];
	__asm        mov    edx, [eax];
	__asm        mov    [ecx], edx;
	__asm        mov    edx, [eax+4];
	__asm        mov    [ecx+4], edx;
	__asm        mov    edx, [eax+8];
	__asm        mov    [ecx+8], edx;
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ecx+0xC], eax;
	__asm        mov    eax, [ebp+8];
	__asm        jmp    _T452;
// LINE 159:
_T10d:
	__asm        lea    eax, count_freq<_LARGE_INTEGER+0x00:None>;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C3668];
	__asm        test   eax, eax;
	__asm        jne    _T143;
// LINE 164:
	__asm        lea    eax, cpu_speed.in_cycles;
	__asm        mov    ecx, [ebp+8];
	__asm        mov    edx, [eax];
	__asm        mov    [ecx], edx;
	__asm        mov    edx, [eax+4];
	__asm        mov    [ecx+4], edx;
	__asm        mov    edx, [eax+8];
	__asm        mov    [ecx+8], edx;
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ecx+0xC], eax;
	__asm        mov    eax, [ebp+8];
	__asm        jmp    _T452;
// LINE 166:
_T143:
	__asm        test   reinterpret_cast<uint8_t>(features), 0x10;
	__asm        je     _T2fb;

	__asm        cmp    manual, 0;
	__asm        jne    _T2fb;
// LINE 183:
_T157:
	__asm        inc    tries;
// LINE 186:
	__asm        mov    eax, freq2;
	__asm        mov    freq3, eax;
// LINE 187:
	__asm        mov    eax, freq;
	__asm        mov    freq2, eax;
// LINE 190:
	__asm        lea    eax, t0<_LARGE_INTEGER+0x00:None>;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C365C];
// LINE 194:
	__asm        mov    eax, t0<_LARGE_INTEGER+0x00:4>;
	__asm        mov    t1<_LARGE_INTEGER+0x00:4>, eax;
// LINE 195:
	__asm        mov    eax, t0<_LARGE_INTEGER+0x04:4>;
	__asm        mov    t1<_LARGE_INTEGER+0x04:4>, eax;
// LINE 197:
_T17c:
	__asm        mov    eax, t1<_LARGE_INTEGER+0x00:4>;
	__asm        sub    eax, t0<_LARGE_INTEGER+0x00:4>;
	__asm        cmp    eax, 0x32;
	__asm        jae    _T19a;
// LINE 203:
	__asm        lea    eax, t1<_LARGE_INTEGER+0x00:None>;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C365C];
// LINE 205:
	__asm        jmp    _T17c;
// LINE 208:
_T19a:
	__asm        rdtsc;
// LINE 212:
	__asm        mov    stamp0, eax;
// LINE 215:
	__asm        mov    eax, t1<_LARGE_INTEGER+0x00:4>;
	__asm        mov    t0<_LARGE_INTEGER+0x00:4>, eax;
// LINE 216:
	__asm        mov    eax, t1<_LARGE_INTEGER+0x04:4>;
	__asm        mov    t0<_LARGE_INTEGER+0x04:4>, eax;
// LINE 218:
_T1ab:
	__asm        mov    eax, t1<_LARGE_INTEGER+0x00:4>;
	__asm        sub    eax, t0<_LARGE_INTEGER+0x00:4>;
	__asm        cmp    eax, 0x3E8;
	__asm        jae    _T1cb;
// LINE 225:
	__asm        lea    eax, t1<_LARGE_INTEGER+0x00:None>;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C365C];
// LINE 227:
	__asm        jmp    _T1ab;
// LINE 230:
_T1cb:
	__asm        rdtsc;
// LINE 234:
	__asm        mov    stamp1, eax;
// LINE 237:
	__asm        mov    eax, stamp1;
	__asm        sub    eax, stamp0;
	__asm        mov    cycles, eax;
// LINE 243:
	__asm        mov    eax, t1<_LARGE_INTEGER+0x00:4>;
	__asm        sub    eax, t0<_LARGE_INTEGER+0x00:4>;
	__asm        mov    ticks, eax;
// LINE 257:
	__asm        mov    eax, ticks;
	__asm        mov    ecx, eax;
	__asm        shl    eax, 5;
	__asm        sub    eax, ecx;
	__asm        lea    eax, [ecx+eax*4];
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*4];
	__asm        shl    eax, 5;
	__asm        mov    ticks, eax;
// LINE 261:
	__asm        mov    ecx, 0xA;
	__asm        mov    eax, count_freq<_LARGE_INTEGER+0x00:4>;
	__asm        sub    edx, edx;
	__asm        div    ecx;
	__asm        mov    ecx, eax;
	__asm        mov    eax, ticks;
	__asm        sub    edx, edx;
	__asm        div    ecx;
	__asm        mov    ticks, eax;
// LINE 267:
	__asm        mov    eax, ticks;
	__asm        sub    edx, edx;
	__asm        div    count_freq<_LARGE_INTEGER+0x00:4>;
	__asm        mov    eax, count_freq<_LARGE_INTEGER+0x00:4>;
	__asm        shr    eax, 1;
	__asm        cmp    edx, eax;
	__asm        jbe    _T22c;
// LINE 269:
	__asm        inc    ticks;
// LINE 271:
_T22c:
	__asm        mov    eax, cycles;
	__asm        sub    edx, edx;
	__asm        div    ticks;
	__asm        mov    freq, eax;
// LINE 273:
	__asm        mov    eax, cycles;
	__asm        sub    edx, edx;
	__asm        div    ticks;
	__asm        mov    eax, ticks;
	__asm        shr    eax, 1;
	__asm        cmp    edx, eax;
	__asm        jbe    _T250;
// LINE 274:
	__asm        inc    freq;
// LINE 276:
_T250:
	__asm        mov    eax, freq2;
	__asm        add    eax, freq3;
	__asm        add    eax, freq;
	__asm        mov    total, eax;
// LINE 285:
	__asm        cmp    tries, 3;
	__asm        jl     _T157;

	__asm        cmp    tries, 0x14;
	__asm        jge    _T2c1;

	__asm        mov    eax, freq;
	__asm        lea    eax, [eax+eax*2];
	__asm        sub    eax, total;
	__asm        push   eax;
	__asm        call   abs;
	__asm        add    esp, 4;
	__asm        cmp    eax, 3;
	__asm        jg     _T157;

	__asm        mov    eax, freq2;
	__asm        lea    eax, [eax+eax*2];
	__asm        sub    eax, total;
	__asm        push   eax;
	__asm        call   abs;
	__asm        add    esp, 4;
	__asm        cmp    eax, 3;
	__asm        jg     _T157;

	__asm        mov    eax, freq3;
	__asm        lea    eax, [eax+eax*2];
	__asm        sub    eax, total;
	__asm        push   eax;
	__asm        call   abs;
	__asm        add    esp, 4;
	__asm        cmp    eax, 3;
	__asm        jg     _T157;
// LINE 290:
_T2c1:
	__asm        mov    eax, total;
	__asm        mov    ecx, 3;
	__asm        inc    eax;
	__asm        sub    edx, edx;
	__asm        div    ecx;
	__asm        mov    ecx, eax;
	__asm        mov    ebx, 3;
	__asm        mov    eax, total;
	__asm        sub    edx, edx;
	__asm        div    ebx;
	__asm        cmp    ecx, eax;
	__asm        je     _T2e7;
// LINE 291:
	__asm        inc    total;
// LINE 293:
_T2e7:
	__asm        mov    ecx, 3;
	__asm        mov    eax, total;
	__asm        sub    edx, edx;
	__asm        div    ecx;
	__asm        mov    freq, eax;
// LINE 298:
	__asm        jmp    _T409;

_T2fb:
	__asm        mov    eax, reinterpret_cast<uint32_t>(processor);
	__asm        and    eax, 0xFFFF;
	__asm        cmp    eax, 3;
	__asm        jl     _T3f4;
// LINE 309:
// Block start:
	unsigned long lowest;
	int32_t i;
	unsigned long current;
	__asm        mov    current, 0;
// LINE 313:
	__asm        mov    lowest, 0xFFFFFFFF;
// LINE 325:
	__asm        mov    i, 0;
	__asm        jmp    _T329;

_T326:
	__asm        inc    i;
_T329:
	__asm        cmp    i, 0xA;
	__asm        jge    _T37b;
// LINE 331:
	__asm        lea    eax, t0<_LARGE_INTEGER+0x00:None>;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C365C];
// LINE 336:
	__asm        mov    eax, 0x80000000;
// LINE 337:
	__asm        mov    bx, 0xFA0;
// LINE 344:
loop1:
_T346:
	__asm        bsf    ecx, eax;
// LINE 346:
	__asm        dec    bx;
// LINE 347:
	__asm        jne    _T346;
// LINE 350:
	__asm        lea    eax, t1<_LARGE_INTEGER+0x00:None>;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C365C];
// LINE 352:
	__asm        mov    eax, t1<_LARGE_INTEGER+0x00:4>;
	__asm        sub    eax, t0<_LARGE_INTEGER+0x00:4>;
	__asm        mov    current, eax;
// LINE 357:
	__asm        mov    eax, current;
	__asm        cmp    lowest, eax;
	__asm        jbe    _T376;
// LINE 358:
	__asm        mov    eax, current;
	__asm        mov    lowest, eax;
// LINE 359:
_T376:
	__asm        jmp    _T326;
// LINE 363:
_T37b:
	__asm        mov    eax, lowest;
	__asm        mov    ticks, eax;
// LINE 374:
	__asm        mov    eax, ticks;
	__asm        mov    ecx, eax;
	__asm        shl    eax, 5;
	__asm        sub    eax, ecx;
	__asm        lea    eax, [ecx+eax*4];
	__asm        lea    eax, [eax+eax*4];
	__asm        lea    eax, [eax+eax*4];
	__asm        shl    eax, 5;
	__asm        mov    ticks, eax;
// LINE 378:
	__asm        mov    ecx, 0xA;
	__asm        mov    eax, count_freq<_LARGE_INTEGER+0x00:4>;
	__asm        sub    edx, edx;
	__asm        div    ecx;
	__asm        mov    ecx, eax;
	__asm        mov    eax, ticks;
	__asm        sub    edx, edx;
	__asm        div    ecx;
	__asm        mov    ticks, eax;
// LINE 383:
	__asm        mov    eax, ticks;
	__asm        sub    edx, edx;
	__asm        div    count_freq<_LARGE_INTEGER+0x00:4>;
	__asm        mov    eax, count_freq<_LARGE_INTEGER+0x00:4>;
	__asm        shr    eax, 1;
	__asm        cmp    edx, eax;
	__asm        jbe    _T3cb;
// LINE 384:
	__asm        inc    ticks;
// LINE 386:
_T3cb:
	__asm        mov    eax, cycles;
	__asm        sub    edx, edx;
	__asm        div    ticks;
	__asm        mov    freq, eax;
// LINE 388:
	__asm        mov    eax, cycles;
	__asm        sub    edx, edx;
	__asm        div    ticks;
	__asm        mov    eax, ticks;
	__asm        shr    eax, 1;
	__asm        cmp    edx, eax;
	__asm        jbe    _T3ef;
// LINE 389:
	__asm        inc    freq;
// LINE 394:
// Block end:
_T3ef:
	__asm        jmp    _T409;
// LINE 396:
_T3f4:
	__asm        mov    cycles, 0;
// LINE 397:
	__asm        mov    ticks, 0;
// LINE 398:
	__asm        mov    freq, 0;
// LINE 402:
_T409:
	__asm        mov    eax, cycles;
	__asm        mov    cpu_speed.in_cycles, eax;
// LINE 403:
	__asm        mov    eax, ticks;
	__asm        mov    cpu_speed.ex_ticks, eax;
// LINE 404:
	__asm        mov    eax, freq;
	__asm        mov    cpu_speed.raw_freq, eax;
// LINE 405:
	__asm        mov    eax, freq;
	__asm        push   eax;
	__asm        mov    eax, reinterpret_cast<uint32_t>(processor);
	__asm        push   eax;
	__asm        call   NormFreq;
	__asm        add    esp, 8;
	__asm        mov    cpu_speed.norm_freq, eax;
// LINE 407:
	__asm        lea    eax, cpu_speed.in_cycles;
	__asm        mov    ecx, [ebp+8];
	__asm        mov    edx, [eax];
	__asm        mov    [ecx], edx;
	__asm        mov    edx, [eax+4];
	__asm        mov    [ecx+4], edx;
	__asm        mov    edx, [eax+8];
	__asm        mov    [ecx+8], edx;
	__asm        mov    eax, [eax+0xC];
	__asm        mov    [ecx+0xC], eax;
	__asm        mov    eax, [ebp+8];
	__asm        jmp    _T452;
// LINE 409:
}

// FUNCTION: COPTER_D 0x00447fce
unsigned long NormFreq(unsigned short processor, unsigned long freq) {
	unsigned short iPentiumSpeeds[12];
	unsigned short * speeds;
	unsigned short i486Speeds[7];
	unsigned short i386Speeds[6];
	unsigned short iPentiumProSpeeds[10];
	int32_t ptr;

// LINE 431:
	__asm        mov    i386Speeds[0], 0x10;
	__asm        mov    i386Speeds[1], 0x14;
	__asm        mov    i386Speeds[2], 0x19;
	__asm        mov    i386Speeds[3], 0x21;
	__asm        mov    i386Speeds[4], 0x28;
	__asm        mov    i386Speeds[5], 0;
// LINE 432:
	__asm        mov    i486Speeds[0], 0x19;
	__asm        mov    i486Speeds[1], 0x21;
	__asm        mov    i486Speeds[2], 0x32;
	__asm        mov    i486Speeds[3], 0x42;
	__asm        mov    i486Speeds[4], 0x4B;
	__asm        mov    i486Speeds[5], 0x64;
	__asm        mov    i486Speeds[6], 0;
// LINE 433:
	__asm        mov    iPentiumSpeeds[0], 0x3C;
	__asm        mov    iPentiumSpeeds[1], 0x42;
	__asm        mov    iPentiumSpeeds[2], 0x4B;
	__asm        mov    iPentiumSpeeds[3], 0x5A;
	__asm        mov    iPentiumSpeeds[4], 0x64;
	__asm        mov    iPentiumSpeeds[5], 0x78;
	__asm        mov    iPentiumSpeeds[6], 0x85;
// LINE 434:
	__asm        mov    iPentiumSpeeds[7], 0x96;
	__asm        mov    iPentiumSpeeds[8], 0xA6;
	__asm        mov    iPentiumSpeeds[9], 0xB9;
	__asm        mov    iPentiumSpeeds[10], 0xC8;
	__asm        mov    iPentiumSpeeds[11], 0;
// LINE 435:
	__asm        mov    iPentiumProSpeeds[0], 0x85;
	__asm        mov    iPentiumProSpeeds[1], 0x96;
	__asm        mov    iPentiumProSpeeds[2], 0xA7;
	__asm        mov    iPentiumProSpeeds[3], 0xB9;
	__asm        mov    iPentiumProSpeeds[4], 0xC8;
// LINE 436:
	__asm        mov    iPentiumProSpeeds[5], 0xDC;
	__asm        mov    iPentiumProSpeeds[6], 0xF0;
	__asm        mov    iPentiumProSpeeds[7], 0x10A;
	__asm        mov    iPentiumProSpeeds[8], 0x12C;
	__asm        mov    iPentiumProSpeeds[9], 0;
// LINE 438:
	__asm        mov    ptr, 0;
// LINE 440:
	__asm        mov    eax, reinterpret_cast<uint32_t>(processor);
	__asm        and    eax, 0xFFFF;
	__asm        cmp    eax, 3;
	__asm        jne    _T14d;
// LINE 442:
	__asm        lea    eax, i386Speeds[0];
	__asm        mov    speeds, eax;
// LINE 444:
_Tf9:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        test   edx, edx;
	__asm        je     _T140;
// LINE 445:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        add    edx, 2;
	__asm        cmp    edx, freq;
	__asm        jl     _T138;
// LINE 446:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        mov    eax, edx;
	__asm        jmp    _T296;
// LINE 451:
_T138:
	__asm        inc    ptr;
// LINE 452:
	__asm        jmp    _Tf9;
// LINE 454:
_T140:
	__asm        mov    eax, freq;
	__asm        jmp    _T296;
// LINE 458:
	__asm        jmp    _T296;

_T14d:
	__asm        mov    eax, reinterpret_cast<uint32_t>(processor);
	__asm        and    eax, 0xFFFF;
	__asm        cmp    eax, 4;
	__asm        jne    _T1b8;
// LINE 460:
	__asm        lea    eax, i486Speeds[0];
	__asm        mov    speeds, eax;
// LINE 462:
_T164:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        test   edx, edx;
	__asm        je     _T1ab;
// LINE 463:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        add    edx, 4;
	__asm        cmp    edx, freq;
	__asm        jl     _T1a3;
// LINE 464:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        mov    eax, edx;
	__asm        jmp    _T296;
// LINE 469:
_T1a3:
	__asm        inc    ptr;
// LINE 470:
	__asm        jmp    _T164;
// LINE 472:
_T1ab:
	__asm        mov    eax, freq;
	__asm        jmp    _T296;
// LINE 476:
	__asm        jmp    _T296;

_T1b8:
	__asm        mov    eax, reinterpret_cast<uint32_t>(processor);
	__asm        and    eax, 0xFFFF;
	__asm        cmp    eax, 5;
	__asm        jne    _T223;
// LINE 478:
	__asm        lea    eax, iPentiumSpeeds[0];
	__asm        mov    speeds, eax;
// LINE 480:
_T1cf:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        test   edx, edx;
	__asm        je     _T216;
// LINE 481:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        add    edx, 5;
	__asm        cmp    edx, freq;
	__asm        jl     _T20e;
// LINE 482:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        mov    eax, edx;
	__asm        jmp    _T296;
// LINE 487:
_T20e:
	__asm        inc    ptr;
// LINE 488:
	__asm        jmp    _T1cf;
// LINE 490:
_T216:
	__asm        mov    eax, freq;
	__asm        jmp    _T296;
// LINE 494:
	__asm        jmp    _T296;

_T223:
	__asm        mov    eax, reinterpret_cast<uint32_t>(processor);
	__asm        and    eax, 0xFFFF;
	__asm        cmp    eax, 6;
	__asm        jne    _T28e;
// LINE 496:
	__asm        lea    eax, iPentiumProSpeeds[0];
	__asm        mov    speeds, eax;
// LINE 498:
_T23a:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        test   edx, edx;
	__asm        je     _T281;
// LINE 499:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        add    edx, 5;
	__asm        cmp    edx, freq;
	__asm        jl     _T279;
// LINE 500:
	__asm        mov    eax, ptr;
	__asm        mov    ecx, speeds;
	__asm        xor    edx, edx;
	__asm        mov    dx, [ecx+eax*2];
	__asm        mov    eax, edx;
	__asm        jmp    _T296;
// LINE 505:
_T279:
	__asm        inc    ptr;
// LINE 506:
	__asm        jmp    _T23a;
// LINE 508:
_T281:
	__asm        mov    eax, freq;
	__asm        jmp    _T296;
// LINE 512:
	__asm        jmp    _T296;
// LINE 513:
_T28e:
	__asm        mov    eax, freq;
	__asm        jmp    _T296;
// LINE 515:
}



// Contribution: 3:00001f28-00001f57 Module: 48, 8 byte alignment, initialized_data, read, write, 
// LOCAL: COPTER_D 0x00598f28
// processor_cycles
