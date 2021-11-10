[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 18`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Función `memcpy`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `memcpy`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_memcpy.c`](codigos/ejemplo_memcpy.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 18                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de las funciones `fgets` y `putchar`        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[18];
    char s2[] = "Copia esta cadena";

    memcpy(s1, s2, 18);
    printf("%s\n\"%s\"\n", "Después de copiar s2 en s1, contiene:", s1);

    return 0;
}
```
 
[`Volver`](../README.md)
