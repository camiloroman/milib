#include<stdio.h>
#include"calculadora.h"
int main(void)
{
int a,b,i,r;
printf("Ingrese las 2 variables");
scanf("%d",&a);
scanf("%d",&b);
printf("Ingrese:\n1 para sumar\n2 para resta\n3 para multiplicacion\n4 para division");
scanf("%d",&i);

switch(i)
{
case 1: 
       r=suma(a,b);
       break;
case 2: 
       r=resta(a,b);
       break;
case 3: 
       r=multiplicacion(a,b);
       break;
case 4: 
       r=division(a,b);
       break;
}
printf("El resultado es %d",r);
return 0;
}
