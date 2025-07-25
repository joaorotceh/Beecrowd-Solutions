# 1019 - Conversão de Tempo - beecrowd
# Iniciante - Nível 1

N = int(input())

horas = N // 3600
N %= 3600

minutos = N // 60
N %= 60

segundos = N

print(f"{horas}:{minutos}:{segundos}")
