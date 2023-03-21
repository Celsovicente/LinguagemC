#include<stdio.h>
#include<stdlib.h>
int main(int argc, char argv[])
{
	int vetor[10];
	for(int i=0;i<10;i++)
	{
		printf("Digite o %d numero:",i);
		scanf("%i",&vetor[i]);
	}
	for(int i=0;i<10;i++)
	{
		if(vetor[i] <= 0)
		{
			vetor[i]=0;
		}
	}
	for(int i=0;i<10;i++)
	{
	printf("\n[%i]",vetor[i]);
    }
    getchar();
	return 0;
}
