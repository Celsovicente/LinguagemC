#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	int numero_1,numero_2;
	int opcao;
	printf("Digite 2 numeros:\n");
	scanf("%i%i",&numero_1,&numero_2);
	printf("\n Digite a opcao\n 1-Elevar o primeiro numero ao segundo\n 2-Achar a raiz quadrada dos dois numeros\n 3-Achar a raiz cubica dos numeros\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch(opcao)
	{
		case 1:
			printf("\n O primeiro numero elevado ao segundo e:\n %lf",pow(numero_1,numero_2));
			break;
	    case 2:
			printf("\n A raiz quadrada do 1 numero e:\n %f",sqrt(numero_1));
			printf("\n A raiz quadrada do 2 numero e:\n %f",sqrt(numero_2));
			break;
		case 3:
			printf("\n A raiz cubica do 1 numero e:\n %f",cbrt(numero_1));
			printf("\n A raiz cubica do 2 numero e:\n %f",cbrt(numero_2));
			break;
	    default:
			printf("\n Erro");
			break;
	}
	getchar();
	return 0;
}
