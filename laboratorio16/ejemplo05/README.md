[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 16`](../README.md) > `Ejemplo 5`

## Ejemplo 5: La Función `strtol`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strtol`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strtol.c`](codigos/ejemplo_strtol.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 5, Laboratorio 16                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strtol                        *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Inicializa la cadena. */
    const char *cadena = "-1234567abc";

    /* Resto de la cadena. */
    char *restoAp; 

    /* Conversión. */
    long x;

    x = strtol(cadena, &restoAp, 0);

    printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
        "La cadena original es ", cadena,
        "El valor convertido es ", x,
        "El resto de la cadena es ", restoAp,
        "El valor convertido más 567 es ", x + 567);

    return 0;
}
```

   
[`Volver`](../README.md)
