#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NInicial 100
#define NFinal 1000

int main(int argc, char** argv) 
{
	unsigned int I,N,Numero;
	printf("Quantidade de Numeros Pretendida?");
	scanf("%u",&N);
	srand( getpid ());
	for(I=0;I<N;I++)
	{
		Numero=NInicial+ \ 
		(int) ((NFinal - NInicial+1) * (rand() / (RAND_MAX+1.0)));
		printf("%u\n",Numero);
	}
	getchar();
	return 0;
}
