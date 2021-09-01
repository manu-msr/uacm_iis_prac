#include <stdio.h>

int main(void)
{
   // Declaración de variables.
   int n;

   // Pedir datos al usuario.
   printf("Introduce un número: ");
   scanf("%d", &n);

   // Restar el número hasta llegar a cero.
   while (n >= 2)
      n -= 2;

   // Mostrar resultados.
   if (n == 0)
      printf("\nEl número es par.\n");
   else
      printf("\nEl número es impar\n");

   return 0;
}
