// 1040 - Média 3 - beecrowd
// Iniciante - Nível 5

#include <stdio.h>

int main()
{
    const int quantidade = 4;

    const double peso_1 = 2.0, 
                 peso_2 = 3.0, 
                 peso_3 = 4.0, 
                 peso_4 = 1.0;
    
    const double somaPesos = peso_1 + peso_2 + peso_3 + peso_4;

    const double notaAprovado  = 7.0;
    const double notaReprovado = 5.0;

    double notas[quantidade]; 
    for (int i=0; i<quantidade; i++) scanf("%lf", &notas[i]);

    double notaFinal = (
        (notas[0] * peso_1) + 
        (notas[1] * peso_2) + 
        (notas[2] * peso_3) + 
        (notas[3] * peso_4)
    ) / somaPesos;

    printf("Media: %.1lf\n", notaFinal);

    if (notaFinal < notaReprovado) printf("Aluno reprovado.\n");
    else if (notaFinal >= notaAprovado) printf("Aluno aprovado.\n");
    else
    {
        double notaAdicional;
        
        printf("Aluno em exame.\n");
        scanf("%lf", &notaAdicional);
        printf("Nota do exame: %.1lf\n", notaAdicional);

        notaFinal = (notaFinal + notaAdicional) / 2;

        printf("%s\nMedia final: %.1lf\n", 
            (notaFinal < notaReprovado) ? "Aluno reprovado." : "Aluno aprovado."
            , notaFinal
        );
    }

    return 0;
}
