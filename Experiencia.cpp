#include<stdio.h>
int main(int argc, char** argv) 
{
	int idade;
	char Sexo;
	float peso;
	printf("Digite a idade e o peso do individuo:\n");
	scanf("%i%f",&idade,&peso);
	printf("Digite o Sexo do individuo\n M-Masculino\n F-Feminino");
	scanf("%c",&Sexo);
	if(idade < 18 && peso > 70 && Sexo == 'M' || Sexo == 'F')
	{
		printf("\n O individuo e Obeso");
	}
	else
	{
		printf("\n O individuo nao e obeso");
	}
	return 0;
}
