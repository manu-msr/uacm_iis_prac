[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 7`](../README.md) > `Ejemplo 1`

## Ejemplos: Inicialización Aleatoria de una Matriz

### 1. Objetivos :dart:

- Ejemplificar el uso de matrices.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

El siguiente programa crea una matriz con `m` renglones y `n` columnas (se piden al usuario) y se llena cada elemento de la matriz con números aleatorios entre 0 y 10.

**[`matriz_aleatoria.c`](codigos/matriz_aleatoria.c)**

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   srand(time(0)); // Para generar números aleatorios.

   int m, n;

   printf("Introduce el número de renglones: ");
   scanf("%d", &m);
   printf("Introduce el número de columnas: ");
   scanf("%d", &n);

   int matriz[n][m];

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         matriz[i][j] = (rand() % 11);
         printf("%2d ", matriz[i][j]);
      }
      printf("\n");
   }

   return 0;
}
```
   
[`Volver`](../README.md)
