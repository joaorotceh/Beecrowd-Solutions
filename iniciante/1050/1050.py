# 1050 - DDD - beecrowd
# Iniciante - Nivel 2

def resultado(numero : int):
    DDD = {
        61 : "Brasilia",
        71 : "Salvador",
        11 : "Sao Paulo",
        21 : "Rio de Janeiro",
        32 : "Juiz de Fora",
        19 : "Campinas",
        27 : "Vitoria",
        31 : "Belo Horizonte"
    }

    print("DDD nao cadastrado" if not numero in DDD else DDD[numero])

def main():
    numero = int(input())

    resultado(numero)

if __name__ == "__main__":
    main()
