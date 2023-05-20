#include <Windows.h>
#include <stdio.h>


extern int	AddtwoNumbers(int i, int j);
extern void AsmHelloWorld();

int main()
{
	int result = AddtwoNumbers(1, 4);
	AsmHelloWorld();

	printf("[#] Press <Enter> To Quit ... ");
	getchar();


	return 0;
}

