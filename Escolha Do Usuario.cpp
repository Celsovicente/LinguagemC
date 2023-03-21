#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	/*
	OBS: Os Números digitados devem ser obrigatoriamente diferentes
	*/
	int numero1,numero2,opcao;
	float Media;
	printf("Digite o 1 numero:\n");
	scanf("%i",&numero1);
	printf("Digite o 2 numero:\n");
	scanf("%i",&numero2);
	printf("Escolha a Opcao:\n 1-Media Entre Os Numero Digitados\n 2-Diferença Do Maior Pelo Menor\n");
	printf(" 3-Produto entre os Numeros Digitados\n 4-Divisao do 1 Pelo Segundo\n");
	scanf("%i",&opcao);
	switch(opcao)
	{
		case 1:
		Media=(numero1+numero2)/2;
		printf("\n A Media e:\n %f",Media);
		break;
		case 2:
		if(numero1 > numero2)
		{
			printf("\n O maior e o 1 numero");
			printf(" %i - %i = %i",numero1,numero2,(numero1-numero2));
		}
		else if(numero2 > numero1)
		{
			printf("\n O maior e o 2 numero");
			printf("\n A diferenca e %i - %i = %i",numero2,numero1,(numero2-numero1));
		}
			break;
		case 3:
		printf("\n O Produto e %i x %i = %i",numero1,numero2,(numero1*numero2));
		break;
			case 4:
			printf("\n  Divisao e %i / %i = %d",numero1,numero2,(numero1/numero2));
			break;
				default:
				printf("\n Erro");
				break;	
	}
	getchar();
	return 0;
}
