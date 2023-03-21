#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float area_raio,raio;
	double p=3.141592;
	printf("Digite o valor do raio:\n");
	scanf("%f",&raio);
	area_raio=p*pow(raio,2);
	printf("\n A area do raio e:\n %f",area_raio);
	getchar();
	return 0;
}
