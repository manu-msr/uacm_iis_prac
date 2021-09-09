#include <stdio.h>

int main(void)
{
   int tabla[10];

   for (int i = 0; i < 10; i++)
      tabla[i] = 2*i;

   printf("%s%13s\n", "Elemento", "Valor");

   for (int i = 0; i < 10; i++)
      printf("%8d%13d\n", i, tabla[i]);

   return 0;
}