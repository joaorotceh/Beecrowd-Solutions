// 1048 - Aumento de Salario - beecrowd
// Iniciante - Nivel 2

#include <iostream>
#include <iomanip>
#include <array>

using std::cout;

void calculoReajusteSalario(double salario)
{
    const int tamanho = 4;

    const std::array<double, tamanho> SALARIO = {400, 800, 1200, 2000};
    const std::array<int, tamanho> PERCENTUAL = {15, 12, 10, 7};

    int resultadoPercentual = 4;

    for (int i = 0; i < tamanho; i++)
    {
        if (salario <= SALARIO[i])
        {
            resultadoPercentual = PERCENTUAL[i];
            break;
        }
    }

    double novoSalario = salario * (1 + (resultadoPercentual / 100.0));

    cout << std::fixed << std::setprecision(2);

    cout << "Novo salario: " << novoSalario << '\n';
    cout << "Reajuste ganho: " << (novoSalario - salario) << '\n';
    cout << "Em percentual: " << resultadoPercentual << " %\n";
}

int main()
{
    double salario;
    std::cin >> salario;

    calculoReajusteSalario(salario);

    return 0;
}
