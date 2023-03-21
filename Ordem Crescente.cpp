#include <stdio.h>
#include <stdlib.h>
int main(int argc, char argv[]) 
{
    int a,b,c;
    printf("Digite os 3 numeros:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a < b && a < c)
	{
		if(b < c)
		printf("\n A ordem e:\n %d\n %d\n %d\n",a,b,c);
	}
	else if(a < b && a < c)
	{
		if(c < b)
		printf("\n A ordem e:\n %d\n %d\n %d\n",a,c,b);
	}
	else if(b < a && b < c)
	{
		if(a < c)
		printf("\n A ordem e:\n %d\n %d\n %d\n",b,a,c);
	}
	else if(b < a && b < c)
	{
		if(c < a)
		printf("\n A ordem e:\n %d\n %d\n %d\n",b,c,a);
	}
	else if(c < a && c < b)
	{
		if(b < a)
		printf("\n A ordem e:\n %d\n %d\n %d\n",c,b,a);
	}
	else if(c < a && c < b)
	{
		if(a < b)
		printf("\n A ordem e:\n %d\n %d\n %d\n",c,a,b);
	}
   getchar();
	return 0;
}
