#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
    int vetor[9],i,j,segundo_maior,segundo_menor,aux;
    for(i=0;i<=9;i++)
	{
    	printf("Digite um numero para o vetor:");
    	scanf("%i",&vetor[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=8;j++)
		{
			if(vetor[j] > vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
			segundo_maior=vetor[8];
			segundo_menor=vetor[1];
		}
	}
    for(i=0;i<=9;i++)
	{
    	printf("\n %i",vetor[i]);
	}
	printf("\n O segundo maior e:\n %i",segundo_maior);
	printf("\n O segundo menor e:\n %i",segundo_menor);
	getchar();
	return 0;
}
