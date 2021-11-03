[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 15`](../README.md) > `Ejemplo 5`

## Ejemplo 5: La Función `strspn`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strspn`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strspn.c`](codigos/ejemplo_strspn.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 5, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strspn                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "El valor es 3.14159";
    const char *cadena2 = "aehi lstTuv";

    printf("%s%s\n%s%s\n\n%s\n%s%u\n", "cadena1 = ", cadena1, "cadena2 = ",
        cadena, "La longitud del segmento inicial de la cadena1",
        "conteniendo sólo caracteres de la cadena2 = ", strspn(cadena1,cadena2));

    return 0;
}
```

   
[`Volver`](../README.md)
