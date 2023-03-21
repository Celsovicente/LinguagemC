#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%i",&numero);
	if(numero > 0)
	{
		printf("\n O numero e Positivo\n");
	}
	else
	{
		printf("O numero e Negativo\n");
	}
	if(numero % 2 == 0)
	{
		printf(" O numero e Par\n");
	}
	else
	{
		printf("O numero e Impar");
	}
	getchar();
	return 0;
}
