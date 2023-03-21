#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int a=0,b=0,c=0;
	float terno_pitagorico=1;
	printf("Dite os 3 valores:\n");
	scanf("%i%i%i",&a,&b,&c);
	terno_pitagorico=(pow(a,2)+pow(b,2))==pow(c,2);
	printf("\n O terno pitagarico e:\n %f",terno_pitagorico);
	getchar();
	return 0;
}
