#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char argv[])
{
	float a,b,c,d,x1,x2;
	printf("Digite o valor de (a):\n");
	scanf("%f",&a);
	printf("Digite o valor de (b):\n");
	scanf("%f",&b),
	printf("Digite o valor de (c):\n");
	scanf("%f",&c);
	if(a != 0)
	{
		d=pow(b,2)-(4*a*c);
		printf("\n O valor de delta e:\n %f",d);
		if(d == 0)
		{
			x2=x1=-b/(2*a);
			printf("\n O valor de x e:\n %f",x1);
		}
			if(d > 0)
			{
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("\n O valor de x1 e:\n %f",x1);
				printf("\n O valor de x2 e:\n %f",x2);
			}
			else
			{
				printf("\n Erro");
			}
		}
	else
	{
		printf("\n A Equacao nao pode ser resolvida porque nao e do 2 grau!");
	}
	getchar();
	return 0;	
	}
