#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[5][5],i,j,menor,soma_diagonal_secundaria;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Entre com um Elemento para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			printf("[%i]",matriz[i][j]);
			if(i+j==5-1)
			{
				soma_diagonal_secundaria+=matriz[i][j];
			}
			if(i+j<5-1)
			{
			if(i==1 && j==1)
			{
			menor=matriz[i][j];
			}
			else if(matriz[i][j] < menor)
			{
			 menor=matriz[i][j];
			}
			}
		}
		printf("\n\n");
		}
	printf("\n A soma dos elementos da diagonal secundaria e:\n %i",soma_diagonal_secundaria);
	printf("\n O menor abaixo da diagonal secundaria e:\n %i",menor);
	getchar();
	return 0;
}
