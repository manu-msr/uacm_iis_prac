#include <stdio.h>

int main(void)
{
   
   char nombre[15], apellidos[30];

   printf("Introduce tu nombre: ");
   scanf("%s", nombre);

   printf("Introduce tus apellidos: ");
   scanf(" %[^\n]", apellidos);

   printf("Usted es %s %s\n", nombre, apellidos);

   return 0;
}