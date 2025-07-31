// 1038 - Lanche - beecrowd
// Iniciante - Nível 1

#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
    const std::vector<std::pair<int, double>> CARDAPIO = {
        {1, 4.00}, 
        {2, 4.50},
        {3, 5.00},
        {4, 2.00},
        {5, 1.50}
    };

    int codigo, quantidade;
    std::cin >> codigo >> quantidade;

    double total = 0.0;

    for(auto pedido: CARDAPIO)
    {
        if(pedido.first == codigo)
        {
            total = pedido.second * quantidade;

            std::cout << std::fixed << std::setprecision(2)
                      << "Total: R$ " << total << '\n';
            break;
        }
    }

    return 0;
}
