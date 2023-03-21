#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[4][4],i=0,j=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Entre com um Valor para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(matriz[i][j] < 0)
			{
				matriz[i][j]=0;
				printf("[%d]",matriz[i][j]);
			}
			else
			{
				printf("[%d]",matriz[i][j]);
			}
		}
		printf("\n\n");
	}
    getchar();
	return 0;
}
