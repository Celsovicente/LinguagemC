#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv[])
{
	int a,b,i,soma_par=0,multiplicacao_impar=1;
	printf("Digite o ponto inicial(a):\n");
	scanf("%i",&a);
	printf("\n Digite o ponto final (b):\n");
	scanf("%i",&b);
	for(i=a;i<=b;i++)
	{
		if(i % 2 == 0)
		{
			soma_par+=i;
		}
		else 
		{
			multiplicacao_impar*=i;
		}
	}
	printf("\n A soma dos numeros pares e:\n %i",soma_par);
	printf("\n A multiplicacao dos numeros impares e:\n %i",multiplicacao_impar);
	getchar();
	return 0;
}
