[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 15`](../README.md) > `Ejemplo 3`

## Ejemplo 3: La Función `strpbrk`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strpbrk`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strpbrk.c`](codigos/ejemplo_strpbrk.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 3, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strpbrk                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "Esta es una prueba";
    const char *cadena2 = "cuidado";

    printf("%s\"%s\"\n\'%c\'%s\n\"%s\"\n", "De los caracteres en ", cadena2,
        *strpbrk(cadena1, cadena2), " aparecen al inicio en ", cadena1);

    return 0;
}
```

   
[`Volver`](../README.md)
