/*
      main.c file
*/

#include <stdio.h>

extern int SimpleAsmFunc(); // SimpleAsmFunc's prototype. Parameters and function return data type is covered in a later section


// Dummy C function
void SimpleCFunc() {

	int i = 100;
	i = i * (i + 7) >> 3;
	i += i / 2;

	if (i > 100)
		i -= 20;
	else
		i += 20;


}
int main() {
    printf("[i] Calling 'SimpleAsmFunc' ... ");
    int ret = SimpleAsmFunc();
    printf("[+] Done");
    return 0;
}