#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	int matriz[6][4];
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<4;j++)
		{
			matriz[i][j]= rand () % 100;
			printf ("[%d]",matriz[i][j]);
		}
		printf("\n\n");
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(matriz[i][j] >= 30)
			{
				matriz[i][j]=0;
				printf("[%d]",matriz[i][j]);
			}
			else
			{
				printf("[%d]",matriz[i][j]);
			}
		}
		printf("\n\n");
	}
	getchar();
	return 0;
}
