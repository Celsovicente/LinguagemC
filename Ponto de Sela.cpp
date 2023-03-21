#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int matriz[10][10],linha_menor=0,menor_linha=0,pos_coluna=0,ponto_sela=0,pos_linha=0,set=1,cont=0;
	for(int i=0;i<10;i++) 
	{
		for(int j=0;j<10;j++) 
		{
			matriz[i][j]=rand()%19;
		}
	}
		for(int i=0;i<10;i++) 
		{
				for(int j=0;j<10;j++) 
			{
				printf ("[%d]",matriz[i][j]);
			}
			printf("\n\n");
		}
	for(int i=0;i<10;i++) 
	{
		menor_linha=matriz[i][0];
		for(int j=0;j<10;j++) 
		{
			if(matriz[i][j] < menor_linha) 
			{
			  menor_linha=matriz[i][j];
			  pos_linha=i;
			  pos_coluna=j;
			  for(int i1=0;i1<10;i1++)
				{
					if(menor_linha >= matriz[i1][pos_coluna]) 
						set=1;
					else
					set=0;
					if(set == 1) 
					{
						cont++;
						ponto_sela=menor_linha;
					}
			    }
			  }
			}
		}
	if(cont == 1) 
	{
			printf("\n O ponto de sela e: \n %d na posicao: [%d][%d]",ponto_sela,linha_menor,pos_coluna);
	}
	else
	{
	printf("\n A matriz nao possue ponto de sela!");
	}
	getchar();
}
