#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float salario,aumento,novo_salario;
	printf("Digite o Salario do Funcionario:\n");
	scanf("%f",&salario);
	if(salario == 300)
	{
		aumento=(salario*50)/100;
		novo_salario=salario+aumento;
		printf("\n O novo Salario e:\n %f",novo_salario);
	}
	else if(salario>=300 && salario<=500)
	{
		aumento=(salario*40)/100;
		novo_salario=salario+aumento;
		printf("\n O novo Salario e:\n %f",novo_salario);
	}
	else if(salario>=500 && salario<=700)
	{
		aumento=(salario*30)/100;
		novo_salario=salario+aumento;
		printf("\n O novo Salario e:\n %f",novo_salario);
	}
	else if(salario>=700 && salario<=800)
	{
		aumento=(salario*20)/100;
		novo_salario=salario+aumento;
		printf("\n O novo Salario e:\n %f",novo_salario);
	}
	else if(salario>=800 && salario<=1000)
	{
		aumento=(salario*10)/100;
		novo_salario=salario+aumento;
		printf("\n O novo Salario e:\n %f",novo_salario);
	}
	else if(salario > 1000)
	{
		aumento=(salario*50)/100;
		novo_salario=salario+aumento;
		printf("\n O novo Salario e:\n %f",novo_salario);
	}
	getchar();
	return 0;
}
