#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
int n[3],i=0,a=0,qd=0;
for(i=0;i;i++)
{
printf("digite %d numero:\n ",i+1);
scanf("%d",&n[i]);
}
for(i=0;i<n;i++)
{
qd=0;
for(a=1;a<n[i];a++)
{
if(n[i]%a==0)
{
qd=qd+a;
} 
}
if(qd==n[i])
{
printf("o numero na posicao %d e perfeito %d\n",i+1,n[i]);
}
else
{
printf("o numero na posicao %d nao perfeito %d\n",i+1,n[i]);
} 
}
getchar();
return 0;
}
