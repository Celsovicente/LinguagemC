#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int a,i=1,mult2=0,nmult2=0;
	while(i<=10)
	{
		printf("Digite o [%i] numero:",i);
		scanf("%d",&a);
		if(a % 2 == 0)
		{
			mult2=mult2+1;
		}
		else
		{
			nmult2=nmult2+1;
		}
	}
	printf("\n Os numeros multiplos de 2 sao:\n %d",mult2);
	printf("\n Os numeros nao multiplos de 2 sao:\n %i",nmult2);
	getchar();
	return 0;
}                                                                                                                                                                                                                                                                                                  
