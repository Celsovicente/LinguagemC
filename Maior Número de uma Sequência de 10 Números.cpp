#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int a,i=1,maior=0;
	
	while(i<=10)
	{
		printf("Digite o [%i] numero:\n",i);
		scanf("%i",&a);
		if(a == 1)
		{
			maior=a;
		}
		else if(a > maior)
		{
			maior=a;
		}
	}
	printf("\n O maior numero e:\n %i",maior);
	getchar();
	return 0;
}
