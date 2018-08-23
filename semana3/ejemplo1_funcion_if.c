/*creado el 23 de Agosto del 2018 por Daniel Ramirez Romo*/
#include<stdio.>
int main()
{
 int a;
 printf("introduce un numero\n");
 scanf("%i",&a);
 /*la funcion "if" es una condicionante*/
 /*La condición en este caso es que el residuo del numero "a" dividido en 2 debe ser igual a 0*/
 if(a%2==0)
 /*si se cumple la condicion entonces se imprime que a es numero par*/
 {
 printf("a=%i es número par\n",a);
 }
 /*si no se cumple la condicion  se  imprime que a es numero impar*/
 else{
 printf("a=%i es impar\n",a);
      }
return 0;
}


