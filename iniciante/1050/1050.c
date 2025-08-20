// 1050 - DDD - beecrowd
// Iniciante - Nivel 2

#include <stdio.h>

typedef struct
{
    int codigo;
    char cidade[30];
} DDD;

void resultado(int numero)
{
    DDD lista[] = {
        {61, "Brasilia"},
        {71, "Salvador"},
        {11, "Sao Paulo"},
        {21, "Rio de Janeiro"},
        {32, "Juiz de Fora"},
        {19, "Campinas"},
        {27, "Vitoria"},
        {31, "Belo Horizonte"}
    };

    const int tamanho = sizeof(lista) / sizeof(lista[0]);
    int encontrado = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (lista[i].codigo == numero)
        {
            printf("%s\n", lista[i].cidade);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) puts("DDD nao cadastrado");
}

int main()
{
    int numero;
    scanf("%d", &numero);

    resultado(numero);

    return 0;
}
