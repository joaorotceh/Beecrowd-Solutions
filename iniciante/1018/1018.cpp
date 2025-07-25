// 1018 - Cédulas - beecrowd
// Iniciante - Nível 4

#include <iostream>
#include <array>

void decompor_cedulas(int valor) {  
    const std::array<int, 7> NOTAS{100, 50, 20, 10, 5, 2, 1};

    std::cout << valor << '\n';

    for(auto nota: NOTAS) {
        int cedula = valor / nota;

        std::cout << cedula << " nota(s) de R$ "
                  << nota << ",00\n";
 
        valor%=nota;
    }
}

int main() {

    int valor;
    std::cin >> valor;

    decompor_cedulas(valor);

    return 0;
}
