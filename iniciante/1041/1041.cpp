// 1041 - Coordenadas de um Ponto - beecrowd
// Iniciante - Nível 3

#include <iostream>

using std::cout;

int main()
{
    double x, y;
    std::cin >> x >> y;

    if (x == 0 && y == 0) cout << "Origem\n";
    else if (x == 0 || y == 0) cout << (x == 0 ? "Eixo Y\n" : "Eixo X\n");
    else cout << (x > 0 ? (y > 0 ? "Q1\n" : "Q4\n") : (y > 0 ? "Q2\n" : "Q3\n"));

    return 0;
}
