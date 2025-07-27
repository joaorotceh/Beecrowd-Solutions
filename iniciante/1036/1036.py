# 1036 - Fórmula de Bhaskara - beecrowd
# Iniciante - Nível 3

A, B, C = map(float, input().split())

delta = B ** 2 - 4 * A * C

if A == 0 or delta < 0:
    print("Impossivel calcular")
else:
    r1 = ((B * -1) + delta ** (1/2)) / (2 * A)
    r2 = ((B * -1) - delta ** (1/2)) / (2 * A)

    print(f"R1 = {r1:.5f}")
    print(f"R2 = {r2:.5f}")
