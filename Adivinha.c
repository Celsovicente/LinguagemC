#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int  main(int argc, char const *argv[])
{
	setlocale(LC_ALL,"Portuguese");
	printf("************************************\n");
	printf("Bem-vindo ao Jogo de Adivinha\n");
	printf("************************************\n");

	getchar();
	return 0;
}