#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int a,b,quant=0,soma=0;
	float Media=0;
	printf("Digite o valor de (a):\n");
	scanf("%i",&a);
	printf("Digite o valor de (b):\n");
	scanf("%i",&b);
	if(a < b)
	{
		for(int i=a;i<b;i++)
	 	{
			if(i % 2 == 0)
			{
				soma+=i;
				quant++;
			}
	    }
	}
	else
	{
		printf("\n Erro pois o valor de a e maior do que o valor de b!");
	}
    Media=soma/quant;
    printf("\n A Media dos numeros pares neste intervalo e de:\n %f",Media);
	getchar();
	return 0;
}

