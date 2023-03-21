#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float diagonal_maior,diagonal_menor,area_losangulo;
	printf("Digite o valor da diagonal maior e da diagonal menor:\n");
	scanf("%f%f",&diagonal_maior,&diagonal_menor);
	area_losangulo=(diagonal_maior*diagonal_menor)/2;
	printf("\n O valor da area do losangulo e:\n %f",area_losangulo);
	getchar();
	return 0;
}
