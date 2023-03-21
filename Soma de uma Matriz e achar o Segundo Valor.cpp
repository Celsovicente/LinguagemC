#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int matriz[5][4],i,j,soma=0,soma_1=0,maior=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Entre com um numero para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j==2)
			{
				maior=matriz[i][j];
			}
			else if(matriz[i][j] > maior)
			{
				maior=matriz[i][j];
			}
			soma+=matriz[i][j];
			soma_1+=matriz[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[%i]",matriz[i][j]);
		}
		printf("\n\n");
	}
	printf("\n A soma da linha da matriz e:\n %i",soma);
	printf("\n A soma da coluna da matriz e:\n %i",soma_1);
	printf("\n O maior numero da segunda linha:\n %i",maior);
	getchar();
	return 0;
}
