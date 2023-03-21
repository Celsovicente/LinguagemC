#include <stdio.h>

int main(int argc, char** argv)
{
int n[4][4], vet[16],v=0, aux=0;

for(int i=0; i<= 3; i++)
{
for(int j=0; j<= 3; j++)
{
printf("Digite um numero: ");
scanf("%d", &n[i][j]);
vet[v]=n[i][j];
v++;
}
}

for(int i=0; i<=15; i++)
{
for(int j=0; j<=i+15; j++)
{
if(vet[i] < vet[j])
{
aux= vet[i];
vet[i]= vet[j];
vet[j]= aux; 
}
}
}

v=0;
for(int i=0; i<=3; i++)
{
for(int j=0; j<=3; j++)
{
n[i][j] = vet[v];
v++;
}
}
printf("\n\n");
for(int i=0; i<= 3; i++)
{
for(int j=0; j<= 3; j++)
{
printf("%d ", n[i][j]);
}
printf("\n");
}

printf("\nEste algoritmo foi elaborado por Osvaldo de Sousa\n");
return 0;
}
