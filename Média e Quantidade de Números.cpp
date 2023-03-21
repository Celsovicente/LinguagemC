#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
int matriz[1][3], i,j ,quantidade=0,quant=0,soma,p=0;
float Media; 
for(i = 0; i <= 1; i++)
{
for(j = 0; j <= 3; j++)
{
matriz[i][j] = p;
printf("[%i]",matriz[i][j]);
p++;
}
printf("\n");
}
for(i = 0; i <= 1; i++)
{
for(j = 0; j <= 3; j++)
{
if(matriz[i][j] >= 12 && matriz[i][j]<=20)
{
quantidade++;

}
if(matriz[i][j] % 2 == 0)
{ 
quant ++;
soma += matriz[i][j];

}
}
}
Media = soma / quant;
printf("\n A quantidade de numeros e: %i", quantidade);
printf("\n A Media dos numeros Pares e: %.2f", Media);
getchar();
return 0;
}
