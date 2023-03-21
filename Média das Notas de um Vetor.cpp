#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[] )
{
	int vetor[20],soma=0,quant=0,maior=0;
	float Media=0;
	for(int i=0;i<20;i++)
	{
		vetor[i]=rand()%20;
	}
	for(int i=0;i<20;i++)
	{
		soma+=vetor[i];
		if(i == 0)
		{
			maior=vetor[i];
		}
		else if( vetor[i] > maior )
		{
			maior=vetor[i];
		}
	}
	Media=soma/20;
	for(int i=0;i<20;i++)
	{
		if(vetor[i] > Media )
		{
			quant++;
		}
		printf("[%d]\n",vetor[i]);
	}
	printf("\n A media geral da turma e: %f\n",Media);
	printf("\n A maior nota e: %d\n",maior);
	printf("\n A quantidade de alunos com a nota maior que a media e: %d\n",quant);
	getchar();
	return 0;
}
