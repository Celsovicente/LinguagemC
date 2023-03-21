#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	system("Color 0b");
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=12;j++)
		{
			printf("%i x %i = %i\n",i,j,(i*j));
		}
		printf("\n");
	}
	return 0;
}
