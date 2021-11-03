[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 15`](../README.md) > `Ejemplo 4`

## Ejemplo 4: La Función `strrchr`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strrchr`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strrchr.c`](codigos/ejemplo_strrchr.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 3, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strrchr                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "Un zoológico tiene muchos animales, incluyendo cebras";
    int c = 'z';

    printf("%s\n%s\'%c\'%s\"%s\"\n", "El resto de la cadena1 empezando por la", 
        "última ocurrencia del caracter ", c, " es: ", strrchr(cadena1,c));

    return 0;
}
```

   
[`Volver`](../README.md)
