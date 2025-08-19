// 1049 - Animal - beecrowd
// Iniciante - Nivel 3

#include <stdio.h>
#include <string.h>

void resultadoAnimal(char *tipos[])
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

    char tipo_1[20], tipo_2[20], tipo_3[20];
    char *tipos[] = {tipo_1, tipo_2, tipo_3};

    for (int i = 0; i < tamanho; i++) scanf("%s", tipos[i]);

    resultadoAnimal(tipos);

    return 0;
}
