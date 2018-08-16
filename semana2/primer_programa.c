/*Creado el 15 de Agosto de 2018 por Daniel Ramirez Romo*/
#include<stdio.h>
int main()
{
int edad;
char nombre [20];
printf("Dime tu nombre\n");
scanf("%s",&nombre);
printf("Hola:%s\n",nombre);
printf("Este es el 1er programa del curso\n");
printf("Introduce tu edad: \n");
scanf("%i",&edad);
edad +=10;
printf("\ntu edad en 2028 será: %i\n", edad);
return 0;

}
