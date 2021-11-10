[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 18`](../README.md) > `Ejemplo 2`

## Ejemplo 2: Función `memmove`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `memmove`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_memmove.c`](codigos/ejemplo_memmove.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función memmove                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char x[] = "Hogar dulce hogar";

    printf("%s%s\n", "La cadena en el arreglo x antes de memmove: ", x);

    memmove(x, &x[6], 11);

    printf("%s%s\n", "La cadena en el arreglo x después de memmove: ", x);

    return 0;
}
```

   
[`Volver`](../README.md)
