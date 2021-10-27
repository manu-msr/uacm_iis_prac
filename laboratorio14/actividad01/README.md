[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 13`](../README.md) > `Actividad 1`

## Actividad 2: Bubble Sort Ascendente y Descendente

### 1. Objetivos :dart:

- Usar apuntadores a funciones con el fin de lograr dos tipos de ordenamientos.

### 2. Requisitos :clipboard:

- Contar con un compilador para __C__.
- Revisar el **[`Ejemplo 2`](../ejemplo02/README.md)**

### 3. Desarrollo :rocket:

---

Dado el siguiente programa, modificarlo para que pueda ordenar de acuerdo a un criterio ascendente y otro descentente.

**[`bubble_sort.c`](codigos/bubble_sort.c)**

```c
/*******************************************************************************
 * Programa:      Actividad 1, Laboratorio 13                                  *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         18 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que implementa Bubble Sort                                         *
 ******************************************************************************/
#include <stdio.h>

/* Imprime el contenido de un arreglo. */
void imprimir(int [], int);
/* Intercambia dos números por referencia. */
void swap(int*, int*);
/* Ordena un arreglo usando bubble sort. */
void ordena_burbuja(int [], int);

int main(void)
{
   /* Arreglo con los elementos a ordenar.*/
   int a[10] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   printf("Arreglo original:\n");

   imprimir(a, 10);

   ordena_burbuja(a, 10);

   printf("\nArreglo ordenado:\n");

   imprimir(a, 10);

   printf("\n");

   return 0;
}

/* Función que imprime los elementos de un arreglo. 
   Entradas:
   - a Arreglo a imprimir. 
   - n Tamaño del arreglo.
   Salida:
   - void Impresión del arreglo en pantalla. */
void imprimir(int a[], int n)
{
    for (int i = 0; i < n; i++)
      printf("%4d", a[i]);
}

/* Función que ordena los elementos de un arreglo.
   Entradas:
   - a Arreglo a ordenar.
   - n Tamaño del arreglo.
   Salida:
   - void Ordena el arreglo por referencia. */
void ordena_burbuja(int a[], int n)
{
   for (int p = 1; p < n; p++)
      for (int i = 0; i < n-1; i++)
         if (a[i] > a[i+1])
            swap(&a[i],&a[i+1]);
}

/* Función que intercambia el valor de dos números por referencia.
   Entradas:
   - *a Apuntador al primer número.
   - *b Apuntador al segundo número.
   Salida:
   - void Intercambio de los números por referencia. */
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

```

---

[`Volver`](../README.md)
