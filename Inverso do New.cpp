#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	int a=0,b=0,soma=0,quant=0,quadrado=0;
	float media=0;
	printf ("Digite o ponto final  (b):\n");
	scanf("%i",&b);
	printf("Digite o ponto inicial (ba):\n"); 
	scanf("%i",&a);
	if(b > a)
	{
		for(int i=b;i>a;i--)
		{
			if(i % 2 == 0)
			{
				soma+=i;
				quant++;
			}
			else
			{
				quadrado=pow(i,2);
				printf("\n O quadrado do numero e:\n %i",quadrado);
			}
		}
	}
		else
		{
			printf ("\n Erro pois o valor de a e maior que o valor de b!");
		}	
	media=soma/quant;
	printf ("\n A soma de numeros impares",soma);
	printf ("\n A quantidade de numeros impares e :\n %i",quant);
	printf ("\n A media e :\n %f",media);
	getchar();
	return 0;
}
