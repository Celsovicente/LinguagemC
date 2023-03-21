#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float Valor_Raio,Volume=0,Area,Comprimento;
	float pi=3.141592;
	printf("Digite o Valor do Raio:\n");
	scanf("%f",&Valor_Raio);
	Comprimento=2*pi*Valor_Raio;
	Area=pi*pow(Valor_Raio,2);
	Volume=3/4*pi*pow(Valor_Raio,3);
	
	printf("\n O Comprimento do Raio e:\n %f",Comprimento);
	printf("\n Area do Raio e:\n %f",Area);
	printf("\n O Volume do Raio e:\n %f",Volume);
	getchar();
	return 0;
}
