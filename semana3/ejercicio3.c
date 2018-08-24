/*Creado el 23 de Agosto del 2018 por Daniel Ramirez Romo*/
#include<stdio.h>
#include<math.h>
int main()
{
 float x;
 float y;
 float z;
 float r;
 float o;
 float f;
 
 printf("Hola soy un programa que convierte coordenadas cartesianas a esfericas\n");
 printf("dame el valor de la coordenada en x\n");
 scanf("%f",&x);
 printf("dame el valor de la coordenada en y\n");
 scanf("%f",&y);
 printf("dame el valor de la coordenada en z\n");
 scanf("%f",&z);
 printf("tus coordenadas esfericas son:\n");
 r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
 printf("r:%f\n",r);
 o=(acos(z/r));
 printf("theta:%f\n",o);
 f=(atan(y/x));
 printf("phi:%f\n",f);
 printf
 return 0;
}

