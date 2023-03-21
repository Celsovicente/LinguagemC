#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int a,b,c,d,aux=0;
	printf("Digite os 4 numeros:\n");
	scanf("%i%i%i%i",&a,&b,&c,&d);
	aux=a;
	a=b;
	b=c;
	c=d;
	d=aux;
	printf("\n Trocando os valores a ordem e:\n %i\n %i\n %i\n %i\n",a,b,c,d);
	getchar();
	return 0;
}
