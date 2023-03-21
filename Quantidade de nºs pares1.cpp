#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int numero,quant_numero_par,quant_numero;
	do
	{
		printf("Digite um numero:\n");
		scanf("%i",&numero);
		quant_numero++;
		if(numero % 2 == 0)
		{
			quant_numero_par++;
		}
	}while(numero !=1000);
	printf("\n A quantidade de numeros lidos e:\n %i",quant_numero);
	printf("\n A quantidade de numeros pares e:\n %i",quant_numero_par);
	getchar();
	return 0;
}
