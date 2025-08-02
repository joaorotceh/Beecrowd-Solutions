// 1040 - Média 3 - beecrowd
// Iniciante - Nível 5

#include <iostream>
#include <iomanip>

using std::cout;

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
    for (int i=0; i<quantidade; i++) std::cin >> notas[i];

    double notaFinal = (
        (notas[0] * peso_1) + 
        (notas[1] * peso_2) + 
        (notas[2] * peso_3) + 
        (notas[3] * peso_4)
    ) / somaPesos;

    cout << std::fixed << std::setprecision(1);

    if (notaFinal < notaReprovado) cout << "Media: " << notaFinal << "\nAluno reprovado.\n";
    else if (notaFinal >= notaAprovado) cout << "Media: " << notaFinal << "\nAluno aprovado.\n";
    else
    {
        double notaAdicional;
        
        cout << "Media: " << notaFinal << "\nAluno em exame.\n";
        std::cin >> notaAdicional;
        cout << "Nota do exame: " << notaAdicional << '\n';

        notaFinal = (notaFinal + notaAdicional) / 2.0;

        cout << ((notaFinal < notaReprovado) ? "Aluno reprovado.\n" : "Aluno aprovado.\n");

        cout << "Media final: " << notaFinal << '\n';
    }

    return 0;
}
