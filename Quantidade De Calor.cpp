#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float Q,massa,Calor_especifico,temperatura;
	printf("Digite o valor da massa:\n");
	scanf("%f",&massa);
	printf("Digite o valor do calor especifico:\n");
	scanf("%f",&Calor_especifico);
	printf("Digite o valor da temperatura:\n");
	scanf("%f",&temperatura);
	Q=massa*Calor_especifico*temperatura;
	printf("\n O valor de Q e:\n %f",Q);
	getchar();
	return 0;
}
