#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero,quantidade_multiplos_de3=0;
	for(int i=1;i<=7;i++)
	{
		printf("Digite um Numero:\n");
		scanf("%i",&numero);
		if(numero % 3 == 0)
		{
			quantidade_multiplos_de3++;
			printf("\n O numero e multiplo de 3\n");
		}
		else
		{
		   printf("\n O numero nao e multiplo de 3");
		}
	}
	printf("\n A quantidade de numeros multiplos de 3 e de:\n %i",quantidade_multiplos_de3);
	getchar();
	return 0;
}
