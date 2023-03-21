#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
system("Color 0b");
int n=1, k;
printf("Digite um numero para calcular a tabuada:\n ");
scanf("%d", &k);
while ( n <=12) 
{
printf (" %2d x %2d = %2d\n", k, n, k * n);
n++;
}
system("pause");
getchar();
return 0;
}
