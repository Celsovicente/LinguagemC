#include <stdio.h>
#include <ctype.h>
int main(int argc, char argv[])
{
	char a,convert;
	printf("Digite uma letra Maiuscula:\n");
	scanf("%c",&a);
	convert=tolower(a);
	printf("\n Convertendo-a\n %c",convert);
	getchar();
	return 0;
}

