// 1043 - Triangulo - beecrowd
// Iniciante - Nivel 2

#include <iostream>
#include <iomanip>

int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;

	std::cout << std::fixed << std::setprecision(1);

	if (a + b > c && a + c > b && b + c > a) 
	{
		double perimetro = a + b + c;
		std::cout << "Perimetro = " << perimetro << '\n';
	}
	else 
	{
		double area = (a + b) * c / 2;
		std::cout << "Area = " << area << '\n';
	}

	return 0;
}
