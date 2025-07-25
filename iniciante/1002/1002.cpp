// 1002 - Área do Círculo - beecrowd
// Iniciante - Nível 4

#include <iostream>
#include <iomanip>

int main() {

    const double pi = 3.14159;

    double raio;
    std::cin >> raio;

    double area = pi * raio * raio;

    std::cout << std::fixed << std::setprecision(4) << "A=" << area << '\n';

    return 0;
}
