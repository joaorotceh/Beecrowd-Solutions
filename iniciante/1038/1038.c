// 1038 - Lanche - beecrowd
// Iniciante - Nível 1

#include <stdio.h>

typedef struct
{
    int first;
    double second;
} Pair;


int main()
{
    const int tamanho = 5;

    int codigo, quantidade;
    scanf("%d %d", &codigo, &quantidade);

    Pair cardapio[] = {
        {1, 4.00},
        {2, 4.50},
        {3, 5.00},
        {4, 2.00},
        {5, 1.50}
    };

    double total = 0.00;

    for(int i=0; i<tamanho; i++)
    {
        if(cardapio[i].first == codigo)
        {
            total = cardapio[i].second * quantidade;

            printf("Total: R$ %.2lf\n", total);
            break;
        }
    }
    
    return 0;
}
