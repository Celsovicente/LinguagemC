#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int x,y,z;
	printf("Digite 3 valores:\n");
	scanf("%i%i%i",&x,&y,&z);
	if(x > 0 && y > 0 && z > 0)
{
	if((y+z>x || x+z>y || x+y>z))
  {
		printf("\n Podem formar um tiangulo");
			if(x==y && y==z)
			{
		printf("\n E um triangulo Equilatero");
	}
	else if(y==z && z!=x)
	{
		printf("\n E um trinagulo Isosceles");
		
	}
	else
	{
		printf("\n E um triangulo Escaleno");
	}
 }
  else
    {
		printf("\n Nao podem formar um Triangulo");
    }
}
else
{
	printf("\n Erro!");
}
    getchar();
	return 0;
}

