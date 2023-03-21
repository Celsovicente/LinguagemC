#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float custo_de_carro,imposto,desconto,aumento,aumento_distribuidor;
	printf("Digite o custo de Fabrica do Carro:\n");
	scanf("%f",&custo_de_carro);
	if(custo_de_carro == 12000)
	{
		aumento=((custo_de_carro*5)/100);
		aumento_distribuidor=custo_de_carro+aumento;
		printf("\n O aumento do distribuidor e de 5%% e igual a:\n %f",aumento_distribuidor);
		printf("\n Isento de Imposto");
	}
	else if(custo_de_carro >= 12000 && custo_de_carro <= 25000)
	{
		aumento=((custo_de_carro*10)/100);
		aumento_distribuidor=custo_de_carro+aumento;
		printf("\n O aumento do distribuidor e de 10%% e igual a:\n %f",aumento_distribuidor);
		desconto=((custo_de_carro*15)/100);
		imposto=custo_de_carro-desconto;
		printf("\n O Imposto e de 15%% e igual a:\n %f",imposto);
	}
	else if(custo_de_carro > 25000)
	{
		aumento=((custo_de_carro*15)/100);
		aumento_distribuidor=custo_de_carro+aumento;
		printf("\n O aumento do distribuidor e de 15%% e igual a:\n %f",aumento_distribuidor);
		desconto=((custo_de_carro*20)/100);
		imposto=custo_de_carro-desconto;
		printf("\n O Imposto e de 20%% e igual a:\n %f",imposto);
	}
	getchar();
	return 0;
}
