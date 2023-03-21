#include <stdio.h>
#include <stdlib.h>
void intercalar_dois_vetores (int vetor3[9],int vetor4[9])
{
	int vetor[19],i,j;
	for(i=0;i<9;i++)
	{
	 printf("Entre com um valor para o Vetor1:");
	 vetor[j]=vetor3[i];
	 j++;	
	}
	for(i=0;i<9;i++)
	{
		printf("Entre com um valor para o Vetor2:");
		vetor[j]=vetor4[i];
		j++;
	}
	for(i=0;i<19;i++)
	{
		printf("\n %i",vetor[i]);
	}
}
int main(int argc, char** argv) 
{
	int vetor[9],i,j,vetor1[9];
	for(i=0;i<9;i++)
	{
		printf("Entre com um valor para o Primeiro Vetor:");
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<9;i++)
	{
		printf("Entre com um Valor para o Segundo Vetor:");
		scanf("%i",&vetor1[i]);
	}
	
	 void intercalar_dois_vetores(int vetor3[9],int vetor4[9]);
    	getchar();
	
	return 0;
}
