# 1020 - Idade em Dias - beecrowd
# Iniciante - Nível 2

idade_dias = int(input())

anos = idade_dias // 365
idade_dias %= 365

meses = idade_dias // 30
idade_dias %= 30

dias = idade_dias

print(anos, " ano(s)\n", meses, " mes(es)\n", dias, " dia(s)", sep="")
