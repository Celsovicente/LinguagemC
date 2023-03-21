#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int matriz[1][2],i,j,quant,a=0;
	for(i=0;i<1;i++)
	{
	    for(j=0;j<2;j++)
		{
	    	matriz[i][j]=a;
			scanf("%i",&matriz[i][j]);
		a++;
		}
	}
	printf("\n\n");
	for(i=0;i<1;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("[%d]",matriz[i][j]);
			if(matriz[i][j] >= 5 && matriz[i][j] <= 15)
			{
				quant++;
			}
		}
		printf("\n\n");
	}
	printf("\n A quantidade de elementos e:\n %i",quant);
	getchar();
	return 0;
}
