#include <stdio.h>

int main()
{
    int DIF, A, B, C, D;

    scanf("%d%d%d%d", &A, &B, &C, &D);

    DIF = A * B - C * D;

    printf("DIFERENCA = %d\n", DIF);

    return 0;
}