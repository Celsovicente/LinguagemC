#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv[])
{
	float convert_celsius,fahrenheit;
	printf("Digite a temperatura em Fahrenheit:\n");
	scanf("%f",&fahrenheit);
	convert_celsius=(fahrenheit-32)/1.8;
	printf("\n Convertendo-a em Celsius:\n %f",convert_celsius);
	getchar();
	return 0;
}
