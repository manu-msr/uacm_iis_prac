#include <stdio.h>

int main(void)
{
   // Declaración de variables.
   int e;

   // Pedir datos al usuario.
   printf("Introduce tu edad: ");
   scanf("%d", &e);

   if (e >= 18)
      printf("\nPuede votar");
   if (e < 18)
      printf("\nNo puede votar");

   return 0;
}
