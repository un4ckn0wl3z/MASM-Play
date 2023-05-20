#include <stdio.h>

extern void AsmCallFunction();

int main()
{
    AsmCallFunction();
    printf("[#] Press <Enter> To Quit ... ");
    getchar();
    return 0;
}

