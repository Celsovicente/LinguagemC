#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int n,n1=0,n2=1,fibs=0;
	printf("Digite o numero de texte:\n");
	scanf("%i",&n);
	for(int i=1;i<=n;i++)
	{
		fibs=n1+n2;
		printf("\n A soma e:\n %i\n",fibs);
		n1=n2;
		n2=fibs;
	}
	getchar();
	return 0;
}
