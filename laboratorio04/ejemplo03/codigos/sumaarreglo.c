#include <stdio.h>

int main(void)
{
   int tabla[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

   int suma = 0;

   for (int i = 0; i < 10; i++)
      suma += tabla[i];

   printf("La suma de los elementos es: %d\n", suma);

   return 0;
}