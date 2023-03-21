#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float n1,n2,n3,n4,Md;
	printf("Digite as 4 notas:\n");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	Md=(n1+n2+n3+n4)/4;
	printf("\n A media e:\n %f",Md);
	getchar();
	return 0;
}
