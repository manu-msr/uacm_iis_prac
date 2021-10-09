#include <stdio.h>

void leerArreglo(int[], int);
void imprimirArreglo(int[], int);
void inicializarArreglo(int[], int, int);
int buscarArreglo(int[], int, int);

int main(void)
{
   int arreglo1[10];
   int arreglo2[10];

   leerArreglo(arreglo1,10);
   imprimirArreglo(arreglo1,10);
   inicializarArreglo(arreglo2,10,7);
   imprimirArreglo(arreglo2,10);

   int b = buscarArreglo(arreglo1,10,20);
   int c = buscarArreglo(arreglo2,10,8);

   if (b != -1)
      printf("El número 20 se encuentra en el arreglo 1\n");
   else
      printf("El número 20 no se encuentra en el arreglo 1\n");

   if (c != -1)
      printf("El número 8 se encuentra en el arreglo 2\n");
   else
      printf("El número 8 no se encuentra en el arreglo 2\n");

   return 0;
}

void leerArreglo(int arreglo[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("Introduce el elemento %d: ", i);
      scanf("%d", &arreglo[i]);
   }
}

void imprimirArreglo(int arreglo[], int n)
{
   for (int i = 0; i < n; i++)
      printf("%d ", arreglo[i]);
   printf("\n");
}

void inicializarArreglo(int arreglo[], int n, int v)
{
    for(int i = 0; i < n; i++)
    {
        arreglo[i] = v;
    }
}

int buscarArreglo(int arreglo[], int n, int v)
{
    for(int i = 0; i < n; i++)
    {
        if (arreglo[i] == v)
            return i;
    }
    return -1;
}
