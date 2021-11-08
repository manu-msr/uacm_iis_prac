[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 15`](../README.md) > `Ejemplo 6`

## Ejemplo 6: La Función `strstr`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strstr`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strstr.c`](codigos/ejemplo_strstr.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 6, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strstr                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "abcdefabcdef";
    const char *cadena2 = "def";

    printf("%s%s\n%s%s\n\n%s\n%s%s\n", "cadena1 = ", cadena1, "cadena2 = ",
        cadena2, "El resto de la cadena1 comenzando con la",
        "primera ocurrencia de la cadena2 es: ", strstr(cadena1,cadena2));

    return 0;
}
```

   
[`Volver`](../README.md)
