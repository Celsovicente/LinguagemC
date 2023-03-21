#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	system("color 0a");
	int n,i,c;
	printf("Digite a quantidade:\n");
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		for(c=0;c<i;c++)
		{
			printf("*",i);
		}
		printf("\n");
	}
	getchar();
	return 0;
}
