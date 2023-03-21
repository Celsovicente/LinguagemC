#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float area_trapezio,Base_maior,base_menor,altura;
	printf("Digite a base maior, a base menor e a altura do trapezio:\n");
	scanf("%f%f%f",&Base_maior,&base_menor,&altura);
	area_trapezio=(Base_maior+base_menor)*altura;
	printf("\n O valor da area do trapezio e:\n %f",area_trapezio);
	getchar();
	return 0;
}
