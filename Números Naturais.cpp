#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int N,i;
	printf("Digite um numero:\n");
	scanf("%i",&N);
	for(i=0;i<=N;i++)
	{
		printf("\n %i",i);
	}
	getchar();
	return 0;
}
