#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void intercalacao (int vetor[30])
{
	int vetor1[15],vetor2[15],i,j;
	for(i=0;i<30;i++)
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
	for(i=0;i<15;i++)
	{
		printf("\n [%i]",vetor1[i]);
	}
	for(i=0;i<15;i++)
	{
		printf("\n [%i]",vetor2[i]);
	}
}
int main(int argc, char** argv1)
{
	int vetor[30],i;
	for(i=0;i<30;i++)
	{
		printf("Digite um numero para o Vetor:");
		scanf("%i",&vetor[i]);
	}	
 void intercalacao(int vetor[30]);
	getchar();
  	return 0;
}
