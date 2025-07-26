// 1021 - Notas e Moedas - beecrowd
// Iniciante - Nível 6

#include <iostream>
#include <iomanip>
#include <array>

using std::cout;

int main() {
    
    const std::array<double, 6> NOTAS{100, 50, 20, 10, 5, 2};
    const std::array<double, 6> MOEDAS{100, 50, 25, 10, 5, 1};

    double valor;
    std::cin >> valor;

    cout << "NOTAS:\n";

    for(auto nota: NOTAS) {
        int quantidade = valor / nota;

        cout << std::fixed << std::setprecision(2)
             << quantidade << " nota(s) de R$ " << nota << '\n';

        valor -= nota * quantidade;
    }

    cout << "MOEDAS:\n";

    valor *= 100;

    for(auto moeda: MOEDAS) {
        int quantidade = valor / moeda;

        cout << quantidade << " moeda(s) de R$ " << (moeda / 100) << '\n';

        valor -= moeda * quantidade;
    }

    return 0;
}
