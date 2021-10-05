[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 10`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Bubble Sort

### 1. Objetivos :dart:

- Ejemplificar la definición de un algoritmo de ordenamiento.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

Implementación de Bubble Sort.

**[`bubble_sort.c`](codigos/bubble_sort.c)**

```c
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
```
   
[`Volver`](../README.md)
