// 1047 - Tempo de Jogo com Minutos - beecrowd
// Iniciante - Nivel 9

#include <iostream>

int main()
{
    int horaInicio, minutoInicio, horaFim, minutoFim;
    int totalMinutosInicio, totalMinutosFim;
    int duracaoMinutos;
    int resultadoHoras, resultadoMinutos;

    std::cin >> horaInicio 
             >> minutoInicio 
             >> horaFim 
             >> minutoFim;

    totalMinutosInicio = horaInicio * 60 + minutoInicio;
    totalMinutosFim    = horaFim    * 60 + minutoFim;

    if (totalMinutosFim <= totalMinutosInicio) totalMinutosFim += 24 * 60;

    duracaoMinutos = totalMinutosFim - totalMinutosInicio;

    if (duracaoMinutos > 24 * 60) duracaoMinutos = 24 * 60;

    resultadoHoras   = duracaoMinutos / 60;
    resultadoMinutos = duracaoMinutos % 60;

    std::cout << "O JOGO DUROU " << resultadoHoras 
              << " HORA(S) E " << resultadoMinutos 
              << " MINUTO(S)\n";

    return 0;
}
