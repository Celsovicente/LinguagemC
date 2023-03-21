#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int idade;
	printf("Digite a idade do Individuo:\n");
	scanf("%i",&idade);
	if(idade >= 5 && idade <= 10)
	{
		printf("\n A sua categoria e Infantil");
	}
	else if(idade >= 11 && idade <= 15)
	{
		printf("\n A sua categoria e Juvenil");
	}
	else if(idade >= 16 && idade <= 20)
	{
		printf("\n A sua categoria e Junior");
	}
	else if(idade >= 21 && idade >= 25)
	{
		printf("\n A sua categoria e Profissional");
	}
	getchar();
	return 0;
}
