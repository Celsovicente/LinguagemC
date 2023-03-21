#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[10],j=0,vetor2[5],vetor3[5];
	for(int i=0;i<10;i++)
	{
		printf("Entre com um Numero para o Vetor:");
		scanf("%i",&vetor[i]);
	}
	for(int i=0;i<10;i++)
	{
		if( (vetor[i] % 2) == 0)
		{
			vetor2[j]=vetor[i];
			j++;
		}
		else
		{
			vetor3[j]=vetor[i];
			j++;
		}
	}
	for(int i=0;i<10;i++)
	{
		printf("\n [%i]",vetor2[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("\n [%i]",vetor3[i]);
	}
	getchar();
	return 0;
}
