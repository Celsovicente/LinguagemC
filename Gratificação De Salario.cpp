#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float salario,gratificacao,aumento,desconto;
	printf("Digite o Salario do Individuo:\n");
	scanf("%f",&salario);
	if(salario == 350)
	{
		aumento=salario+100;
		desconto=(salario*7)/100;
		gratificacao=(salario+aumento)-desconto;
		printf("\n A graticao e de:\n %f",gratificacao);
	}
	else if(salario >= 350 && salario <= 600)
	{
		aumento=salario+75;
		desconto=(salario*7)/100;
		gratificacao=(salario+aumento)-desconto;
		printf("\n A graticao e de:\n %f",gratificacao);
	}
	else if(salario >= 600 && salario <= 900)
	{
		aumento=salario+50;
		desconto=(salario*7)/100;
		gratificacao=(salario+aumento)-desconto;
		printf("\n A graticao e de:\n %f",gratificacao);
	}
	else if(salario > 900)
	{
		aumento=salario+35;
		desconto=(salario*7)/100;
		gratificacao=salario-desconto;
		printf("\n A graticao e de:\n %f",gratificacao);
	}
	getchar();
	return 0;
}
