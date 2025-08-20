// 1050 - DDD - beecrowd
// Iniciante - Nivel 2

#include <iostream>
#include <map>
#include <string>

void resultado(int numero)
{
    std::map<int, std::string> DDD = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };

    if (DDD.count(numero)) std::cout << DDD[numero] << '\n';
    else std::cout << "DDD nao cadastrado\n";
}

int main()
{
    int numero;
    std::cin >> numero;

    resultado(numero);

    return 0;
}
