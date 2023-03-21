#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int unidade,unidade_convertida;
	printf("Digite o valor pra ser convertido na Unidade a seguir:\n");
	scanf("%i",&unidade);
	unidade_convertida=( (unidade*1024) / 1);
	printf("\n A unidade convertida e:\n %i",unidade_convertida);
	getchar();
	return 0;
}
