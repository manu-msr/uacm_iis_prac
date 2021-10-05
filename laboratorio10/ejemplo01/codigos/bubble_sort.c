#include <stdio.h>

int main(void)
{
   
   int a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   printf("Arreglo original:\n");

   for (int i = 0; i < 10; i++)
      printf("%4d", a[i]);

   for (int p = 1; p < 10; p++)
   {
      for (int i = 0; i < 9; i++)
      {
         if (a[i] > a[i+1])
         {
            int tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
         }
      }
   }

   printf("\nArreglo ordenado:\n");

   for(int i = 0; i < 10; i++)
   {
      printf("%4d", a[i]);
   }

   printf("\n");

   return 0;
}
