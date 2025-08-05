# 1044 - Multiplos - beecrowd
# Iniciante - Nivel 2

a, b = map(float, input().split())

if a % b == 0 or b % a == 0: print("Sao Multiplos")
else: print("Nao sao Multiplos")
