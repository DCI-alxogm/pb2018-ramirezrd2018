/*Creado el 16 de Agosto por Daniel Ramírez Romo*/
#include<stdio.h>
int main()
{
int a;
int b;
int c;
int d;
int f;
int g;
int h;
int i;
/* puse una variable para cada cantidad y para cada operacion */

printf("Hola, dime un número entero\n");
scanf("%i",&a);
printf("Ahora, dime un segundo número entero\n");
scanf("%i",&b);
printf("Ahora, dime un tercer número entero\n");
scanf("%i",&c);
printf("Ahora, dime el último  número entero\n");
scanf("%i",&d);

f=(a+b)*c/d;
printf("\n La respuesta de la primera operación es: %i\n",f);
g=((a+b)*c)/d;
printf("\n La respuesta de la segunda operación es: %i\n",g);
h=(a+b)*c/d;
printf("\n La respuesta de la tercera operación es: %i\n",h);
i=a+(b*c)/d;
printf("\n La respuesta de la cuarta operación es: %i\n",i);
return 0;
}

