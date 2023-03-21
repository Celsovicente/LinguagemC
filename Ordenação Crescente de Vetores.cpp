#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[10],i=0,j=0,aux=0,segundo_menor=0;
	for(i=0;i<10;i++)
	{
		printf("Digite o numero:");
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(vetor[j] > vetor[j++])
			{
				aux=vetor[j];
				vetor[j]=vetor[j++];
				vetor[j++]=aux;
			}
			segundo_menor=vetor[2];
		}
    }
    for(i=0;i<10;i++)
	{
    	printf("[%i]\n",vetor[i]);
    }
    printf("\n O segundo menor e:\n %i",segundo_menor);
	return 0;
}
