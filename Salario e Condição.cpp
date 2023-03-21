#include <stdio.h>
#include <stdio.h>
int main(int argc, char** argv) 
{
	float salario,aumento,gratificacao;
	printf("Digite o Salario do Individuo:\n");
	scanf("%f",&salario);
	if(salario >= 1500 && salario <= 1750)
	{
		gratificacao=((salario*12)/100);
		aumento=salario+gratificacao;
		printf("\n O aumento salarial e de:\n %f",aumento);
	}
	else if(salario >= 1750 && salario <= 2000)
	{
		gratificacao=((salario*10)/100);
		aumento=salario+gratificacao;
		printf("\n O aumento salarial e de:\n %f",aumento);
	}
	else if(salario >= 1500 && salario <= 3000)
	{
		gratificacao=((salario*7)/100);
		aumento=salario+gratificacao;
		printf("\n O aumento salarial e de:\n %f",aumento);
	}
	else if(salario > 3000)
	{
		gratificacao=((salario*5)/100);
		aumento=salario+gratificacao;
		printf("\n O aumento salarial e de:\n %f",aumento);
	} 
	getchar();
	return 0;
}
