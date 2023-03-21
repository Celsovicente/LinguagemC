#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int a,s=0,q=0,i=1;
	while(i<=5)
	{
		printf("Digite um numero:\n");
		scanf("%d",&a);
		if(a % 2 == 0)
		{
			s=s+a;
		}
		else
		{
			q++;
		}
	}
	printf("A soma e\n: %i",s);
	printf("\n A quantidade\n e: %d",q);
	getchar();
	return 0;
}
