#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int vetor[10];
	for(int i=0;i<10;i++)
	{
		printf("Entre com um valor para o Vetor:");
		scanf("%i",&vetor[i]);
	}
	for(int i=0;i<10;i++)
	{
			if(vetor[i] < 0)
		{
			vetor[i]=0;
			printf("[%d]\n",vetor[i]);
		}
		else
		{
		printf("\n [%i]",vetor[i]);
        }
	}
	getchar();
  return 0;	
}
