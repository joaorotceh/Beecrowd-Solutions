# 1049 - Animal - beecrowd
# Iniciante - Nivel 3

def resultadoAnimal(tipos : list):
    esquemaTipos = {
        "vertebrado" : {
            "ave" : {
                "carnivoro" : "aguia",
                "onivoro" : "pomba"
            },
            "mamifero" : {
                "onivoro" : "homem",
                "herbivoro" : "vaca"
            }
        },
        "invertebrado" : {
            "inseto" : {
                "hematofago" : "pulga",
                "herbivoro" : "lagarta"
            },
            "anelideo" : {
                "hematofago" : "sanguessuga",
                "onivoro" : "minhoca"
            }
        }
    }

    resultado = esquemaTipos[tipos[0]][tipos[1]][tipos[2]]

    print(resultado)

def main():
    tipos = []

    for i in range(3):
        tipos.append(str(input()))
    
    resultadoAnimal(tipos)


if __name__ == "__main__":
    main()
