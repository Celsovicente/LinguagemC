#include <stdio.h>
#include <locale.h>
int main(int argc, char** argv[])
{
	setlocale(LC_ALL,"Portuguese");
	for(int i = 1; i <= 1000; i++)
	printf("Olá Mundo\n");
    getchar();
	return 0;
}

