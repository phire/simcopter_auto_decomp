// Function in module: Inputwin.obj
// FUNCTION: COPTER_D 0x0040f710
int32_t SetStringFromStringResource(/*packed*/ class basic_string<char>& stringToSet, unsigned long lResourceID) {
	/*bp-0x1000*/ char szString[4096]; // 0x1000 bytes
	/*bp-0x1004*/ int32_t nChars;

// LINE 123:
	__asm        push   0xFFF;
	__asm        lea    eax, szString[0];
	__asm        push   eax;
	__asm        mov    eax, lResourceID;
	__asm        push   eax;
	__asm        mov    eax, _ghWindowsInstance;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38B4];
	__asm        mov    nChars, eax;
// LINE 125:
	__asm        cmp    nChars, 0;
	__asm        jne    _T44b;
// LINE 130:
	__asm        push   0xFFF;
	__asm        lea    eax, szString[0];
	__asm        push   eax;
	__asm        mov    ecx, 0x3E8;
	__asm        mov    eax, lResourceID;
	__asm        sub    edx, edx;
	__asm        div    ecx;
	__asm        push   edx;
	__asm        mov    eax, _ghWindowsInstance;
	__asm        push   eax;
	__asm        call   dword ptr ds:[0x6C38B4];
	__asm        mov    nChars, eax;
// LINE 131:
	__asm        jmp    _T6f;
_T6f:
	__asm        lea    eax, szString[0];
	__asm        push   eax;
	__asm        call   strlen;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x1020], eax;
	__asm        cmp    dword ptr [ebp-0x1020], 0xFFFFFFFF;
	__asm        jne    _Tc9;

	__asm        push   0x5971E4;
	__asm        mov    ecx, 0x638C00;
	__asm        call   ostream::operator<<;
	__asm        mov    [ebp-0x1014], eax;
	__asm        mov    eax, [ebp-0x1014];
	__asm        push   eax;
	__asm        call   endl;
	__asm        add    esp, 4;
	__asm        jmp    _Tba;
_Tba:
	exit(0x1);
	__asm        jmp    _Tc9;
_Tc9:
	__asm        jmp    _Tce;
_Tce:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        cmp    dword ptr [eax+0xC], 1;
	__asm        ja     _T105;

	__asm        cmp    dword ptr [ebp-0x1020], 0;
	__asm        je     _T1cd;

	__asm        jmp    _Tf0;
_Tf0:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, [ebp-0x1020];
	__asm        cmp    [eax+8], ecx;
	__asm        jae    _T1cd;
_T105:
	__asm        push   0x10;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x100C], eax;
	__asm        cmp    dword ptr [ebp-0x100C], 0;
	__asm        je     _T146;

	__asm        mov    eax, [ebp-0x1020];
	__asm        push   eax;
	__asm        lea    eax, szString[0];
	__asm        push   eax;
	__asm        mov    ecx, [ebp-0x100C];
	__asm        call   basic_string_ref<char>::basic_string_ref<char>;
	__asm        mov    [ebp-0x1008], eax;
	__asm        jmp    _T150;
_T146:
	__asm        mov    dword ptr [ebp-0x1008], 0;
_T150:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        dec    dword ptr [eax+0xC];
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        cmp    dword ptr [eax+0xC], 0;
	__asm        jne    _T1b7;

	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x101C], eax;
	__asm        mov    eax, [ebp-0x101C];
	__asm        mov    [ebp-0x1018], eax;
	__asm        cmp    dword ptr [ebp-0x1018], 0;
	__asm        je     _T1b7;

	__asm        mov    ecx, [ebp-0x1018];
	__asm        call   basic_string_ref<char>::delete_ptr;
	__asm        jmp    _T19e;
_T19e:
	__asm        mov    eax, [ebp-0x1018];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    _T1b2;
_T1b2:
	__asm        jmp    _T1b7;
_T1b7:
	__asm        jmp    _T1bc;
_T1bc:
	__asm        mov    eax, [ebp-0x1008];
	__asm        mov    ecx, stringToSet;
	__asm        mov    [ecx+4], eax;
	__asm        jmp    _T20f;
_T1cd:
	__asm        cmp    dword ptr [ebp-0x1020], 0;
	__asm        je     _T20f;

	__asm        jmp    _T1df;
_T1df:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x1010], eax;
	__asm        mov    eax, [ebp-0x1020];
	__asm        push   eax;
	__asm        lea    eax, szString[0];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x1010];
	__asm        push   eax;
	__asm        call   memcpy;
	__asm        add    esp, 0xC;
	__asm        jmp    _T20f;
_T20f:
	__asm        mov    eax, [ebp-0x1020];
	__asm        mov    ecx, stringToSet;
	__asm        mov    ecx, [ecx+4];
	__asm        mov    [ecx+4], eax;
	__asm        jmp    _T223;
_T223:
	__asm        jmp    _T228;
// LINE 132:
_T228:
	__asm        jmp    _T22d;
_T22d:
	__asm        push   0x597200;
	__asm        call   strlen;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x1040], eax;
	__asm        jmp    _T245;
_T245:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, 0xFFFFFFFF;
	__asm        sub    ecx, [ebp-0x1040];
	__asm        cmp    [eax+4], ecx;
	__asm        jb     _T297;

	__asm        push   0x5971E4;
	__asm        mov    ecx, 0x638C00;
	__asm        call   ostream::operator<<;
	__asm        mov    [ebp-0x1034], eax;
	__asm        mov    eax, [ebp-0x1034];
	__asm        push   eax;
	__asm        call   endl;
	__asm        add    esp, 4;
	__asm        jmp    _T288;
_T288:
	exit(0x1);
	__asm        jmp    _T297;
_T297:
	__asm        jmp    _T29c;
_T29c:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        cmp    dword ptr [eax+0xC], 1;
	__asm        ja     _T2d4;

	__asm        jmp    _T2b1;
_T2b1:
	__asm        jmp    _T2b6;
_T2b6:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    eax, [eax+8];
	__asm        mov    ecx, stringToSet;
	__asm        mov    ecx, [ecx+4];
	__asm        sub    eax, [ecx+4];
	__asm        cmp    eax, [ebp-0x1040];
	__asm        jae    _T3d9;
_T2d4:
	__asm        push   0x10;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x1028], eax;
	__asm        cmp    dword ptr [ebp-0x1028], 0;
	__asm        je     _T36e;

	__asm        jmp    _T2f6;
_T2f6:
	__asm        jmp    _T2fb;
_T2fb:
	__asm        jmp    _T300;
_T300:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        cmp    dword ptr [eax+4], 0;
	__asm        je     _T328;

	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x1030], eax;
	__asm        jmp    _T337;

	__asm        jmp    _T337;
_T328:
	__asm        mov    dword ptr [ebp-0x1030], 0;
	__asm        jmp    _T337;
_T337:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    eax, [eax+4];
	__asm        add    eax, [ebp-0x1040];
	__asm        push   eax;
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    eax, [eax+4];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x1030];
	__asm        push   eax;
	__asm        mov    ecx, [ebp-0x1028];
	__asm        call   basic_string_ref<char>::basic_string_ref<char>;
	__asm        mov    [ebp-0x1024], eax;
	__asm        jmp    _T378;
_T36e:
	__asm        mov    dword ptr [ebp-0x1024], 0;
_T378:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        dec    dword ptr [eax+0xC];
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        cmp    dword ptr [eax+0xC], 0;
	__asm        jne    _T3c8;

	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x103C], eax;
	__asm        mov    eax, [ebp-0x103C];
	__asm        mov    [ebp-0x1038], eax;
	__asm        cmp    dword ptr [ebp-0x1038], 0;
	__asm        je     _T3c8;

	__asm        push   1;
	__asm        mov    ecx, [ebp-0x1038];
	__asm        call   basic_string_ref<char>::`scalar deleting destructor';
	__asm        jmp    _T3c8;
_T3c8:
	__asm        jmp    _T3cd;
_T3cd:
	__asm        mov    eax, [ebp-0x1024];
	__asm        mov    ecx, stringToSet;
	__asm        mov    [ecx+4], eax;
_T3d9:
	__asm        cmp    dword ptr [ebp-0x1040], 0;
	__asm        je     _T427;

	__asm        jmp    _T3eb;
_T3eb:
	__asm        jmp    _T3f0;
_T3f0:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, stringToSet;
	__asm        mov    ecx, [ecx+4];
	__asm        add    eax, [ecx];
	__asm        mov    [ebp-0x102C], eax;
	__asm        mov    eax, [ebp-0x1040];
	__asm        push   eax;
	__asm        push   0x597200;
	__asm        mov    eax, [ebp-0x102C];
	__asm        push   eax;
	__asm        call   memcpy;
	__asm        add    esp, 0xC;
	__asm        jmp    _T427;
_T427:
	__asm        mov    eax, [ebp-0x1040];
	__asm        mov    ecx, stringToSet;
	__asm        mov    ecx, [ecx+4];
	__asm        add    [ecx+4], eax;
	__asm        jmp    _T43b;
_T43b:
	__asm        jmp    _T440;
// LINE 133:
_T440:
	return nChars;
// LINE 136:
_T44b:
	__asm        jmp    _T450;
_T450:
	__asm        lea    eax, szString[0];
	__asm        push   eax;
	__asm        call   strlen;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x1070], eax;
	__asm        cmp    dword ptr [ebp-0x1070], 0xFFFFFFFF;
	__asm        jne    _T4aa;

	__asm        push   0x5971E4;
	__asm        mov    ecx, 0x638C00;
	__asm        call   ostream::operator<<;
	__asm        mov    [ebp-0x1050], eax;
	__asm        mov    eax, [ebp-0x1050];
	__asm        push   eax;
	__asm        call   endl;
	__asm        add    esp, 4;
	__asm        jmp    _T49b;
_T49b:
	exit(0x1);
	__asm        jmp    _T4aa;
_T4aa:
	__asm        jmp    _T4af;
_T4af:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        cmp    dword ptr [eax+0xC], 1;
	__asm        ja     _T4e6;

	__asm        cmp    dword ptr [ebp-0x1070], 0;
	__asm        je     _T6d9;

	__asm        jmp    _T4d1;
_T4d1:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, [ebp-0x1070];
	__asm        cmp    [eax+8], ecx;
	__asm        jae    _T6d9;
_T4e6:
	__asm        push   0x10;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    [ebp-0x1048], eax;
	__asm        cmp    dword ptr [ebp-0x1048], 0;
	__asm        je     _T606;

	__asm        cmp    dword ptr [ebp-0x1070], 0xFFFFFFFF;
	__asm        jne    _T548;

	__asm        push   0x5971E4;
	__asm        mov    ecx, 0x638C00;
	__asm        call   ostream::operator<<;
	__asm        mov    [ebp-0x106C], eax;
	__asm        mov    eax, [ebp-0x106C];
	__asm        push   eax;
	__asm        call   endl;
	__asm        add    esp, 4;
	__asm        jmp    _T539;
_T539:
	exit(0x1);
	__asm        jmp    _T548;
_T548:
	__asm        mov    eax, [ebp-0x1070];
	__asm        mov    ecx, [ebp-0x1048];
	__asm        mov    [ecx+4], eax;
	__asm        mov    eax, [ebp-0x1048];
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, [ebp-0x1048];
	__asm        mov    [ecx+8], eax;
	__asm        mov    eax, [ebp-0x1048];
	__asm        cmp    dword ptr [eax+8], 0;
	__asm        je     _T5d7;

	__asm        mov    eax, [ebp-0x1048];
	__asm        mov    eax, [eax+8];
	__asm        push   eax;
	__asm        call   operator new;
	__asm        add    esp, 4;
	__asm        mov    ecx, [ebp-0x1048];
	__asm        mov    [ecx], eax;
	__asm        mov    eax, [ebp-0x1048];
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x1064], eax;
	__asm        mov    eax, [ebp-0x1048];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x1068], eax;
	__asm        mov    eax, [ebp-0x1064];
	__asm        push   eax;
	__asm        lea    eax, szString[0];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x1068];
	__asm        push   eax;
	__asm        call   memcpy;
	__asm        add    esp, 0xC;
	__asm        jmp    _T5d2;
_T5d2:
	__asm        jmp    _T5e3;
_T5d7:
	__asm        mov    eax, [ebp-0x1048];
	__asm        mov    dword ptr [eax], 0;
_T5e3:
	__asm        mov    eax, [ebp-0x1048];
	__asm        mov    dword ptr [eax+0xC], 1;
	__asm        jmp    _T5f5;
_T5f5:
	__asm        mov    eax, [ebp-0x1048];
	__asm        mov    [ebp-0x1044], eax;
	__asm        jmp    _T610;
_T606:
	__asm        mov    dword ptr [ebp-0x1044], 0;
_T610:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        dec    dword ptr [eax+0xC];
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        cmp    dword ptr [eax+0xC], 0;
	__asm        jne    _T6c3;

	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    [ebp-0x1058], eax;
	__asm        mov    eax, [ebp-0x1058];
	__asm        mov    [ebp-0x1054], eax;
	__asm        cmp    dword ptr [ebp-0x1054], 0;
	__asm        je     _T6c3;

	__asm        mov    eax, [ebp-0x1054];
	__asm        cmp    dword ptr [eax+8], 0;
	__asm        je     _T6a0;

	__asm        mov    eax, [ebp-0x1054];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x105C], eax;
	__asm        mov    eax, [ebp-0x105C];
	__asm        mov    [ebp-0x1060], eax;
	__asm        mov    eax, [ebp-0x1060];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        mov    eax, [ebp-0x1054];
	__asm        mov    dword ptr [eax+8], 0;
	__asm        mov    eax, [ebp-0x1054];
	__asm        mov    dword ptr [eax], 0;
_T6a0:
	__asm        jmp    _T6a5;
_T6a5:
	__asm        jmp    _T6aa;
_T6aa:
	__asm        mov    eax, [ebp-0x1054];
	__asm        push   eax;
	__asm        call   operator delete;
	__asm        add    esp, 4;
	__asm        jmp    _T6be;
_T6be:
	__asm        jmp    _T6c3;
_T6c3:
	__asm        jmp    _T6c8;
_T6c8:
	__asm        mov    eax, [ebp-0x1044];
	__asm        mov    ecx, stringToSet;
	__asm        mov    [ecx+4], eax;
	__asm        jmp    _T71b;
_T6d9:
	__asm        cmp    dword ptr [ebp-0x1070], 0;
	__asm        je     _T71b;

	__asm        jmp    _T6eb;
_T6eb:
	__asm        mov    eax, stringToSet;
	__asm        mov    eax, [eax+4];
	__asm        mov    eax, [eax];
	__asm        mov    [ebp-0x104C], eax;
	__asm        mov    eax, [ebp-0x1070];
	__asm        push   eax;
	__asm        lea    eax, szString[0];
	__asm        push   eax;
	__asm        mov    eax, [ebp-0x104C];
	__asm        push   eax;
	__asm        call   memcpy;
	__asm        add    esp, 0xC;
	__asm        jmp    _T71b;
_T71b:
	__asm        mov    eax, [ebp-0x1070];
	__asm        mov    ecx, stringToSet;
	__asm        mov    ecx, [ecx+4];
	__asm        mov    [ecx+4], eax;
	__asm        jmp    _T72f;
_T72f:
	__asm        jmp    _T734;
// LINE 137:
_T734:
	return nChars;
// LINE 139:
}

