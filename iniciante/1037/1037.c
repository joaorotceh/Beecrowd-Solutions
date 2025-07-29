// 1037 - Intervalo - beecrowd
// Iniciante - Nível 3

#include <stdio.h>

int main()
{
    double valor;
    scanf("%lf", &valor);

    if(valor < 0 || valor > 100)
    {
        printf("Fora de intervalo\n");
    }
    else
    {
        const char *intervalo;

        if     (valor <= 25)               intervalo = "[0,25]";
        else if(valor > 25 && valor <= 50) intervalo = "(25,50]";
        else if(valor > 50 && valor <= 75) intervalo = "(50,75]";
        else                               intervalo = "(75,100]";

        printf("Intervalo %s\n", intervalo);
    }

    return 0;
}
