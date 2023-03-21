#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero,maior=0,menor,quant_vezes_menor=0,quant_vezes_maior=0;
	int soma,quant;
	float Media;
	for(int i=1;i<=10;i++)
	{
		printf("Digite o %d numero:\n",i);
		scanf("%i",&numero);
		quant++;
		soma+=numero;
		if(numero == 1)
		{
			maior=numero;
			menor=numero;
		}
		else if(maior < numero)
		{
		maior=numero;
		quant_vezes_maior++;
		}
		else if(numero < menor)
		{
			menor=numero;
			quant_vezes_menor++;
		}
	}
	Media=soma/quant;
	printf("\n A Media e:\n %f",Media);
	printf("\n O maior numero e:\n %i",maior);
	printf("\n O maior numero apareceu %i",quant_vezes_maior);
	printf("\n O menor numero e:\n %i",menor);
	printf("\n O menor numero apareceu %i",quant_vezes_menor);
	getchar();
	return 0;
}
