#include <stdio.h>

int main(void)
{
   char c;
   short s;
   int i;
   long l;
   float f;
   double d;
   long double ld;
   int arreglo[20];
   int *ap = arreglo;

   printf("      sizeof c = %ld\tsizeof(char) = %ld"
          "\n      sizeof s = %ld\tsizeof(short) = %ld"
          "\n      sizeof i = %ld\tsizeof(int) = %ld"
          "\n      sizeof l = %ld\tsizeof(long) = %ld"
          "\n      sizeof f = %ld\tsizeof(float) = %ld"
          "\n      sizeof d = %ld\tsizeof(double) = %ld"
          "\n     sizeof ld = %ld\tsizeof(long double) = %ld"
          "\nsizeof arreglo = %ld"
          "\n     sizeof ap = %ld\n",
          sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i,
          sizeof(int), sizeof l, sizeof(long), sizeof f,
          sizeof(float), sizeof d, sizeof(double), sizeof ld,
          sizeof(long double), sizeof arreglo, sizeof ap);

   return 0;
}