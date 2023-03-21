#include<stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	float salario_base,gratificacao,imposto,salario_a_receber;
	printf("Digite o Salario Base do Funcionario:\n");
	scanf("%f",&salario_base);
	
	gratficacao=salario_base*5/100;
	imposto=salario_base*7/100;
	salario_receber=(salario_base+gratificacao)-imposto;
	
	printf("\n O salario a receber e de:\n %f",salario_receber);
	getchar();
	return 0;
}
