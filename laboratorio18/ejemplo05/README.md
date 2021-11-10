[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 18`](../README.md) > `Ejemplo 5`

## Ejemplo 5: La Función `memset`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `memset`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_memset.c`](codigos/ejemplo_memset.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 5, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función memset                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char cadena1[15] = "BBBBBBBBBBBBBB";
    char *cadena2 = memset(cadena1,'b',7);

    printf("cadena1 = %s\n", cadena1);
    printf("cadena1 después de memset = %s\n", cadena2);

    return 0;
}
```


   
[`Volver`](../README.md)
