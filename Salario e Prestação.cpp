#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float salario,valor_prestacao;
	printf("Digitebo salario do Funcionario e o valor da prestacao:\n");
	scanf("%f%f",&salario,&valor_prestacao);
	valor_prestacao=salario*20/100;
	if(valor_prestacao > 20/100){
		
		printf("\n Empretimo nao concedido");
	}
	else
	{
	printf("\n Emprestimo concedido");
    }
    getchar();
	return 0;
}
