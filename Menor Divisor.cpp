#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,cont=0,menor;
	for(int i=1;i<=num;i++)
	{
		printf("Digite um numero:\n");
		scanf("%i",&num);
	 if((num % i) == 0)
		{
			cont++;
		}
		if(cont == 1) 
		{
			menor=cont;
		}
		else if(cont < menor)
		{
			menor=cont;
		}
	  }
	printf("\n O numero e um divisor\n %i",cont);
	printf("\n O menor divisor e:\n %i",menor);
	getchar();
	return 0;
}
