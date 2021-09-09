#include <stdio.h>

int main(void)
{
   int tabla[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};

   printf("%s%13s\n", "Elemento", "Valor");

   for (int i = 0; i < 10; i++)
      printf("%8d%13d\n", i, tabla[i]);

   return 0;
}
