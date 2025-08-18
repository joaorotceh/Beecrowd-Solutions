# 1048 - Aumento de Salario - beecrowd
# Iniciante - Nivel 2

def calculoReajusteSalario(salario : float):
    tamanho = 4

    SALARIO = [400, 800, 1200, 2000]
    PERCENTUAL = [15, 12, 10, 7]

    resultadoReajuste = 4

    for i in range(tamanho):
        if salario <= SALARIO[i]:
            resultadoReajuste = PERCENTUAL[i]
            break

    novoSalario = salario * (1 + (resultadoReajuste / 100))

    print(f"Novo salario: {novoSalario:.2f}")
    print(f"Reajuste ganho: {novoSalario - salario:.2f}")
    print(f"Em percentual: {resultadoReajuste} %")

def main():
    salario = float(input())
    calculoReajusteSalario(salario)

if __name__ == "__main__":
    main()
