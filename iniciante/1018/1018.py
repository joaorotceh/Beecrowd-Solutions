# 1018 - Cédulas - beecrowd
# Iniciante - Nível 4

NOTAS = [100, 50, 20, 10, 5, 2, 1]

valor = int(input())

print(valor)

for nota in NOTAS:
    cedula = valor // nota

    print(f"{cedula} nota(s) de R$ {nota},00")

    valor%=nota
