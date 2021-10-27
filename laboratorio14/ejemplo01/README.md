[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 14`](../README.md) > `Ejemplo 1`

## Ejemplo 1: El operador `const`

### 1. Objetivos :dart:

- Mostrar cómo se usa el operador `const` para prevenir la modificación de un arreglo.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`operador_const.c`](codigos/operador_const.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 14                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         27 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso del operador const.                         *
 ******************************************************************************/
#include <stdio.h>

/* Prototipo de función que intenta modificar un arreglo. */
void intentaModificarArreglo(const int[]);

/* Función principal. */
int main (void)
{
    int a[] = {10,20,30};
    intentaModificarArreglo(a);

    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}

/* Función que intenta modificar un arreglo. El arreglo a es constante, de forma
   qué no puede modificarse.
   Entrada: a - Arreglo.
   Salida: void - Intenta modificar el arreglo. */
void intentaModificarArreglo(const int a[])
{
    a[0] /= 2;
    a[1] /= 2;
    a[2] /= 2;
}
```

   
[`Volver`](../README.md)
