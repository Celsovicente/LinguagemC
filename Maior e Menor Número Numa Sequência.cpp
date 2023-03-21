#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero1,numero2;
	printf("Digite 2 numeros:\n");
	scanf("%i%i",&numero1,&numero2);
	if(numero1 > numero2)
	{
		printf("\n O 1 numero e o maior, e o 2 o menor numero");
	}
	else if(numero1==numero2)
	{
		printf("\n Os numeros sao iguais");
	}
	else
	{
		printf("\n O numero 2 e o maior, e o 1 o menor");
	}
	getchar();
	return 0;
}
