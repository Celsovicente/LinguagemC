#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[5][5],maior=0;
	for(int i=0;i<5;i++) 
	{
		for(int j=0;j<5;j++)
		{
			matriz[i][j]=rand()%200;
		}
	}
	printf("A Matriz Gerada  e:\n");
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("[%d]",matriz[i][j]);
			if(i == 0 && j == 0)
			{
				maior=matriz[i][j];
			}
			else if(matriz[i][j] > maior)
			{
				maior=matriz[i][j];
			}
		}
		printf("\n\n");
	}
	printf("\n O maior valor da matriz e: %d\n",maior);
	printf("\n A matriz Resultante e:\n");
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i == j)
			{
				matriz[i][j]*=maior;
			printf("[%d]",matriz[i][j]);
			}
		}
		printf("\n\n");
	}
	return 0;
}
