#include<stdio.h>
#include<math.h>
int main(int argc, char** argv[])
{
	int soma_dos_quadrados=0,a,b,c;
	printf("Digite 3 numeros:\n");
	scanf("%f%f%f",&a,&b,&c);
	soma_dos_quadrados=pow(a,2)+pow(b,2)+pow(c,3);
	printf("\n A soma dos quadrados e:\n %i",soma_dos_quadrados);
	getchar();
	return 0;
}
