# 1038 - Lanche - beecrowd
# Iniciante - Nível 1

CARDAPIO = {
    1: 4.00,
    2: 4.50,
    3: 5.00,
    4: 2.00,
    5: 1.50
}

codigo, quantidade = input().split()
codigo = int(codigo)
quantidade = float(quantidade)

total = CARDAPIO[codigo] * quantidade

print(f"Total: R$ {total:.2f}")
