#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int idade,soma,quant,soma_1,quant_1,soma_2,quant_2;
	float peso,Media,Media_1,Media_2;
	for(int i=1;i<=15;i++)
	{
		printf("Digite a Idade do individuo:\n");
		scanf("%i",&idade);
		printf("Digite o Peso do individuo:\n");
		scanf("%f",&peso);
		if(idade >= 1 && idade <= 10)
		{
			soma+=idade;
			quant++;
		}
		else if(idade >= 11 && idade <= 20)
		{
			soma_1+=idade;
			quant_1++;
		}
		else if(idade >= 21 && idade <= 30)
		{
			soma_2+=idade;
			quant_2++;
		}
	}
	Media=soma/quant;
	Media_1=soma_1/quant_1;
	Media_2=soma_2/quant_2;
	printf("\n A media da primeira faixa etaria e:\n %f",Media);
	printf("\n A media da segunda faixa etaria e:\n %f",Media_1);
	printf("\n A media da terceira faixa etaria e:\n %f",Media_2);
    getchar();
	return 0;
}
