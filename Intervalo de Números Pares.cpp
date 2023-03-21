#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int a=0,b=0,soma_par=0,i=0;
printf("Ponto inicial(a): ");
scanf("%i", &a);
printf("Ponto final(b): ");
scanf("%i", &b);
for(i=a;i<=b;i++)
{
		if((i % 2) == 0)
		soma_par+=i;
}
    printf("\n A soma dos numeros pares nesse intervalo e:\n %i",soma_par);
    getchar();
	return 0;
}
