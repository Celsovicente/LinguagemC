#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int salario,aumento,novo_salario;
	printf("Digite o Salario do funcionario:\n");
	scanf("%i",&salario);
	if(salario < 300)
	{
		aumento=(salario*35)/100;
		novo_salario=salario+aumento;
		printf("\n O Novo salario e:\n %i",novo_salario);
	}
	else
	{
		aumento=(salario*15)/100;
		novo_salario=salario+aumento;
	    printf("\n O Novo salario e:\n %i",novo_salario);
	}
	getchar();
	return 0;
}
