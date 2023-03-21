#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(int argc, char** argv)
{
	int matriz[4][4],maior=0,linha_maior=0,mini_max=0,linha_min=0,coluna_maior=0,coluna_min=0;
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=4;j++)
		{
			printf("Digite o [%i][%i] valor para a matriz: ",i,j);
			scanf("%i",&matriz[i][j]);
		}
	}
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("[%i]",matriz[i][j]);
			if(i == 0 && j == 0)
			{
				maior=matriz[i][j];
				linha_maior=i;
				coluna_maior=j;
			}
			else if(matriz[i][j] < maior)
			{
				maior=matriz[i][j];
				linha_maior=i;
				coluna_maior=j;
			}
		}
		printf("\n\n");
	}
	mini_max=matriz[linha_maior][0];
	for(int j=0;j<=4;j++)
	{
		if(mini_max > matriz[linha_maior][j])
		{
			mini_max=matriz[linha_maior][j];
			linha_min=linha_maior;
			coluna_min=j;
		}
	}
	printf("\n O maior valor e:\n %i",maior);
	printf ("\n A sua linha e: %i, e a sua coluna e: %i\n",linha_maior,coluna_maior);
	printf("\n O minimax  e:\n %i",mini_max);
	printf("\n A sua linha e: %i, e a sua coluna e: %i\n",linha_min,coluna_min);
	getchar();
	return 0;
}
