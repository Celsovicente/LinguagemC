#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	int n;
	do
	{
		printf("\nDigite um numero:\n");
		scanf("%i",&n);
		printf("\n O quadrado do numero e:\n %f",pow(n,2));
	}while(n != 0);
	getchar();
	return 0;
}
