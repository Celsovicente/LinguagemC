#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int Numero,j=0,cont;
		for(int i=1;i<=10;i++)
		{
			printf("Digite um Numero:\n");
			scanf("%i",&Numero);
			cont=0;
			for(i=1;i<=Numero;i++)
			{
				if(Numero % i == 0)
				{
					cont++;
				}
			}
			if(cont == 2)
			{
				j++;
				printf("\n O Numero e Primo\n");
			}
			else
			{
				printf("\n O numero nao e Primo\n");
			}
		}
	printf("\n Os numeros primos sao:\n %i",j);
	getchar();
	return 0;
}
