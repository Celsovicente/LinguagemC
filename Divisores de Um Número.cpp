#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int num;
	printf("Digite um numero:\n");
	scanf("%d",&num);
	printf("\n Os seus divores sao :");
	for(int i=1;i<=num;i++)
	{
		if((num % i) == 0)
		{
			printf("\n %d\n",i);
	    }
	}
	getchar();
	return 0;
}
