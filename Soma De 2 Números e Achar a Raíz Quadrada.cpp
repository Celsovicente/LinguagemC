#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	int num1,num2,opcao;
	printf("Digite dois Numero:\n");
	scanf("%i%i",&num1,&num2);
	printf("Digite a Opcao Pretendida:\n 1-Soma dos 2 Numeros\n 2-Raiz Quadrada dos 2 Numero\n");
	scanf("%i",&opcao);
	switch(opcao)
	{
		case 1:
			printf("\n A soma dos 2 numero e:\n %i + %i = %i",num1,num2, num1+num2);
			break;
			case 2:
				printf("\n A Raiz Quadrada do 1 Numero e:\n %f",sqrt(num1));
				printf("\n A Raiz Quadrada do 2 Numero e:\n %f",sqrt(num2));
				break;
				default:
					printf("\n Ocpao Invalida!");
					break;
	}
	getchar();
	return 0;
}
