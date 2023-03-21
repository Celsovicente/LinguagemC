#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int a;
	printf("Digite um numero:\n");
	scanf("%i",&a);
	if(a > 0)
	{
	printf("O numero e positivo");
    }
	else if(a == 0)
	{
	printf("O numero e nulo");
	}
	else if(a < 0)
	{
	printf("O numero e negativo");
    }
  return 0;
}
