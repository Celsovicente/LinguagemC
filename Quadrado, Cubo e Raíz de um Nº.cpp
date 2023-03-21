#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv[])
{
	float num;
	do
	{
	printf("Digite um numero:\n");
	scanf("%f",&num);
	
	printf("\n O quadrado e:\n %f",pow(num,2));
	
	printf("\n O cubo e:\n %f",cbrt(num));
	
	printf("\n A raiz do numero e:\n %f",sqrt(num));
    
	}
	while(num != 0);
	getchar();
	return 0;
}
