#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[18],matriz[6][3],maior,menor,soma=0,i1;
	for(int i=0;i<18;i++)
	{
		printf("Entre com valor para o Vetor:");
		scanf("%i",&vetor[i]);
	}
	for(int i=0;i<18;i++)
	{
		for(int j=0;j<3;j++)
		{
		matriz[i1][j]=vetor[i];
		}
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("[%i]",matriz[i][j]);
			if(matriz[i][j] == 0)
			{
				maior=matriz[i][j];
				menor=matriz[i][j];
			}
			else if(matriz[i][j] > maior)
			{
				maior=matriz[i][j];
			}
			else if(matriz[i][j] < menor)
			{
				menor=matriz[i][j];
			}
		}
		printf("\n\n");
	}
	printf("\n O maior valor e:\n %i",maior);
	printf("\n O menor valor e:\n %i",menor);
	getchar();
	return 0;
}
