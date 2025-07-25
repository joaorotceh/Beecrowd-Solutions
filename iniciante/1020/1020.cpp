// 1020 - Idade em Dias - beecrowd
// Iniciante - Nível 2

#include <iostream>

int main() {

    int idade_dias;
    std::cin >> idade_dias;

    int anos = idade_dias / 365;
    idade_dias %= 365;

    int meses = idade_dias / 30;
    idade_dias %= 30;

    int dias = idade_dias;

    std::cout << anos  << " ano(s)\n"
              << meses << " mes(es)\n"
              << dias  << " dia(s)\n";

    return 0;
}
