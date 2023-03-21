#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int numero,maior,menor;
	do
	{
		printf("Digite um numero:\n");
		scanf("%i",&numero);
		if(numero == 1)
		{
			maior=numero;
			menor=numero;
		}
		else if(numero > maior)
		{
			maior=numero;
		}
		else if(numero < menor)
		{
			menor=numero;
		}
	}
	while(numero >= 0);
	printf("\n O maior numero e:\n %i",maior);
	printf("\n O menor numero e:\n %i",menor);
	getchar();
	return 0;
}
