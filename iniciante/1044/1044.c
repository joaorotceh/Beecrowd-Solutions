// 1044 - Multiplos - beecrowd
// Iniciante - Nivel 2

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a % b == 0 || b % a == 0) puts("Sao Multiplos");
	else puts("Nao sao Multiplos");	

	return 0;
}
