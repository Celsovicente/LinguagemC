#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
   {
   int numero,fatorial=1,cont=1;
    printf("Digite um numero:\n");
	scanf("%d",&numero);
	while(cont!=numero)
	{
	fatorial*=cont;
	cont++;
    }
    getchar();
	printf("\n O fatorial do numero e:\n %d",fatorial);
	return 0;
}
