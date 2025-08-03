// 1041 - Coordenadas de um Ponto - beecrowd
// Iniciante - Nível 3

#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0) puts("Origem");
    else if (x == 0 || y == 0) printf("%s\n", (x == 0.0) ? "Eixo Y" : "Eixo X");
    else puts(x > 0 ? (y > 0 ? "Q1" : "Q4") : (y > 0 ? "Q2" : "Q3"));

    return 0;
}
