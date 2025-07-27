// 1036 - Fórmula de Bhaskara - beecrowd
// Iniciante - Nível 3

#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;

int main()
{
    double A, B, C;
    std::cin >> A >> B >> C;

    double delta = B * B - 4 * A * C;

    cout << delta << '\n';

    if(A == 0 || delta < 0)
    {
        cout << "Impossivel calcular\n";
    } 
    else
    {
        double r1 = ((B * -1) + std::sqrt(delta)) / (2 * A);
        double r2 = ((B * -1) - std::sqrt(delta)) / (2 * A);

        cout << std::fixed << std::setprecision(5);

        cout << "R1 = " << r1 << '\n';
        cout << "R2 = " << r2 << '\n';
    }

    return 0;
}
