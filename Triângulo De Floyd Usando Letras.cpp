#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	system("color 0a");
	int numero,i,c;
	printf("Digite a quantidade de Numeros:\n");
	scanf("%i",&numero);
	for(i=1;i<=numero;i++)
	{
		for(c=0;c<i;c++)
		{
		printf("%c",'A'+i-1);
	    }
	    printf("\n");
    }
    getchar();
	return 0;
}
