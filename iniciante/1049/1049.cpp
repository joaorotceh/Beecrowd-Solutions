// 1049 - Animal - beecrowd
// Iniciante - Nivel 3

#include <iostream>
#include <string>

using std::string;

void resultadoAnimal(string tipos[])
{
    string resultado = (tipos[0] == "vertebrado") ? 
        ((tipos[1] == "ave") ? 
            ((tipos[2] == "carnivoro") ? "aguia" : "pomba") : 
            ((tipos[2] == "onivoro") ? "homem" : "vaca")) : 
        ((tipos[1] == "inseto") ? 
            ((tipos[2] == "hematofago") ? "pulga" : "lagarta") : 
            ((tipos[2] == "hematofago") ? "sanguessuga" : "minhoca"));

    std::cout << resultado << '\n';
}

int main()
{
    const int tamanho = 3;
    string tipos[tamanho];

    for (int i = 0; i < tamanho; i++) std::cin >> tipos[i];

    resultadoAnimal(tipos);

    return 0;
}
