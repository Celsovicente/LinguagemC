#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int preco_do_produto,codigo;
	printf("Digite o preco do Produto:\n");
	scanf("%i",&preco_do_produto);
	/*
	O valor do código de Origem começa em 1 e termina no 35
	*/
	printf("Digite o codigo de origem:\n"),
	scanf("%i",&codigo);
	if(codigo == 1)
	{
      printf("\n Sul");
	}
	else if(codigo == 2)
	{
		printf("\n Norte");
	}
	else if(codigo == 3)
	{
		printf("\n Leste");
	}
	else if(codigo == 4)
	{
		printf("\n Oeste");
	}
	else if(codigo >= 5 && codigo <= 6)
	{
		printf("\n Nordeste");
	}
	else if(codigo >= 7 && codigo <= 9)
	{
		printf("\n Sudeste");
	}
	else if(codigo >= 10 && codigo <= 20)
	{
		printf("\n Centro Oeste");
	}
	else if(codigo >= 25 && codigo <= 35)
	{
		printf("\n Nordeste");
	}
	getchar();
	return 0;
}
