// 1048 - Aumento de Salario - beecrowd
// Iniciante - Nivel 2

#include <stdio.h>

void calculoReajusteSalario(double salario)
{
    const int tamanho = 4;

    const double SALARIO[] = {400, 800, 1200, 2000};
    const int PERCENTUAL[] = {15, 12, 10, 7};

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

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", novoSalario - salario);
    printf("Em percentual: %d %%\n", resultadoPercentual);
}

int main()
{
    double salario;
    scanf("%lf", &salario);

    calculoReajusteSalario(salario);

    return 0;
}
