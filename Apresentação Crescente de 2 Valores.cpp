#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int a,b,aux=0;
	printf("Digite 2 numeros:\n");
	scanf("%i%i",&a,&b);
	aux=a;
	a=b;
	b=aux;
	printf("\n A ordem e:\n %i\n %i\n",a,b);
	return 0;
}
