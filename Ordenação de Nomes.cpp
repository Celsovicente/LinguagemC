#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv[])
{
setlocale(LC_ALL, "portuguese");
int n, j, i;
char aux[11];

printf("Digite a Quantidade de Nomes: ");
scanf("%d",&n);
getchar();
char nomes [n][11];
for(i = 0; i < n; i++)
{
printf("Digite o %d nome : ", i + 1);
scanf("%s",&nomes[i]);
getchar();
}
printf("Aqui estão os Nomes em ordem Digitados\n");
for(i = 0; i < n; i++)
{
printf("\t \t \t %s\n",nomes[i]);

}
for(i = 0; i < n; i++)
{
for(j = i + 1; j < n; j++)
{
if (nomes[i][0] > nomes [j][0])
{
strcpy(aux, nomes[i]);
strcpy(nomes[i], nomes[j]);
strcpy(nomes[j], aux);
}

}

}

printf("Aqui estão os Nomes em ordem Crescente\n ");
for(i = 0; i < n; i++)
{
system("color 0a");
printf("\t \t \t %s\n",nomes[i]);

}
getchar(); 
return 0;

}
