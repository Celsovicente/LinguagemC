#include <stdio.h>
#include <stdlib.h>
void triangulo (int x, int y, int z)
{
	if(x+y > z || y+z > x || x+z > y)
	{
		printf("Podem formar um triangulo");

     if(x==y && y==z)
	{
		printf("\n E um triangulo Equilatero");
	}
	else if(x==y && y!=z)
	{
		printf("\n E um traingulo Isosceles");
	}
	else
	{
		printf("\n E um Triangulo Escaleno");
	}
    }
    else
    {
    	printf("\n Nao podem formar um Triangulo!");
	}
}
int main(int argc, char** argv) 
{
	int x,y,z;
	printf("Digite o 1 numero:\n");
	scanf("%i",&x);
	printf("Digite o 2 numero:\n");
	scanf("%i",&y);
	printf("Digite o 3 numero:\n");
	scanf("%i",&z);
	
	triangulo(x,y,z);
	getchar();
	
	return 0;
}
