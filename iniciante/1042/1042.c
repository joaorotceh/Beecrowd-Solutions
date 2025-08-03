// 1042 - Sort Simples - beecrowd
// Iniciante - Nível 2

#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {return (*(int*)a - *(int*)b);}

int main()
{
    const int tamanho = 3;

    int numeros[tamanho], numerosOrdenados[tamanho];
    for(int i=0; i<tamanho; i++) 
    {
        scanf("%d", &numerosOrdenados[i]);
        numeros[i] = numerosOrdenados[i];
    }

    qsort(numerosOrdenados, tamanho, sizeof(int), comparar);

    for(int i=0; i<tamanho; i++) printf("%d\n", numerosOrdenados[i]);

    printf("\n");

    for(int i=0; i<tamanho; i++) printf("%d\n", numeros[i]);

    return 0;
}
