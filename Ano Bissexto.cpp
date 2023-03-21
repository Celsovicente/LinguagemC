#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int Ano;
	printf("Digite um Ano:\n");
	scanf("%i",&Ano);
		if(Ano % 400 == 0 || Ano % 4 == 0 && Ano % 100 !=0)
		{
			printf("O Ano %d e Bissexto",Ano);
		}
		else
		{
			printf("\n O Ano %d nao e Bissexto",Ano);
		}
	getchar();
	return 0;
}
