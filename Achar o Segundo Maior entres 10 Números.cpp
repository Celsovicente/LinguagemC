#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int vetor[15],i,j,aux,segundo_maior=0;
	for(i=0;i<15;i++)
	{
		printf("Digite um numero pra o vetor:");
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<15;i++)
	{
		for(j=0;j<14;j++)
		{
			if(vetor[j] < vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
			segundo_maior=vetor[1];
		}
	}
	for(i=0;i<15;i++)
	{
		printf("[%d]\n",vetor[i]);
	}
	printf("\n O segundo Maior e:\n %i",segundo_maior);
	getchar();
	return 0;
}
