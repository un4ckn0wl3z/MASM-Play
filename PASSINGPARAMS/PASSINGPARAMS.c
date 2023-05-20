#include <Windows.h>

extern int AsmFunc11Parms(PVOID Parm1, PVOID Parm2, PVOID Parm3, PVOID Parm4, PVOID Parm5, PVOID Parm6, PVOID Parm7, PVOID Parm8, PVOID Parm9, PVOID Parm10, PVOID Parm11);
extern int AddtwoNumbers();
int main() {
	AsmFunc11Parms(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
	
	int x = AddtwoNumbers();

	return 0;
}