#include <stdio.h>

int main()
{
    int idade, anos, meses, dias, resto;

    scanf("%d", &idade);

    anos = idade / 365;
    resto = idade % 365;
    
    meses = resto / 30;
    resto = resto % 30;

    dias = resto;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    return 0;
}