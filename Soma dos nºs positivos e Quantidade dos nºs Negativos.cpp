#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv[])
{
	int vetor[10],i,quant_negativo=0,soma_positivo=0;
	for(i=0;i<10;i++)
	{
		printf("Digite o %d numero:",i);
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("[%i]\n",vetor[i]);
		if(vetor[i] > 0)
		{
			soma_positivo+=vetor[i];
		}
		else
		{
			quant_negativo++;
		}
		
	}
	printf("\n A soma dos numeros positivos e:\n %i",soma_positivo);
	printf("\n A quantidade dos numeros negativos e:\n %i",quant_negativo);
	getchar();
	return 0;
	}
