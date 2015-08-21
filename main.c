#include<stdio.h>
#include"calculadora.h"
int main(void)
{
int a,b,operando,resultado;

printf("Ingrese el primer número");
scanf("%d",&a);
printf("Ingrese el segundo número");
scanf("%d",&b);
printf("Ingrese:\n1 para sumar\n2 para resta\n3 para multiplicar\n4 para dividir");
scanf("%d",&operando);

switch(operando)
{
	case 1:
		resultado=suma(a,b);
		break;
	case 2:
		resultado=resta(a,b);
		break;
	case 3:
		resultado=multiplicacion(a,b);
		break;
	case 4:
		resultado=division(a,b);
		break;
}
printf("El resultado es %d",resultado);
return 0;
}