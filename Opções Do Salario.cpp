#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float salario,aumento,desconto,novo_salario,imposto;
	int opcao;
	printf("Digite o Salario do Funcionario:\n");
	scanf("%f",&salario);
	printf("Digite um Numero e Escolha a Opcao desejada:\n 1-Imposto\n 2-Novo Salario\n 3-Classificacao\n 4-Finalizar o Programa\n");
	scanf("%i",&opcao);
	switch(opcao)
	{
		case 1:
			if(salario < 500)
			{
				novo_salario=((salario*5)/100);
				desconto-=(salario+novo_salario);
				printf("\n O desconto e de 5%% %f",desconto);
			}
			else if(salario >= 500 && salario <= 850)
			{
				novo_salario=((salario*10)/100);
				desconto-=(salario+novo_salario);
				printf("\n O desconto e de 10%% %f",desconto);
		    }
		    else if(salario > 850)
		    {
				desconto-=(salario+novo_salario);
				novo_salario=((salario*5)/100);
				printf("\n O desconto e de 15%% %f",desconto);
			}
			break;
			case 2:
				if(salario > 1500)
				{
					novo_salario=salario+25;
					aumento+=(salario+novo_salario);
					printf("\n O aumento e de 25:\n %f",aumento);
				}
				else if(salario >= 750 && salario <= 1500)
				{
					novo_salario=salario+50;
					aumento+=(salario+novo_salario);
					printf("\n O aumento e de 50:\n %f",aumento);
				}
				else if(salario >=450 && salario <= 750)
				{
					novo_salario=salario+75;
					aumento+=(salario+novo_salario);
					printf("\n O aumento e de 75:\n %f",aumento);
				}
				else if(salario < 400)
				{
					novo_salario=salario+100;
					aumento+=(salario+novo_salario);
					printf("\n O aumento e de 100:\n %f",aumento);
				}
				break;
				case 3:
					if(salario <= 700)
					{
						printf("\n Mal Remunerado!");
					}
					else
					{
						printf("\n Bem Remunerado!");
					}
					break;
					case 4:
					    printf("\n Sair");
					    break;
					    default:
					    	printf("\n Opcao Invalida!");
					    	break;
					
	}
	getchar();
	return 0;
}
