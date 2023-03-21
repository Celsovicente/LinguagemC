#include <stdio.h>
#include <stdlib.h>
main(int argc, char** argv[])
{
	int id,cont=1,quant;
	float peso,soma_peso=0;
	while(cont<=7)
	{
		printf("Digite a idade e o peso:\n");
		scanf("%d%f",&id,&peso);
		if(id >= 15 && id <= 18)
		{
			quant++;
		}
		if(id <= 18)
		{
			soma_peso+=peso;
		}
		cont++;
	}
	printf("A quantidade de pesoas com idade entre 15 e 18 e:\n %i",quant);
	printf("\n A soma dos pesos e:\n %f",soma_peso);
	getchar();
	return 0;
}
