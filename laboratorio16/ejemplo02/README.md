[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 16`](../README.md) > `Ejemplo 3`

## Ejemplo 2: La Función `atoi`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `atoi`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_atoi.c`](codigos/ejemplo_atoi.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 16                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función atoi.                         *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Variable que guardará la conversión. */
    int i;

    i = atoi("2593");

    printf("%s%d\n%s%d\n", "La cadena \"2593\" convertida a int es ", i,
        "El valor convertido menos 593 es ", i - 593);

    return 0;
}
```

   
[`Volver`](../README.md)
