// 1042 - Sort Simples - beecrowd
// Iniciante - Nível 2

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;

int main()
{
    const int tamanho = 3;

    std::vector<int> numeros, numerosOrdenados;

    for(int i=0; i<tamanho; i++)
    {
        int valor; std::cin >> valor;
        numerosOrdenados.push_back(valor);
        numeros.push_back(valor);
    }

    std::sort(numerosOrdenados.begin(), numerosOrdenados.end());

    for(int i=0; i<tamanho; i++) cout << numerosOrdenados[i] << '\n';

    cout << '\n';

    for(int i=0; i<tamanho; i++) cout << numeros[i] << '\n';

    return 0;
}
