#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	int a,b,quadrado=0;
	printf("Digite o valor de (a):\n");
	scanf("%i",&a);
	printf("Digite o valor de (b):\n");
	scanf("%i",&b);
	if(a < b)
	{
		for(int i=a;i<b;i++)
		{
			if(i % 2 != 0)
			{
				quadrado=pow(i,2);
				printf("\n O quadrado de %d e:\n %i ",i,quadrado);
			}
		}	
	}
	else
	{
		printf("\n Erro pois o valor de a e maior do que o valor de b!");
	}	
	getchar();
	return 0;
}
