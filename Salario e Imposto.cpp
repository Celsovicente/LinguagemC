#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	char nome;
	float salario,imposto_renda;
	printf("Digite o Salario do Funcionario:\n");
	scanf("%f",&salario);
	printf("Digite o nome:\n");
	scanf("%s",&nome);
	if(salario < 1500)
	{
	printf("\n Isento de imposto");
    }
	if(salario>1500 && salario<=2500)
	{
		imposto_renda=(salario*15)/100;
		
		printf("\n O imposto e de:\n %f",imposto_renda);
	}
	else if(salario > 2500 && salario <= 4000)
	{
		
		imposto_renda=(salario*27.5)/100;
		printf("\n O imposto e de:\n %f",imposto_renda);
	}
	else if(salario>4000)
	{
		imposto_renda=(salario*35)/100;
		printf("\n O imposto de renda e de:\n %f",imposto_renda);
	}
	getchar();
	return 0;
}
