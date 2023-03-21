#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int vetor[15],i,j,maior,aux,soma=0;
	float Media=0;
	for(i=0;i<15;i++)
	{
		printf("Entre com um valor pra o vetor:");
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<15;i++)
	{
		for(j=0;j<14;j++)
		{
			soma+=vetor[i];
			if(vetor[j] < vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
			maior=vetor[0];
		}
	}
	for(int i=0;i<15;i++)
	{
	    printf("\n [%i]",vetor[i]);
	}
	Media=soma/15;
	printf("\n A soma dos numeros e:\n %i",soma);
	printf("\n O maior valor e:\n %i",maior);
	printf("\n A Media dos numeros e:\n %f",Media);
	getchar();
	return 0;
}
