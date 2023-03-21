#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int opcao,meses;
	float salario,novo_salario,aumento;
	printf("Digite o Salario do Funcionario:\n");
	scanf("%f",&salario);
	printf("Escolha a Sua Opcao:\n 1-Novo Salario\n 2-Ferias\n 3-Decimo Terceiro\n 4-Sair\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch(opcao)
	{
		case 1:
			if(salario == 210)
			{
				aumento=((salario*15)/100);
				novo_salario=salario+aumento;
				printf("\n O Novo Salario com o Aumento de 15%% e:\n %f",novo_salario);
			}
			else if(salario >=210 && salario <=600)
			{
				aumento=((salario*10)/100);
				novo_salario=salario+aumento;
				printf("\n O novo Salario com o Aumento de 10%% e:\n %f",novo_salario);
			}
			else if(salario > 600)
			{
				aumento=((salario*5)/100);
				novo_salario=salario+aumento;
				printf("\n O novo Salario com o Aumento de 5%% e:\n %f",novo_salario);
			}
			break;
			case 2:
				novo_salario=salario*(1/3);
				printf("\n O Novo Salario com o Subsidio de Ferias e de:\n %f",novo_salario);
				break;
				case 3:
					printf("\n Digite o Numero de Meses Trabalhado na Empresa:\n");
					scanf("%i",&meses);
					novo_salario=((salario*meses)/12);
					printf("\n O Salario de Decimo Terceiro e de:\n %f",novo_salario);
					break;
					case 4:
						printf("\n Sair!");
						break;
						default:
							printf("\n Opcao Invalida!");
							break;
	}
	getchar();
	return 0;
}
