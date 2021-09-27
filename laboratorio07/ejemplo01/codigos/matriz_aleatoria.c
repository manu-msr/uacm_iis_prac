#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   srand(time(0)); // Para generar números aleatorios.

   int m, n;

   printf("Introduce el número de renglones: ");
   scanf("%d", &m);
   printf("Introduce el número de columnas: ");
   scanf("%d", &n);

   int matriz[n][m];

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         matriz[i][j] = (rand() % 11);
         printf("%2d ", matriz[i][j]);
      }
      printf("\n");
   }

   return 0;
}