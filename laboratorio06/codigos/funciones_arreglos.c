#include <stdio.h>

void leerArreglo(int arreglo[], int n);
void imprimirArreglo(int arreglo[], int n);
void inicializarArreglo(int arreglo[], int n, int valor);
int buscarArreglo(int arreglo[], int n, int elemento);

int main(void)
{
   int arreglo1[10];
   int arreglo2[10];

   leerArreglo(arreglo1,10);
   imprimirArreglo(arreglo1,10);
   inicializarArreglo(arreglo2,10);
   imprimirArreglo(arreglo2,10);

   int b = buscarArreglo(arreglo1,10,1);
   int c = buscarArreglo(arreglo2,10,7);

   if (b != -1)
      printf("El número 1 se encuentra en el arreglo 1\n");
   else
      printf("El número 1 no se encuentra en el arreglo 1\n");

   if (c != -1)
      printf("El número 7 se encuentra en el arreglo 2\n");
   else
      printf("El número 7 no se encuentra en el arreglo 2\n");

   return 0;
}

...