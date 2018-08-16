/*Creado el 16 de Agosto por Daniel Ramírez Romo*/
#include<stdio.h>
int main()
{
float a;
float b;
float c;
float d;
float f;
float g;
float h;
float i;
/* puse una variable de numeros reales para que incluyera decimales, para cada cantidad y para cada operacion */

printf("Hola, dime un número real\n");
scanf("%f",&a);
printf("Ahora, dime un segundo número real\n");
scanf("%f",&b);
printf("Ahora, dime un tercer número real\n");
scanf("%f",&c);
printf("Ahora, dime el último  número real\n");
scanf("%f",&d);

f=(a+b)*c/d;
printf("\n La respuesta de la primera operación es: %f\n",f);
g=((a+b)*c)/d;
printf("\n La respuesta de la segunda operación es: %f\n",g);
h=(a+b)*c/d;
printf("\n La respuesta de la tercera operación es: %f\n",h);
i=a+(b*c)/d;
printf("\n La respuesta de la cuarta operación es: %f\n",i);
return 0;
}
