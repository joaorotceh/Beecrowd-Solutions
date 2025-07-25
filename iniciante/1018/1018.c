// 1018 - Cédulas - beecrowd
// Iniciante - Nível 4

#include <stdio.h>

#define tamanho 7

void decompor_cedulas(int valor) {
    const int NOTAS[tamanho] = {100, 50, 20, 10, 5, 2, 1};

    printf("%d\n", valor);

    for(int i=0; i<tamanho; i++) {
        int cedula = valor / NOTAS[i];

        printf("%d nota(s) de R$ %d,00\n", cedula, NOTAS[i]);

        valor%=NOTAS[i];
    }
}

int main() {
    
    int valor;
    scanf("%d", &valor);

    decompor_cedulas(valor);

    return 0;
}
