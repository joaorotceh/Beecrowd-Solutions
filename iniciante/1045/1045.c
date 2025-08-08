// 1045 - Tipos de Triangulo - beecrowd
// Iniciante - Nivel 4

#include <stdio.h>

int main()
{
    const int tamanho = 3;

    double x;
    double val[tamanho];
    for (int i = 0; i < tamanho; i++) scanf("%lf", &val[i]);

    if (val[0] < val[1]) {x = val[0]; val[0] = val[1]; val[1] = x;}
    if (val[0] < val[2]) {x = val[0]; val[0] = val[2]; val[2] = x;}
    if (val[1] < val[2]) {x = val[1]; val[1] = val[2]; val[2] = x;}

    double A = val[0],
           B = val[1],
           C = val[2];

    if (A >= B + C) puts("NAO FORMA TRIANGULO");
    else
    {
        double A2 = A * A,
               B2 = B * B,
               C2 = C * C;

        if (A2 == B2 + C2) puts("TRIANGULO RETANGULO");
        if (A2  > B2 + C2) puts("TRIANGULO OBTUSANGULO");
        if (A2  < B2 + C2) puts("TRIANGULO ACUTANGULO");

        if (A == B && B == C) puts("TRIANGULO EQUILATERO");
        else if (A == B || A == C || B == C) puts("TRIANGULO ISOSCELES");
    }

    return 0;
}
