# 1037 - Intervalo - beecrowd
# Iniciante - Nível 3

valor = float(input())

if valor < 0 or valor > 100:
    print("Fora de intervalo")
else:
    if valor <= 25:
        intervalo = "[0,25]"
    elif valor > 25 and valor <= 50:
        intervalo = "(25,50]"
    elif valor > 50 and valor <= 75:
        intervalo = "(50,75]"
    else:
        intervalo = "(75,100]"

    print(f"Intervalo {intervalo}")
