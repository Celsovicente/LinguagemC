#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int vetor1[10],j=0,vetor2[10],vetor3[20];
	for(int i=0;i<10;i++)
	{
	printf("Digite um valor para o vetor1:");
	scanf("%i",&vetor1[i]);
	vetor3[j]=vetor1[i];
	j++;
    }
    for(int i=0;i<=10;i++)
	{
	printf("Digite um valor para o vetor2:");
	scanf("%i",&vetor2[i]);
	vetor3[j]=vetor2[i];
	j++;
    }
    for(int i=0;i<=19;i++)
	{
    	printf("[%i]\n",vetor3[i]);
	}
	getchar();
	return 0;
}
