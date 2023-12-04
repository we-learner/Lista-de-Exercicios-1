#include <stdio.h>

int main()
{
    int x;
    float CONS, y;

    scanf("%d%f", &x, &y);

    CONS = x / y;

    printf("%.3f km/l\n", CONS);

    return 0;
}