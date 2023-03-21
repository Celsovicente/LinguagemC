#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int a,c=1,s=0,q=0,q1=0;
	float M;
	while(c<=10)
	{
		printf("Digite o [%i] numero:\n",c);
		scanf("%d",&a); 
	    if(a % 2 == 0)
		{
		s=s+a;
	    q=q+1;
		}
		else
		{
		q1=q1+1;
	   }

    }
   M=s/q;
   printf("A media dos numeros pares e: %f",M);
   printf("\n Os numeros impares sao: %i",q1);
   getchar();
   return 0;
}
