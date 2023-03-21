#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	float numero;
	int opcao;
	printf("Digite um numero Real:\n");
	scanf("%f",&numero);
	printf("Escolha a Opcao desejada:\n 1-Raiz Quadrada do Numero\n 2-A Metade do Numero\n 3-10%% do Numero\n 4-O Dobro do Numero\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch(opcao)
	{
		case 1:
			printf("\n A raiz quadrada e:\n %f",sqrt(numero));
			break;
			case 2:
				printf("\n A metade do numero e:\n %2.3f",(numero/2));
				break;
				case 3:
					printf("\n Os dez porcento do numero e:\n %2.3f",(numero*0.1));
					break;
					case 4:
						printf("\n O dobro do numero e:\n %2.3f",(numero*2));
						break;
						default:
							printf("\n Opcao invalida!");
							break;
	}
	return 0;
}
