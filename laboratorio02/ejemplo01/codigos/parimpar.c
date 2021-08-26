#include <stdio.h>

int main(void)
{
   // Declaración de variables.
   int n;

   // Pedir datos al usuario.
   printf("Introduce un número: ");
   scanf("%d",&n);

   // Toma de decisiones y resultados.
   if (n % 2 == 0)
      printf("\nEl número es par.");
   else
      printf("\nEl número es impar.");

   return 0;
}
