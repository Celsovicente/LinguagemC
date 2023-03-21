#include<stdio.h>
#include<stdlib.h>
main()
{
	int vetor[9],i,posicao_numero;
	for(i=0;i<=9;i++)
	{
	printf("Digite o %d numero:",i);
	scanf("%i",&vetor[i]);
	}
	for(i=1;i<=9;i++)
	{
		printf("[%d]\n",vetor[i]);
		if(vetor[i] == 30)
		{
			posicao_numero=i;
		}
	}
	printf("\n A posicao do numero e:\n %i",posicao_numero);
	return 0;
}
