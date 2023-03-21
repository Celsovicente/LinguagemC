#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int idade,soma=0,quant=0,quant_1=0,quant_2=0;
	float peso,altura,Media,Percentagem;
	for(int i=1;i<=5;i++)
	{
		printf("Dite a idade da pessoa:\n");
		scanf("%i",&idade);
		printf("Digite a altura e o peso da pessoa:\n");
		scanf("%f%f",&altura,&peso);
		if(idade > 50)
		{
			quant++;
		}
		if(idade >= 10 && idade <= 20)
		{
			soma+=idade;
			quant_1++;
		}
		if(peso > 40)
		{
			quant_2++;
		}
	}
	Media=soma/quant_1;
	Percentagem=(quant_2*100)/5;
	printf("\n A Media das idade e:\n %f",Media);
	printf("\n A percentagem dos pesos e:\n %f",Percentagem);
	getchar();
	return 0;
}
