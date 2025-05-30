// Module: Notify.obj
// Source: C:\Copter\source\sparkal\Notify.cpp
// autogenerated by simcopter_tool from PDB file

// Type: class NotificationItem (forward reference);
class NotificationItem{
public:
	long lPreferenceType;
	class NotificationSink* myNotificationSink;
	void NotificationItem(long, class NotificationSink*);
	void NotificationItem(const class NotificationItem&);
	void NotificationItem();
	class NotificationItem& operator=(const class NotificationItem&);
};

// Type: void;

// Type: long;

// Type: class NotificationSink (forward reference);
class NotificationSink{
public:
	// vtable: 0
	intro void DoNotificationChange(long, class PreferenceManager*);
};

// Type: int32_t;



// Contribution: 1:0003d160-0003d24d Module: 54, 16 byte alignment, code, execute, read, 
// FUNCTION: COPTER_D 0x0043e160
void NotificationItem::NotificationItem() {

	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax], 0;
	__asm        mov    eax, this;
	__asm        mov    dword ptr [eax+4], 0;
// LINE 10:
	__asm        jmp    near ptr 0x0043E184;

	__asm        mov    eax, this;
}

// FUNCTION: COPTER_D 0x0043e18c
void NotificationItem::NotificationItem(const class NotificationItem& newNotificationSink) {
// LINE 13:
	__asm        mov    eax, newNotificationSink;
	__asm        push   eax;
	__asm        mov    ecx, this;
	__asm        call   NotificationItem::operator=;
// LINE 14:
	__asm        jmp    near ptr 0x0043E1A9;

	__asm        mov    eax, this;
}

// FUNCTION: COPTER_D 0x0043e1b3
void NotificationItem::NotificationItem(long lNewPreferenceType, class NotificationSink* newNotificationSink) {

	__asm        mov    eax, lNewPreferenceType;
	__asm        mov    ecx, this;
	__asm        mov    [ecx], eax;
	__asm        mov    eax, newNotificationSink;
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
// LINE 20:
	__asm        jmp    near ptr 0x0043E1D5;

	__asm        mov    eax, this;
}

// FUNCTION: COPTER_D 0x0043e1df
class NotificationItem& NotificationItem::operator=(const class NotificationItem& P2) {
// LINE 23:
	__asm        mov    eax, P2;
	__asm        mov    eax, [eax];
	__asm        mov    ecx, this;
	__asm        mov    [ecx], eax;
// LINE 24:
	__asm        mov    eax, P2;
	__asm        mov    eax, [eax+4];
	__asm        mov    ecx, this;
	__asm        mov    [ecx+4], eax;
// LINE 25:
	__asm        mov    eax, this;
	__asm        jmp    near ptr 0x0043E209;
// LINE 26:
}

// FUNCTION: COPTER_D 0x0043e210
int32_t operator==(const class NotificationItem& P1, const class NotificationItem& P2) {
// LINE 31:
	__asm        mov    eax, P1;
	__asm        mov    ecx, P2;
	__asm        mov    ecx, [ecx];
	__asm        cmp    [eax], ecx;
	__asm        jne    _T32;

	__asm        mov    eax, P1;
	__asm        mov    ecx, P2;
	__asm        mov    ecx, [ecx+4];
	__asm        cmp    [eax+4], ecx;
	__asm        jne    _T32;

	__asm        mov    eax, 1;
	__asm        jmp    _T34;

_T32:
	__asm        xor    eax, eax;
_T34:
	__asm        jmp    near ptr 0x0043E249;
// LINE 32:
}

