// 1049 - Animal - beecrowd
// Iniciante - Nivel 3

#include <stdio.h>
#include <string.h>

void resultadoAnimal(char tipos[][20])
{
    char *resultado = (strcmp(tipos[0], "vertebrado") == 0) ? 
        ((strcmp(tipos[1], "ave") == 0) ? 
            ((strcmp(tipos[2], "carnivoro") == 0) ? "aguia" : "pomba") : 
            ((strcmp(tipos[2], "onivoro") == 0) ? "homem" : "vaca")) : 
        ((strcmp(tipos[1], "inseto") == 0) ? 
            ((strcmp(tipos[2], "hematofago") == 0) ? "pulga" : "lagarta") : 
            ((strcmp(tipos[2], "hematofago") == 0) ? "sanguessuga" : "minhoca"));

    printf("%s\n", resultado);
}

int main()
{
    const int tamanho = 3;
    char tipos[tamanho][20];

    for (int i = 0; i < tamanho; i++) scanf("%s", &tipos[i]);

    resultadoAnimal(tipos);

    return 0;
}
