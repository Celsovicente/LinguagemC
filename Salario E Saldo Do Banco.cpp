#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float salario,aumento,novo_salario;
	printf("Digite o Salario do funcionario:\n");
	scanf("%f",&salario);
	if(salario == 200)
	{
		aumento=(salario*10)/100;
		novo_salario=salario+aumento;
		printf("\n O Salario Medio e de:\n %f",novo_salario);
	}
	else if(salario >= 200 && salario <= 300)
	{
		aumento=(salario*20)/100;
		novo_salario=salario+aumento;
		printf("\n O Salario Medio e de:\n %f",novo_salario);
	}
	else if(salario>=300 && salario<=400)
	{
		aumento=(salario*25)/100;
		novo_salario=salario+aumento;
	    printf("\n O Salario Medio e de:\n %f",novo_salario);
	}
	else if(salario > 400)
	{
		aumento=(salario*30)/100;
		novo_salario=salario+aumento;
	    printf("\n O Saldo Medio e de:\n %f",novo_salario);
	}
	getchar();
	return 0;
}
