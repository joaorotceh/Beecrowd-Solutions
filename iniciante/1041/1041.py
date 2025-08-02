# 1041 - Coordenadas de um Ponto - beecrowd
# Iniciante - Nível 3

x, y = map(float, input().split())

if x == 0 and y == 0: print("Origem")
elif x == 0 or y == 0: print("Eixo Y" if x == 0 else "Eixo X")
else: print(("Q1" if y > 0 else "Q4") if x > 0 else ("Q2" if y > 0 else "Q3"))
