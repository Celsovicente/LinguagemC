#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int matriz[2][3],i,j,soma_par=0,quant_impar=0,s=0;
	float Media;
	system("Color 0b");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Entre com um valor para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			s+=matriz[i][j];
			if(matriz[i][j] % 2 == 0)
			{
				soma_par+=matriz[i][j];
			}
			else
			{
				quant_impar++;
			}
		}
		printf("\n\n");
	}
	Media=s/12;
	printf("\n A soma dos numeros pares e:\n %i",soma_par);
	printf("\n A quantidade dde numeros impares e:\n %i",quant_impar);
	printf("\n A Media de todos os numeros e:\n %f",Media);
	getchar();
	return 0;
}
