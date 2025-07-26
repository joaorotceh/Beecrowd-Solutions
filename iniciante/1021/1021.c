// 1021 - Notas e Moedas - beecrowd
// Iniciante - Nível 6

#include <stdio.h>

int main() {
    const int tamanho = 6;

    const double NOTAS[] = {100, 50, 20, 10, 5, 2};
    const double MOEDAS[] = {100, 50, 25, 10, 5, 1};

    double valor;
    scanf("%lf", &valor);

    printf("NOTAS:\n");

    for(int i=0; i<tamanho; i++) {
        int quantidade = valor / NOTAS[i];

        printf("%d nota(s) de R$ %.2lf\n", quantidade, NOTAS[i]);

        valor -= quantidade * NOTAS[i];
    }

    printf("MOEDAS:\n");

    valor *= 100;

    for(int i=0; i<tamanho; i++) {
        int quantidade = valor / MOEDAS[i];

        printf("%d moeda(s) de R$ %.2lf\n", quantidade, MOEDAS[i] / 100);

        valor -= quantidade * MOEDAS[i];
    }

    return 0;
}
