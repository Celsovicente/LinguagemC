#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%i",&numero);
	if(numero <= 10)
	{
		printf("\n F1");
	}
	else if(numero > 10 && numero <= 100)
	{
		printf("\n F2");
	}
	else if(numero > 100)
	{
		printf("\n F3");
	}
	getchar();
	return 0;
}
