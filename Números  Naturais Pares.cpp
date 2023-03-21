#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int n,i;
	printf("Digite um numero par:\n");
	scanf("%i",&n);
 	for(i=n;i>=0;i=i-2)
	{
		printf("\n  %i",i);
	}
	getchar();
	return 0;
}
