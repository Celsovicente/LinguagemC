#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[6][6],aux,j;
	for(int i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("Entre com um valor para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(int i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("[%i]",matriz[i][j]);
		}
		printf("\n\n");
	}
	for(int i=0;i<6;i++)
	{
		aux=matriz[1][i];
		matriz[1][i]=matriz[4][i];
		matriz[4][i]=aux;
	}
	for(int i=0;i<6;i++)
	{
		aux=matriz[4][i];
		matriz[4][i]=matriz[i][6];
		matriz[i][6]=aux;
	}
	for(int i=0;i<6;i++)
	{
		aux=matriz[i][i];
		matriz[i][i]=matriz[i][j];
		matriz[i][j]=aux;
		j--;
	}
	for(int i=0;i<6;i++)
	{
		aux=matriz[5][j];
		matriz[5][j]=matriz[j][6];
		matriz[j][6]=aux;
	}
	for(int i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("[%i]",matriz[i][j]);
		}
		printf("\n\n");
	}
	getchar();
	return 0;
}
