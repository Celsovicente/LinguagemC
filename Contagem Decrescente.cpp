#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv[])
{
    int num;
    printf("Contagem decrescente:\n");
	for(int i=10;i > -1;i--)
	{
    printf("%i \n",i);
    scanf("%i",&num);
	}
getchar();
return 0;
}
