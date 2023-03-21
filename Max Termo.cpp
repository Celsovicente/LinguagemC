#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[6][6],max_termo=0,linha_max=0,coluna_max=0,menor=0,linha_menor=0,coluna_menor=0;
	for(int i=0;i<6;i++) 
	{
		for(int j=0;j<6;j++) 
		{
			printf("Digite o [%d][%d] valor da  Matriz:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(int i=0;i<6;i++) 
	{
		for(int j=0;j<6;j++) 
		{
			printf("[%d]",matriz[i][j]);
			if(i==0 && j== 0)
			{
				menor=matriz[i][j];
				linha_menor=i;
				coluna_menor=j;
			}
			else if(menor > matriz[i][j]) 
			{
				menor=matriz[i][j];
				linha_menor=i;
				coluna_menor=j;
			}
		}
		printf ("\n\n");
	}
	max_termo=matriz[linha_menor][0];
	for(int j=0;j<6;j++)
 	{
 		if(	max_termo < matriz[linha_menor][j]) 
		{
			max_termo=matriz[linha_menor][j];
			linha_max=linha_menor;
			coluna_max=j;
		}
	}
	printf ("\n O menor valor e:\n %d",menor);
	printf ("\n A sua linha e: %d,\n a sua coluna e:\n %d",linha_menor,coluna_menor);
	printf ("\n O max termo e:\n %d",max_termo);
	printf ("\n A sua linha e: %d,\n a sua coluna e:\n %d",linha_max,coluna_max);
	return 0;
}
