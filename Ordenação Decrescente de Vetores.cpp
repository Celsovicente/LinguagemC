#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv)
{
	int vetor[9],i,j,aux;
	system("Color 0b");
for(i=0;i<9;i++)
{
printf("Digite um numero para o Vetor:");
scanf("%i",&vetor[i]);
}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
		{
			if(vetor[j] < vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
	}
	for(i=0;i<9;i++)
	{
	printf("[%i]\n",vetor[i]);
    }
	return 0;
}
