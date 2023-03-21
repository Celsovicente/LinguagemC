#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[10],maior,menor,segundo_maior=0;
	for(int i=0;i<10;i++)
	{
		printf("Entre com o [%d] numero:",i);
		scanf("%i",&vetor[i]);
	}
		for(int i=0;i<10;i++)
		{
			printf("[%d]\n",vetor[i]);
			if(vetor[i] == 0)
			{
				maior=vetor[i];
				segundo_maior=vetor[i];
				menor=vetor[i];
			}
			else if(vetor[i] < menor)
			{
				menor=vetor[i];
			}
			else if(vetor[i] > maior)
			{
				maior=0;
				segundo_maior=vetor[i];
			}
		}
	printf("\n O segundo maior valor e: %d",segundo_maior);
	printf("\n O menor valor e: %d",menor);
	getchar();
	return 0;
}
