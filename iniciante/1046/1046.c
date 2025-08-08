// 1046 - Tempo de Jogo - beecrowd
// Iniciante - Nivel 2

#include <stdio.h>

int main()
{
    int inicio, fim;
    scanf("%d %d", &inicio, &fim);

    int duracao;
    duracao = (fim - inicio + 24) % 24;
    if (duracao == 0) duracao = 24;
    
    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
