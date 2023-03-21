#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int numero,soma_pares,i;
	for(i=1;i<=100;i++)
	{
		printf("Digite o %d numero:\n",i);
		scanf("%i",&numero);
		if(numero % 2 == 0)
		{
		soma_pares+=numero;
		}
    }
	printf("\n A soma dos numeros pares e:\n %i",soma_pares);
	getchar();
	return 0;
}
