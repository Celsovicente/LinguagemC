#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[3][3],soma_linha[3],soma_coluna[3],soma_DP=0,soma_DS=0,i1=0,j1=0;
	for(int i=0;i < 3;i++) 
	{
		for(int j=0;j < 3;j++) 
		{
		printf("Digite o [%d][%d] valor da matriz :",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(int i=0;i < 3;i++) 
	{
		for(int j=0;j < 3;j++) 
		{
			if(i == 0)
			{
			soma_linha[i1]+=matriz[i][j];
			}
				else if(i == 1)
			{
			soma_linha[i1]+=matriz[i][j];
			}
				else if(i == 2)
			{
			soma_linha[j1]+=matriz[i][j];
			}
				if(j == 0)
			{
			soma_coluna[j1]+=matriz[i][j];
			}
				if(j == 1)
			{
			soma_coluna[j]+=matriz[i][j];
			}
				if(j == 2)
			{
			soma_coluna[j]+=matriz[i][j];
			}
				if(i == j)
				{
					soma_DP+=matriz[i][j];
				}
				if(i + j == 3-1)
			{
				soma_DS+=matriz[i][j];
			}
		}
	}
	if(soma_linha[i1] == soma_coluna[j1] && soma_coluna[j1] == soma_DP && soma_DP == soma_DS )
	{
		printf("\n A matriz forma um quadrado Magico");
	}
	else
	{
		printf("\n A matriz nao forma um quadrado Magico");
	}
	
	return 0;
}
