#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

unsigned long factorial (int num);

int main() {

unsigned long fact;

int num;
printf ("Entre com um numero: \n");
scanf ("%d", &num);

fact = factorial(num);
printf ("O factorial de %d e %ld", num, fact);
return 0;
}

unsigned long factorial (int num)
{
if ((num==1) || (num==0)) return (1);
unsigned long result = num*factorial(num-1);

return (result);
}
