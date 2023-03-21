#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int a,b,m=1;
	printf("Digite dois numeros:");
	scanf("%d%d",&a,&b);
	m=a*b;
	printf("o resultado e:%d",m);
	getchar();
	return 0;
}
