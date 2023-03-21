#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	float n;
	printf("Digite um numero:\n");
	scanf("%f",&n);
	printf("\n A raiz quadrada e:\n %f",pow(n,0.5));
	getchar();
	return 0;
}
