# 1021 - Notas e Moedas - beecrowd
# Iniciante - Nível 6

NOTAS = [100, 50, 20, 10, 5, 2]
MOEDAS = [100, 50, 25, 10, 5, 1]

valor = float(input())

print("NOTAS:")

for nota in NOTAS:
    quantidade = valor // nota

    print(f"{int(quantidade)} nota(s) de R$ {nota:.2f}")

    valor %= nota

valor *= 100

print("MOEDAS:")

for moeda in MOEDAS:
    quantidade = valor // moeda

    print(f"{int(quantidade)} moeda(s) de R$ {(moeda / 100):.2f}")

    valor %= moeda
