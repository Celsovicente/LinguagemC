#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	/*
	OBS:devem ser digitados 3 números diferentes!
	*/
	int n,n2,n3,n4;
	printf("Digite os 4 numeros:\n");
	scanf("%d%d%d%d",&n,&n2,&n3,&n4);
	if(n < n2 && n < n3 && n < n4)
	{
		if(n2 < n3 && n2 < n4)
		if(n3 < n4)
      	printf("\n A ordem e:\n %d\n %d\n %d\n %d\n",n,n2,n3,n4);
	}
	else if(n2 < n3 && n2 < n4 && n2 < n)
	{
		if(n3 < n4 && n3 < n)
		if(n4 < n)
      	printf("\n A ordem e:\n %d\n %d\n %d\n %d\n",n2,n3,n4,n);
	}
	else if(n3 < n4 && n3 < n2 && n3 < n)
	{
		if(n4 < n2 && n4 < n)
		if(n2 < n)
      	printf("\n A ordem e:\n %d\n %d\n %d\n %d\n",n3,n4,n2,n);
	}
	else if(n4 < n3 && n4 < n2 && n4 < n)
	{
		if(n3 < n2 && n3 < n)
		if(n2 < n)
      	printf("\n A ordem e:\n %d\n %d\n %d\n %d\n",n4,n3,n2,n);
	}
	else if(n < n3 && n < n2 && n < n4)
	{
		if(n3 < n2 && n3 < n4)
		if(n2 < n4)
		printf("\n A ordem e:\n %d\n %d\n %d\n %d\n",n,n3,n2,n4);
	}
	else if(n2 < n4 && n2 < n3 && n2 < n)
	{
		if(n4 < n3 && n4 < n)
		if(n3 < n)
		printf("\n A ordem e:\n %d\n %d\n %d\n %d\n",n2,n4,n3,n);
	}
	else if(n4 < n2 && n4 < n && n4 < n3)
	{
		if(n2 < n && n2 < n3)
		if(n < n3)
		printf("\n A ordem e:\n %d\n %d\n %d\n %d\n",n4,n2,n,n3);
	}
	return 0;
}
