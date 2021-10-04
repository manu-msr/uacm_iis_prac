#include <stdio.h>

int main(void)
{
   
   int a; // a es un entero
   int *aAp; // aAp es un apuntador a un entero

   a = 7;
   aAp = &a; // aAp se asigna con la dirección de a

   printf("La dirección de a es %p\nEl valor de aAp es %p", &a, aAp);

   printf("\n\nEl valor de a es %d\nEl valor de *aAp es %d", a, *aAp);

   printf("\n\nLos operadores se complementan uno al otro...\n");
   printf("&*aAp = %p\n*&aAp = %p\n", &*aAp, *&aAp);

   return 0;
}
