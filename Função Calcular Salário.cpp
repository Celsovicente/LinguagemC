#include <stdio.h>
#include <stdlib.h>
void calcular_salario(float salario)
{
	float novo_salario;
		novo_salario = salario + ((salario *  20)/ 100);
		printf("\n O novo Salario e:\n %f",novo_salario);
}
int main()
{
	float salario;
	printf("Digite o seu Salario:\n");
	scanf("%f",&salario);
	calcular_salario(salario);
	getchar();
	return 0;
}
