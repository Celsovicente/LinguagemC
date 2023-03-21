#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float area_quadrado,tama_quadra;
	printf("Digite o tamanho do quadrado:\n");
	scanf("%f",&tama_quadra);
	area_quadrado=tama_quadra;
	printf("\n O area do quadrado e:\n %f",area_quadrado);
	getchar();
	return 0;
}
