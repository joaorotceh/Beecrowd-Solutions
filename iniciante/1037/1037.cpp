// 1037 - Intervalo - beecrowd
// Iniciante - Nível 3

#include <iostream>
#include <string>

int main()
{
    double valor;
    std::cin >> valor;

    if(valor < 0 || valor > 100)
    {
        std::cout << "Fora de intervalo\n";
    }
    else
    {
        std::string intervalo;

        if     (valor <= 25)               intervalo = "[0,25]";
        else if(valor > 25 && valor <= 50) intervalo = "(25,50]";
        else if(valor > 50 && valor <= 75) intervalo = "(50,75]";
        else                               intervalo = "(75,100]";

        std::cout << "Intervalo " << intervalo << '\n';
    }

    return 0;
}
