#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int vetor[10],i,j,aux,segundo_menor,primeiro_menor,terceiro_menor;
	for(i=0;i<10;i++)
	{
		printf("Digite um numero pra o vetor:");
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(vetor[j] > vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
			primeiro_menor=vetor[0];
			segundo_menor=vetor[1];
			terceiro_menor=vetor[2];
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("[%d]\n",vetor[i]);
	}
	printf("\n O primeiro menor e:\n %i",primeiro_menor);
	printf("\n O segundo menor e:\n %i",segundo_menor);
	printf("\n O terceiro menor e:\n %i",terceiro_menor);
    getchar();
	return 0;
}
