#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	int numero;
	printf("Digite um numero positivo:\n");
	scanf("%i",&numero);
	
	printf("\n O quadrado do numero e:\n %f",pow(numero,2));
	printf("\n O cubo do numero e:\n %f",pow(numero,3));
	printf("\n A raiz quadrada do numero e:\n %f",sqrt(numero));
	printf("\n A raiz cubica do numero e:\n %f",cbrt(numero));
	getchar();
	return 0;
}
