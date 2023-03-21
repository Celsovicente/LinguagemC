#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero,soma=0,quant=0;
	float Media;
	do
	{
		printf("Digite um Numero:\n");
		scanf("%i",&numero);
		if((numero % 3) == 0)
		{
			printf("\n O numero e Multiplo de 3\n");
			soma+=numero,
			quant++;
		}
		else
		{
			printf("\n O numero nao e Multiplo de 3\n");
		}
	}while(numero!=0);
	Media=soma/quant;
	printf("\n A Media dos numeros multiplos de 3 e:\n %f",Media);
	getchar();
	return 0;
}
