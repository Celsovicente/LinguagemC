#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero,soma_par=0,quant=0;
	float Percentagem_dos_impares=0;
	for(int i=1;i<=15;i++)
	{
		printf("Digite um numero:\n");
		scanf("%i",&numero);
		if(numero % 2 == 0)
		{
		    soma_par+=numero;	
		}
		else
		{
			quant++;
		}
	}
	Percentagem_dos_impares=(quant*100)/15;
	printf("\n A soma dos numeros pares e:\n %i",soma_par);
	printf("\n A Percentagem dos numeros Impares e:\n %f",Percentagem_dos_impares);
	return 0;
}
