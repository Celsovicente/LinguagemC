#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv[])
{
	int matriz[7][5],i=0,j=0,soma_linha_pares=0;
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
		    printf("Entre com um Valor para a Matriz:");
		    scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<7;i=i+2)
	{
		for(j=0;j<5;j++)
		{
			printf("[%i]",matriz[i][j]);
			soma_linha_pares+=j;
		}
		printf("\n\n");
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("[%i]",matriz[i][j]);
		}
		printf("\n\n");
	}
	printf("\n A soma das linhas pares e:\n %i",soma_linha_pares);
	getchar();
	return 0;
}
