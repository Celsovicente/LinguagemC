#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) 
{
	int n;
	printf("Digite um numero:\n");
	scanf("%i",&n);
	printf("\n A raiz cubica do numero e:\n %f",cbrt(n));
	getchar();
	return 0;
}
