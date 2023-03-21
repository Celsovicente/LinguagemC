#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
int a,c=1,s,q,q1,s1;
float per,M,Mp;
while(c<=10)
{
printf("Digite um numero\n:");
scanf("%d",&a);
s=s+a;
M=s/20;

if(a%2==0)
{
s1=s1+a;
q++;
}
else
{
q1++;
per=(q1*100)/20;


}
c++;

}
Mp=s1/q;
printf("A media dos numeros pares e:%f \n",Mp);
printf("A media e:%f \n",M);
printf("A percentagem dos numeros impares e %i",per);
getchar();
return 0;
}

