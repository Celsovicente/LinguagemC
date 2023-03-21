#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float salario,aumento_salarial,gratificacao;
	printf("Digite o Salario do Individuo:\n");
	scanf("%f",&salario);
	if(salario < 500)
	{
		gratificacao=((salario*30)/100);
		aumento_salarial=salario+gratificacao;
		printf("\n O aumento Salario e de: 30%%\n %f",aumento_salarial);
	}
	else
	{
		printf("\n O Individuo nao tem direito a aumento salarial");
	}
	getchar();
	return 0;
}
