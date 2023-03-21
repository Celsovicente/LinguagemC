#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int idade;
	printf("Digite a idade do Nadador:\n");
	scanf("%i",&idade);
	if((idade >= 5) &&(idade <= 7))
	{
		printf("\n A classificaçao e Infantil A");
	}else if((idade >=8) && (idade <= 10))
	{
		printf("\n A claficacao e Infantil B");
	}
	else if((idade >= 11) && (idade <= 13))
	{
		printf("\n A classificacao e Juvenil A");
	}
	else if((idade >= 14) && (idade <= 17))
	{
		printf("\n A classificacao e Juvenil B");
	}
	else if(idade >= 18)
	{
		printf("\n A classificacao e Senior");
	}
	getchar();
	return 0;
}
