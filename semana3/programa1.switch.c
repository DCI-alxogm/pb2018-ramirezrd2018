/*creado el 22 de Agosto del 2018 por Daniel Ramírez Romo*/

#include <stdio.h>
int main()
{
 int opcion;
 printf("Teclea una opción\n");
 printf("(1) para convertir temperaturas\n");
 printf("(2) para converitr coordenadas\n");
 
 scanf("%i",&opcion);
 switch(opcion)
 {
   case 1:
          printf("Estas en la opción 1 para convertir temperaturas");
          break;
   case 2:
           printf("Estas en la opción 2 para convertir coordenadas");
          break;
   default:
           printf("Opción invalida");
           break;
 }
        
return 0;
}

 


