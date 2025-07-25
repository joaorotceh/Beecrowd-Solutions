// 1002 - Área do Círculo - beecrowd
// Iniciante - Nível 4

#include <stdio.h>

int main() {

    const double pi = 3.14159;

    double raio;
    scanf("%lf", &raio);

    double area = pi * raio * raio;

    printf("A=%.4lf\n", area);

    return 0;
}
