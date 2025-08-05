# 1043 - Triangulo - beecrowd
# Iniciante - Nivel 2

a, b, c = map(float, input().split())

if a + b > c and a + c > b and b + c > a:
    perimetro = a + b + c
    print("Perimetro =", perimetro)
else:
    area = (a + b) * c / 2
    print("Area =", area)
