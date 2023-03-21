#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void volume_raio(float raio)
{
	float pi=3.141592,volume;
	volume=3/4*pi*pow(raio,3);
    printf("\n O Volume do Raio e:\n %f",volume);
}
int main(int argc, char** argv) 
{
	float raio;
	printf("Digite o Valor do Raio:\n");
	scanf("%f",&raio);
	
	volume_raio(raio);
	getchar();
	
	return 0;
}
