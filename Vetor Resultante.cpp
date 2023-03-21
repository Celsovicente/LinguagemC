#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int vetor1[10],vetor2[5],vetor3[10],vetor4[10],i=0,j=0,posi1=0,posi2=0,soma=0;
	for(i=0;i<10;i++)
	{
		vetor1[i]=rand()%100;
	}
	for(j=0;j<5;j++)
	{
		vetor2[j]=rand()%100;
    }
    for(i=0;i<10;i++)
	{
		soma+=vetor1[i];
		for(j=0;j<=5;j++)
		{
			soma+=vetor2[j];
		}
		if(soma % 2 == 0)
		{
			vetor3[posi1]=soma;
			posi1++;
		}
		else
		{
			vetor4[posi2]=soma;
			posi2++;
		}
	}
	for(int i=0;i<posi1-1;i++)
	{
		printf("\n [%i]",vetor3[i]);
	}
	for(int i=0;i<posi2-1;i++)
	{
		printf("\n [%i]",vetor4[i]);
	}
	getchar();
	return 0;
}
