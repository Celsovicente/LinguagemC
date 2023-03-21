#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	#define N
	#define M
	int matriz[M][N],soma=0,N,M;
	printf("Digite as dimensoes da matriz, os valores devem ser iguais :\n");
	scanf("%d%d",&N,&M);
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("Digite o [%d][%d] valor da matriz :",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("[%d]",matriz[i][j]);
			if(i + j > matriz[i][j]-1 )
			{
				soma+=matriz[i][j];
			}
		}
		printf("\n\n");
	}
	printf("\n A soma dos valores abaixo da Diagonal Secundaria e:%d\n",soma);
	return 0;
}
