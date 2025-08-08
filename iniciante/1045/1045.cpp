// 1045 - Tipos de Triangulo - beecrowd
// Iniciante - Nivel 4

#include <iostream>
#include <algorithm>

using std::cout;

int main()
{
    const int tamanho = 3;

    double val[tamanho];
    for (int i = 0; i < tamanho; i++) std::cin >> val[i];

    std::sort(val, val + 3, std::greater<double>());

    double A = val[0],
           B = val[1],
           C = val[2];
    
    if (A >= B + C) cout << "NAO FORMA TRIANGULO\n";
    else
    {
        double A2 = A * A,
               B2 = B * B,
               C2 = C * C;
        
        if (A2 == B2 + C2) cout << "TRIANGULO RETANGULO\n";
        if (A2  > B2 + C2) cout << "TRIANGULO OBTUSANGULO\n";
        if (A2  < B2 + C2) cout << "TRIANGULO ACUTANGULO\n";

        if (A == B && B == C) cout << "TRIANGULO EQUILATERO\n";
        else if (A == B || A == C || B == C) cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}
