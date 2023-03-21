#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
  	int a,b,s=0,c;
  	printf("Digite 3 numeros:\n");
  	scanf("%i %i %i",&a,&b,&c);
    s=a+b+c;
  	printf("O resultado e:\n %i ",s);
  	getchar();
  	return 0;
}
