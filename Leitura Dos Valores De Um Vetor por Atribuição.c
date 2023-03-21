#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int vetor[]={10,9,273,730,18,89,8},i;
	system("Color 0c");
	for(i=0;i<6;i++)
		printf("[%i]\n",vetor[i]);
	system("pause");
	return 0;
}
