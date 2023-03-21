#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
int numero,quant_primo=0,cont;
for(int j=1;j<=10;j++)
{
printf("Digite um numero:\n");
scanf("%i",&numero);
cont=0;
for ( int i = 1 ; i <= numero; i++)
{ 
if (numero % i == 0 )
{ 
cont ++;
if(cont == 2) 
{ 
quant_primo++; 
}
}
}
printf("\n A quantidade de numeros primos e:\n %i",quant_primo); 
getchar();
return 0; 
}
