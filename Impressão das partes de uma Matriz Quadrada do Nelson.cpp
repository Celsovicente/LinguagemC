#include <stdio.h>
#include <stdlib.h>
int main (int argc, char* argv[])
{

int array[5][5],i,j,aux = 0, p = 10; 
for(i = 0; i < 5; i++)
{
for(j = 0; j < 5; j++)
{
array[i][j] = p;
printf("[%i]",array[i][j]);
p++;


}
printf("\n");
}


printf("\n \n");
printf("Elementos da Diagonal Principal\n");
for(i=0; i<5; i++)
for(j=0; j<5; j++)
{
if(i==j)

printf("[%i] ",array[i][j]) ; 
}
printf("\n \n");

printf("Elementos da Diagonal Secundaria\n");
for(i=0; i<5; i++)
for(j=0; j<5; j++)
{
if(i+j==5-1)

printf("[%i] ",array[i][j]) ; 
}
printf("\n \n");
printf("Elementos do Triangulo Superior Esquerdo\n");
for(i=0; i<5; i++)
{
for(j=0; j<5; j++)
{
if(i+j<5-1)

printf("[%i] ",array[i][j]) ; 
}
printf("\n");
}
printf("Elementos do Triangulo inferior Dirito\n");
for(i=0; i<5; i++)
{
for(j=0; j<5; j++)
{
if(i+j>5-1)

printf("[%i] ",array[i][j]) ; 
}
printf("\n");
}
getchar();
return (0);
}
