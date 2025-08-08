// 1046 - Tempo de Jogo - beecrowd
// Iniciante - Nivel 2

#include <iostream>

int main()
{
    int inicio, fim;
    std::cin >> inicio >> fim;

    int duracao;
    duracao = (fim - inicio + 24) % 24;
    if (duracao == 0) duracao = 24;
    
    std::cout << "O JOGO DUROU " << duracao << " HORA(S)\n";

    return 0;
}
