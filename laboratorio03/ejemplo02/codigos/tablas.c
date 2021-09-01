#include <stdio.h>

int main(void)
{
   // Declaración de variables.
   int n;

   // Pedir datos al usuario.
   printf("Introduce un número: ");
   scanf("%d", &n);

   int i = 0;

   // Mostrar la tabla de multiplicar.
   do
   {
      printf("%d x %d = %d\n", n, i, n*i);
      i++;
   } while (i <= 10);

   return 0;
}
