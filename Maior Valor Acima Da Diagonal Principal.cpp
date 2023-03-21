#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int matriz[5][5],i=0,j=0,maior;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Entre com um valor para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("[%i]",matriz[i][j]);
			if(i < j)
			{
				if(i==1 && j==1)
				{
					maior=matriz[i][j];
				}
				else if(matriz[i][j] > maior)
				{
					maior=matriz[i][j];
				}
			}
		}
			printf("\n\n");
	}
	printf("\n O maior valor acima da Diagonal Principal e:\n %i",maior);
	getchar();
	return 0;
}
