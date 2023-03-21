w#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Entre com o [%d] numero para a Matriz:",i,j);
			scanf("%i",&matriz[i][j]);
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(matriz[i][j] > 0)
			{
				printf("[%i]",matriz[i][j]);
			}
			else
			{
				matriz[i][j]=0;
				printf("[%i]",matriz[i][j]);
			}
		}
		printf("\n\n");
	}
	getchar();
	return 0;
}
