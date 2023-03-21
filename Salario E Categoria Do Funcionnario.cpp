#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int salario,novo_salario,aumento,opcao;
	printf("Digite o salario do Individuo:\n");
	scanf("%i",&salario);
	printf("Digite a Opcao para escolher o Cargo do mesmo:\n 1-Escrituario \n 2-Secretario \n 3-Caixa \n 4-Gerente \n 5-Diretor\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch(opcao)
	{
		case 1:
			aumento=(salario*50)/100;
			printf("\n O aumento e de 35%%:\n %i",aumento);
			novo_salario=salario+aumento;
			printf("\n O Novo Salario e de:\n %i",novo_salario);
			break;
			case 2:
				aumento=(salario*35)/100;
				printf("\n O aumento e de 35%%:\n %i",aumento);
				novo_salario=salario+aumento;
				printf("\n O Novo Salario e de:\n %i",novo_salario);
				break;
				case 3:
					aumento=(salario*20)/100;
					printf("\n O Aumento e de 20%%:\n %i",aumento);
					novo_salario=salario+aumento;
					printf("\n O Novo Salario e de:\n %i",novo_salario);
					break;
					case 4:
						aumento=(salario*10)/100;
						printf("\n O aumento e de 10%%:\n %i",aumento);
						novo_salario=salario+aumento;
						printf("\n O Novo Salario e de:\n %i",novo_salario);
						break;
						case 5:
							printf("\n Nao ha aumento para o Diretor!");
							break;
							default:
								printf("\n Erro");
								break;
	}
	getchar();
	return 0;
}
