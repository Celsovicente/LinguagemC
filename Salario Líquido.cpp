#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	char nome;
	float salario_minimo=678,valor_hora_extra=10,salario_bruto,salario_liquido;
	float quantidade_hora_extra,desconto,imposto_de_renda,hora_extra;
	
	printf("Digite o nome do Funcionario:\n");
	scanf("%c",&nome);
	
	printf("Digite a quantidade de horas trabalhadas:\n");
	scanf("%f",&quantidade_hora_extra);
	
	quantidade_hora_extra=hora_extra*valor_hora_extra;
	salario_bruto=3*salario_minimo+quantidade_hora_extra;
	
	if(salario_bruto > 2000)
	{
		desconto-=salario_bruto*12/100;
		printf("\n O desconto e de:\n %f",desconto);
	}
	else if(salario_bruto > 2500)
	{
		imposto_de_renda=salario_bruto*20/100;
		printf("\n O Imposto da Renda e de:\n %f",imposto_de_renda);
	}
	salario_liquido-=(desconto+imposto_de_renda);
	printf("\n O salario liquido e de:\n %f",salario_liquido);
	getchar();
	return 0;
}
