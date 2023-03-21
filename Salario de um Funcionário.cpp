#include<stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	float salario,novo_salario;
	printf("Digite o salario do funcionario:\n");
	scanf("%f",&salario);
	novo_salario+=((salario*25)/100);
	printf("\n O Novo Salario e de:\n %f",novo_salario);
	getchar();
	return 0;
}
