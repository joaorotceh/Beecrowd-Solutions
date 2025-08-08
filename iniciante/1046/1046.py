# 1046 - Tempo de Jogo - beecrowd
# Iniciante - Nivel 2

inicio, fim = map(int, input().split())

duracao = (fim - inicio + 24) % 24
if duracao == 0: duracao = 24

print("O JOGO DUROU {} HORA(S)".format(duracao))
