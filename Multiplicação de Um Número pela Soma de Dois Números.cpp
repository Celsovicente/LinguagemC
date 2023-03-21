#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv) 
{
	int n1,n2,multiplicacao=1;
	printf("Digite os dois numero:\n");
	scanf("%i%i",&n1,&n2);
    multiplicacao=n1*(n1+n2);
	printf("\n A multiplicacao do 1 numero pela soma de 2 e:\n %i",multiplicacao);	
	getchar();
	return 0;
}
