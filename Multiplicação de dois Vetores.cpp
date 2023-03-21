#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor1[10],j=1,vetor2[10],vetor3[20];
	for(int i=0;i<10;i++)
	{
		printf("Entre com um valor para o vetor1:");
		scanf("%i",&vetor1[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("Entre com um valor para o vetor2:");
		scanf("%i",&vetor2[j]);
	}
    for(int i=0;i<10;i++)
    {
    	vetor3[j]=vetor1[i]*vetor2[i];
	}
	for(int i=0;i<20;i++)
	{
		printf("[%i]\n",vetor3[j]);
	}
	getchar();
	return 0;
}
