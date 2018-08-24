/*creado el 22 de Agosto del 2018 por Daniel Ramírez Romo*/


#include <stdio.h>
#include <math.h>
int main()
{
 int opcion;
 int temperatura;
 int coordenadas;
 float c, k, f;     //variables para la opcion de temperaturas.
 float x, y, r, o; //variables para la opcion de coordenadas. 

 printf("Teclea una opción\n");
 printf("(1) para convertir temperaturas\n");
 printf("(2) para converitr coordenadas\n");
 
 scanf("%i",&opcion);
 switch(opcion)
 {
   case 1:
          printf("Elegiste la opción para convertir temperaturas\n");
          printf("Teclea 1 para convertir °C a °F y °K\n");
          printf("Teclea 2 para convertir °F a °C y °K\n");
          printf("Teclea 3 para convertir °K a °C y °F\n");
          scanf("%f",&temperatura);
                 switch(temperatura){
          case 1:
          printf("Introduce tu temperatura en °C\n");
          scanf("%f",&c);
          f=(c*1.8)+32;
          k=c+273;
          printf("temperatura en °F:%f\n"f);	
          printf("temperatura en °K:%f\n"k);
          break;
          case 2:
          printf("Introduce tu temperatura en °F\n");
          scanf("%f",&f);
          c=(f-32)/1.8;
          k=c+273;
          printf("temperatura en °C:%f\n"c);	
          printf("temperatura en °K:%f\n"k);
          break;
          case 3:
          printf("Introduce tu temperatura en °K\n");
          scanf("%f",&k);
          c=k-273;
          f=(c*1.8)+32;
          printf("temperatura en °C:%f\n"c);	
          printf("temperatura en °F:%f\n"f);
          break;
          default: printf("Error, acción inválida\n");
          return 0;
                                  }
break;
   
case 2:
           printf("Elegiste la opcion para convertir coordenadas\n");
           printf("teclea 1 para convertir coordenadas cartesianas a polares\n");
           printf("teclea 2 para convertir coordenadas cartesianas a polares\n");
           scanf("%i",&coordenadas);
                  switch(coordenadas){
           case 1:
           printf("Elegiste la opcion para convertir coordenadas cartesianas a polares\n");
           printf("Introduce el valor de x\n");
           scanf("%f",&x);
           printf("Introduce el valor de y\n");
           scanf("%f",&y);
           r=sqrt(pow(x,2)+pow(y,2));
           o=atan(y/x);
           printf("tus coordenadas polares son %f,%f\n"r,o);
           break;
           case 2:
           printf("Elegiste la opcion para convertir coordenadas polares a cartesianas\n");
           printf("Introduce el valor de r\n");
           scanf("%f",&r);
           printf("Introduce el valor de o\n");
           scanf("%f",&o);
           x=r*cos(o);
           y=r*sin(o);
           printf("tus coordenadas polares son %f,%f\n"x,y);
           break;
           default:printf("Error, acción inválida\n");
           return 0;
                                      }


   default:
           printf("Opción invalida");
           break;
 }
        
return 0;
}

 


