/*Creado el 20 de Agosto del 2018 por Daniel Ramirez Romo*/
#include<stdio.h>
int main()
{
float C;
float F;
float K;
printf("Hola, soy un conversor de temperaturas dame una temperatura en grados celsius:\n");
scanf("%f",&C);
K=C+273.5;
printf("La temperatura en °Kelvin es: %f\n",K);
F=(C*1.8)+32;
printf("la temperatura en °Farenheit es: %f\n",F);

return 0;
}



