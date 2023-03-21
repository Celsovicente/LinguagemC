#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[30],j=0,vetor1[15],vetor2[15];
	for(int i=0;i<30;i++)
	{
		printf("Entre com um valor para o Vetor:");
		scanf("%i",&vetor[i]);
	}
	for(int i=0;i<30;i++)
	{
		if(vetor[i] > 0)
		{
			vetor1[j]=vetor[i];
			j++;
		}
		else if(vetor[i] <= 0)
		{
			vetor2[j]=vetor[i];
			j++;
		}
	}
	for(int i=0;i<15;i++)
	{
		printf("[%i]\n",vetor1[i]);
	}
	for(int i=0;i<15;i++)
	{
		printf("\n [%i]",vetor2[i]);
	}
	getchar();
	return 0;
}
