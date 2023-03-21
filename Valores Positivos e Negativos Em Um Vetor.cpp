#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int vetor1[14],j=0,vetor2[7],vetor3[7];
	for(int i=0;i<14;i++)
	{
		printf("Entre com um numero para o vetor:");
		scanf("%i",&vetor1[i]);
	}
	for(int i=0;i<14;i++)
	{
		if(vetor1[i] > 0)
		{
			vetor2[j]=vetor1[i];
		}
		else
		{
			vetor3[j1]=vetor1[i];
		}
	}
	for(int i=0;i<7;i++)
	{
		printf("\n [%i]",vetor2[i]);
	}
	for(int i=0;i<7;i++)
	{
		printf("\n  [%i]",vetor3[i]);
	}
	getchar();
	return 0;
}
