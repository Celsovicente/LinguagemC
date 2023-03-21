#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int matriz[1][3],i,j,quantidade,quant=0,soma;
	float Media;
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Entre com um valor para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			if(matriz[i][j]>=12 && matriz[i][j]<=20)
			{
				quantidade++;
			}
			if(matriz[i][j]%2 == 0)
			{
				soma+=matriz[i][j];
				quant++;
			}
		}
	}
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("[%i]",matriz[i][j]);
		}
		printf("\n\n");
	}
	Media=soma/quant;
	printf("\n A quantidade de numeros e:\n %i",quantidade);
	printf("\n A Media dos numeros Pares e:\n %f",Media);
	getchar();
	return 0;
}
