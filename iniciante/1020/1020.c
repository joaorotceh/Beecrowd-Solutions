// 1020 - Idade em Dias - beecrowd
// Iniciante - Nível 2

#include <stdio.h>

int main() {

    int idade_dias;
    scanf("%d", &idade_dias);

    int anos = idade_dias / 365;
    idade_dias %= 365;

    int meses = idade_dias / 30;
    idade_dias %= 30;

    int dias = idade_dias;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}
