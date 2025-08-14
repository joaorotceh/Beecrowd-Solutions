# 1047 - Tempo de Jogo com Minutos - beecrowd
# Iniciante - Nivel 9

horaInicio, minutoInicio, horaFim, minutoFim = map(int, input().split())

totalMinutosInicio = horaInicio * 60 + minutoInicio
totalMinutosFim    = horaFim    * 60 + minutoFim

if totalMinutosFim <= totalMinutosInicio: totalMinutosFim += 24 * 60

duracaoMinutos = totalMinutosFim - totalMinutosInicio

if duracaoMinutos > 24 * 60: duracaoMinutos = 24 * 60

resultadoHoras   = duracaoMinutos // 60
resultadoMinutos = duracaoMinutos % 60

print(f"O JOGO DUROU {resultadoHoras} HORA(S) E {resultadoMinutos} MINUTO(S)")
