#include <stdio.h>

int main(void)
{
   // Declaración de variables.
   int c;

   // Pedir datos al usuario.
   printf("Introduce una Calificación: ");
   scanf("%d", &c);

   // Toma de decisiones y resultados.
   if (c >= 7)
      printf("\nAprobado");
   else if (c == 6 || c == 5)
      printf("\nReprobado");
   else
      printf("\nNP");

   return 0;
}
