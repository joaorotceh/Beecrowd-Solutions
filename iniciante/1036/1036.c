// 1036 - Fórmula de Bhaskara - beecrowd
// Iniciante - Nível 3

#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = B * B - 4 * A * C;

    if(A == 0 || delta < 0)
    {
        printf("Impossivel calcular\n");
    } 
    else
    {
        double r1 = ((B * -1) + sqrt(delta)) / (2 * A);
        double r2 = ((B * -1) - sqrt(delta)) / (2 * A);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }

    return 0;
}
