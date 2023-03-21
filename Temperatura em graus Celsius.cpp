#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float celsius,convert_fahrenheit;
	printf("Digite a temperatura em celsius:\n");
	scanf("%f",&celsius);
	convert_fahrenheit=(1.8*celsius)+32;
	printf("\n Convertendo-a em fahrenheit:\n %f",convert_fahrenheit);
	getchar();
	return 0;
}
