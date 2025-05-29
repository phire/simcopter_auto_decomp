// Function in module: S3rdgrph.obj
// FUNCTION: COPTER_D 0x00541360
int32_t TimeOfTravelTable(unsigned short t) {
	 // Switch table at 0x0054150d

// LINE 778:
	__asm        push   ebp;
	__asm        mov    ebp, esp;
	__asm        sub    esp, 4;
	__asm        push   ebx;
	__asm        push   esi;
	__asm        push   edi;
// LINE 779:
	__asm        mov    eax, reinterpret_cast<uint32_t>(t);
	__asm        and    eax, 0xFFFF;
	__asm        mov    [ebp-4], eax;
	__asm        jmp    near ptr 0x005413E9;
// LINE 791:
	__asm        mov    eax, 8;
	__asm        jmp    near ptr 0x00541522;
// LINE 798:
	__asm        mov    eax, 0xA;
	__asm        jmp    near ptr 0x00541522;
// LINE 808:
	__asm        mov    eax, 8;
	__asm        jmp    near ptr 0x00541522;
// LINE 818:
	__asm        mov    eax, 4;
	__asm        jmp    near ptr 0x00541522;
// LINE 832:
	__asm        mov    eax, 8;
	__asm        jmp    near ptr 0x00541522;
// LINE 840:
	__asm        mov    eax, 8;
	__asm        jmp    near ptr 0x00541522;
// LINE 850:
	__asm        mov    eax, 0xA;
	__asm        jmp    near ptr 0x00541522;
// LINE 860:
	__asm        mov    eax, 8;
	__asm        jmp    near ptr 0x00541522;
// LINE 863:
	__asm        mov    eax, 0xA;
	__asm        jmp    near ptr 0x00541522;
// LINE 869:
	__asm        mov    eax, 4;
	__asm        jmp    near ptr 0x00541522;
// LINE 873:
	__asm        xor    eax, eax;
	__asm        jmp    near ptr 0x00541522;
// LINE 874:
	__asm        jmp    near ptr 0x00541522;
	__asm        cmp    dword ptr [ebp-4], 0x2B;
	__asm        jg     near ptr 0x00541416;
	__asm        cmp    dword ptr [ebp-4], 0x27;
	__asm        jge    near ptr 0x00541383;
	__asm        cmp    dword ptr [ebp-4], 0x1D;
	__asm        jl     near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x26;
	__asm        jle    near ptr 0x00541379;
	__asm        jmp    near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x50;
	__asm        jg     near ptr 0x00541443;
	__asm        cmp    dword ptr [ebp-4], 0x49;
	__asm        jge    near ptr 0x00541397;
	__asm        cmp    dword ptr [ebp-4], 0x3F;
	__asm        jl     near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x46;
	__asm        jle    near ptr 0x0054138D;
	__asm        jmp    near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x59;
	__asm        jg     near ptr 0x00541470;
	__asm        cmp    dword ptr [ebp-4], 0x57;
	__asm        jge    near ptr 0x005413AB;
	__asm        cmp    dword ptr [ebp-4], 0x51;
	__asm        jl     near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x56;
	__asm        jle    near ptr 0x005413A1;
	__asm        jmp    near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x68;
	__asm        jg     near ptr 0x0054149D;
	__asm        cmp    dword ptr [ebp-4], 0x61;
	__asm        jge    near ptr 0x005413BF;
	__asm        cmp    dword ptr [ebp-4], 0x5D;
	__asm        jl     near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x60;
	__asm        jle    near ptr 0x005413B5;
	__asm        jmp    near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x8056;
	__asm        jg     near ptr 0x005414DA;
	__asm        cmp    dword ptr [ebp-4], 0x8051;
	__asm        jge    near ptr 0x005413A1;
	__asm        cmp    dword ptr [ebp-4], 0x69;
	__asm        je     near ptr 0x005413C9;
	__asm        cmp    dword ptr [ebp-4], 0x6A;
	__asm        jl     near ptr 0x005413DD;
	__asm        cmp    dword ptr [ebp-4], 0x6B;
	__asm        jle    near ptr 0x005413D3;
	__asm        jmp    near ptr 0x005413DD;
	__asm        sub    dword ptr [ebp-4], 0x8057;
	__asm        cmp    dword ptr [ebp-4], 0x14;
	__asm        ja     near ptr 0x005413DD;
	__asm        mov    eax, [ebp-4];
	__asm        xor    ecx, ecx;
	__asm        mov    cl, [eax+0x54150D];
	__asm        jmp    dword ptr [ecx*4+0x5414FD];
	__asm        stosd;
	__asm        adc    edx, [eax+eax-0x4B];
	__asm        adc    edx, [eax+eax-0x2D];
	__asm        adc    edx, [eax+eax-0x23];
	__asm        adc    edx, [eax+eax];
	__asm        add    [eax], al;
	__asm        add    eax, [ebx];
	__asm        add    eax, [ecx];
	__asm        add    [ecx], eax;
	__asm        add    [ebx], eax;
	__asm        add    eax, [ebx];
	__asm        add    eax, [ebx];
	__asm        add    eax, [ebx];
	__asm        add    eax, [ebx];
	__asm        add    al, [edx];
// LINE 876:
	__asm        pop    edi;
	__asm        pop    esi;
	__asm        pop    ebx;
	__asm        leave;
	__asm        ret;
}

