#include <stdio.h>

int main()
{
    int SEG, horas, minutos, segundos, resto;

    scanf("%d", &SEG);

    horas = SEG / 3600;
    resto = SEG % 3600;

    minutos = resto / 60;
    resto = resto % 60;

    segundos = resto;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}