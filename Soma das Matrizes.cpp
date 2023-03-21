#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[3][8],matriz1[3][8],matriz2[3][8],matriz3[3][8];
	printf("A 1 matriz gerada e:\n ");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			matriz[i][j]=rand()%100;
			printf("[%d]",matriz[i][j]);
		}
		printf ("\n\n");
	}
		printf("A 2 matriz gerada e:\n ");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			matriz1[i][j]=rand()%100;
			printf("[%d]",matriz1[i][j]);
		}
		printf ("\n\n");
	}
	printf("A primeira matriz resultante e:\n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			matriz2[i][j]=matriz[i][j] + matriz1[i][j];
				printf("[%d]",matriz2[i][j]);
		}
		printf ("\n\n");
	}
		printf("A segunda matriz resultante e:\n");
		for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			matriz3[i][j]=matriz[i][j] - matriz1[i][j];
				printf("[%d]",matriz3[i][j]);
		}
		printf ("\n\n");
	}
	return 0;
}
