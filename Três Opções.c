#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	int numero,numero2,numero3,numero4;
	int opcao;
	printf("Digite os 4 numeros:\n");
	scanf("%i%i%i%i",&numero,&numero2,&numero3,&numero4);
	printf("Digite a opcao:\n 2-Mostrar o 1 numero\n 3-Mostrar o 2 numero\n 4-Mostrar o 3 numero\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch(opcao)
	{
		case 1:
			printf("\n O 1 numero e:\n %i",numero);
			break;
			case 2:
				printf("\n O 2 numero e:\n %i",numero2);
				break;
				case 3:
					printf("\n O 3 numero e:\n %i",numero3);
					break;
					default:
						printf("\n Opcao Invalida");
						break;
	}
	getchar();
	return 0;
}
