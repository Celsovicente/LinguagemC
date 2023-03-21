#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float nota;
	printf("Digite a nota do Aluno:\n");
	scanf("%f",&nota);
	if(nota >= 0 && nota <= 49)
	{
		printf("\n Insuficiente");
	}
	else if(nota >= 50 && nota <= 64)
	{
		printf("\n Regular");
	}
	else if(nota >= 65 && nota <= 84)
	{
		printf("\n Bom");
	}
	else if(nota >= 85 && nota <= 100)
	{
		printf("\n Otimo");
	}
	getchar();
	return 0;
}
