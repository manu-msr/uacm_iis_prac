#include <stdio.h>

/* Función doble.
   Recibe un entero n y devuelve su elevación al cuadrado.
*/
int doble(int n)
{
   return n * n;
}

int main(void)
{
   for (int i = 0; i < 100; i++)
      printf("%d ", doble(i));

   return 0;
}
