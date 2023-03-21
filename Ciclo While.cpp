#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	int num = 10;
	while(num > 0)
	{
		printf("%d\n");
		scanf("%d",&num);
		num--;
	}
	printf("\n Fim");
	getchar();
	return 0;
}
