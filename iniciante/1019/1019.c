// 1019 - Conversão de Tempo - beecrowd
// Iniciante - Nível 1

#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int horas = N /3600;
    N %= 3600;

    int minutos = N / 60;
    N %= 60;

    int segundos = N;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
