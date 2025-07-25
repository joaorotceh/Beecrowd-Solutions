// 1019 - Conversão de Tempo - beecrowd
// Iniciante - Nível 1

#include <iostream>

int main() {

    int N;
    std::cin >> N;

    int horas = N / 3600;
    N %= 3600;

    int minutos = N / 60;
    N %= 60;

    int segundos = N;

    std::cout << horas << ":" << minutos << ":" << segundos << '\n';

    return 0;
}
