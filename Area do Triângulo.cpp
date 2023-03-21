#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float area_triangulo,altura,base;
	printf("Digite a altura e a base do triangulo:\n");
	scanf("%f%f",&altura,&base);
	area_triangulo=(altura*base)/2;
	printf("\n O valor da area do triangulo e:\n %f",area_triangulo);
	getchar();
	return 0;
}
