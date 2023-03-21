#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	char opcao;
	do
	{
	printf("C-Cliente\n F-Fornecedor\n E-Encomendas\n S-Sair\n");
	scanf("%c",&opcao);
	getchar();
	fflush(stdin);
	switch(opcao)
	{
		case 'C':
			printf("\n Cliente\n");
			break;
			case 'F':
				printf("\n Fornecedor\n");
				break;
				case 'E':
					printf("\n Encomendas\n");
					break;
					case 'S':
						break;
						default:
							printf("\n Opcao invalida");
							break;
	}
    }while(opcao!='S');
    getchar();
	return 0;
}
