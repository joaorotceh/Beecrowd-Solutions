// 1044 - Multiplos - beecrowd
// Iniciante - Nivel 2

#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a % b == 0 || b % a == 0) std::cout << "Sao Multiplos\n";
	else std::cout << "Nao sao Multiplos\n";

	return 0;
}
