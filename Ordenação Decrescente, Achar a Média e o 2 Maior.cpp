#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float vetor[15],maior=0,Media=0,soma=0,aux=0;
	for(int i=0;i<15;i++)
	{
		printf("Entre com o [%f] numero para o Vetor:",i);
		scanf("%f",&vetor[i]);
	}
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<14;j++)
		{
			soma+=vetor[i];
			if(vetor[j] > vetor[j+1])
			{
				aux=vetor[j+1];
				vetor[j+1]=vetor[j];
				vetor[j]=aux;
			}
			maior=vetor[1];
		}
	}
	for(int i=0;i<15;i++)
	{
		printf("[%f]\n",vetor[i]);
	}
	Media=soma/15;
	printf("\n O maior valor na posicao impar e:\n %f",maior);
	printf("\n A media dos elementos do vetor e:\n %f",Media);
	return 0;
}
