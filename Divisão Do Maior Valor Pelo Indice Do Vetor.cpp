#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int vetor1[15],j=0,vetor2[15],maior;
	for(int i=0;i<15;i++)
	{
		printf("Entre com valor para o Vetor:\n");
		scanf("%i",&vetor1[i]);
	}
	for(int i=0;i<15;i++)
	{
		if(vetor1[i] == 0)
		{
			maior=vetor1[i];
		}
		else if(vetor1[i] > maior)
		{
			maior=vetor1[i];
		}
	}
	for(int i=0;i<15;i++)
	{
		vetor2[i]=maior/vetor1[i];
	}
	for(int i=0;i<15;i++)
	{
		printf("\n [%d]",vetor2[i]);
	}
	getchar();
	return 0;
}
