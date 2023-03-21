#include <stdio.h>
#include <stdlib.h>
int main (int argc, char** argv )
{
	int matriz[4][4],matriz1[4][4],matriz2[8][8],c=0,c1=0,c3=1,c4=1;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
		printf("Entre com um valor para a matriz:");
		scanf("%i",&matriz[i][j]);
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
		printf("Entre com um Valor para a matriz1:");
		scanf("%i",&matriz1[i][j]);
		}
	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			matriz2[c][c1]=matriz[i][j];
			c+=2;
			c1+=2;
			matriz2[c3][c4]=matriz1[i][j];
			c3+=2;
			c4+=2;
			printf("[%i]\n",matriz2[i][j]);
		}
		printf("\n\n");
	}
	getchar();
	return 0;
}
