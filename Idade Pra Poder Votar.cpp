#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int idade;
	printf("Digite a idade do Individuo:\n");
	scanf("%i",&idade);
	if(idade >= 1 && idade <= 16)
	{
		printf("\n Menor de idade por isso nao Pode Votar");
	}
	else if(idade >= 16 && idade <= 18)
	{
		printf("\n Facultativo");
	}
	else if(idade >= 18 && idade <= 65)
	{
		printf("\n Deve votar Obrigatoriamente");
	}
	getchar();
	return 0;
}
