# 1040 - Média 3 - beecrowd
# Iniciante - Nível 5

notaAprovado  = 7.0
notaReprovado = 5.0

peso_1 = 2
peso_2 = 3
peso_3 = 4
peso_4 = 1

somaPesos = peso_1 + peso_2 + peso_3 + peso_4


notas = list(map(float, input().split()))

notaFinal = float((
    (notas[0] * peso_1) + 
    (notas[1] * peso_2) +
    (notas[2] * peso_3) +
    (notas[3] * peso_4)
    ) / somaPesos)

if notaFinal < notaReprovado: print(f"Media: {notaFinal:.1f}\nAluno reprovado.")
elif notaFinal >= notaAprovado: print(f"Media: {notaFinal:.1f}\nAluno aprovado.")
else:
    print(f"Media: {notaFinal:.1f}\nAluno em exame.")

    notaAdicional = float(input())
    print(f"Nota do exame: {notaAdicional}")

    notaFinal = (notaFinal + notaAdicional) / 2

    print("Aluno reprovado.") if notaFinal < notaReprovado else print("Aluno aprovado.")
    print(f"Media final: {notaFinal}")
