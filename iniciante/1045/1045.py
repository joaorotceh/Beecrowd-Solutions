# 1045 - Tipos de Triangulo - beecrowd
# Iniciante - Nivel 4

valores = list(map(float, input().split()))
valores.sort(reverse=True)

A, B, C = valores

if A >= B + C: print("NAO FORMA TRIANGULO")
else:
    A2 = A * A
    B2 = B * B
    C2 = C * C

    if A2 == B2 + C2: print("TRIANGULO RETANGULO")
    if A2  > B2 + C2: print("TRIANGULO OBTUSANGULO")
    if A2  < B2 + C2: print("TRIANGULO ACUTANGULO")

    if A == B and B == C: print("TRIANGULO EQUILATERO")
    elif A == B or A == C or B == C: print("TRIANGULO ISOSCELES")
