#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int n,i,soma=0;
	system("Color 0a");
	for(i=1;i<1000;i++)
	{
		printf("%d\n",i);
		scanf("%i",&n);
		soma+=i;
	}
	printf("\n A soma e:\n %i",soma);
	getchar();
	return 0;
}
