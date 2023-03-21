#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float salario,aumento;
	printf("Digite o Salario do Funcionario:\n");
	scanf("%f",&salario);
	aumento=((salario*5)/100);
	if(salario > 750 )
	{
		salario+=(100+aumento);
		printf("\n O novo Salario mais o abono  e:%f\n",salario);
	}
	else
	{
		salario+=aumento;
		printf("\n O novo Salario e:%f\n",salario);
	}
	return 0;
}
