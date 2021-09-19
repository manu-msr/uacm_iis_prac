#include <stdio.h>

void f(int*);

int main (void)
{
   int a = 3;
   f(&a);
   printf("%d\n", a);

   return 0;
}

void f(int* x)
{
   *x = 4;
}