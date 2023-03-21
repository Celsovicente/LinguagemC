#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int valor,maior,menor,i;
	for(i=1;i<=10;i++)
	{
		printf("Digite o %d valor:\n",i);
		scanf("%i",&valor);
		if(valor == 1)
		{
			maior=valor;
			menor=valor;
		} 
		else if(valor > maior)
		{
			maior=valor;
		}
		else if(valor < menor)
		{
			menor=valor;
		}
	}
	printf("\n O maior valor e:\n %i",maior);
	printf("\n O menor valor e:\n %i",menor);
	getchar();
	return 0;
}
