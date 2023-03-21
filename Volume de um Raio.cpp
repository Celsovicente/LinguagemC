#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, argv[])
{
	float haltura,Volume,raio;
	double p=3.141592;
	printf("Digite o valor haltura e o raio:\n");
	scanf("%f%f",&haltura,&raio);
	Volume=p*pow(raio,2)*haltura;
	printf("\n O valor do Volume e:\n %f",Volume);
	
	getchar();
	return 0;
}
