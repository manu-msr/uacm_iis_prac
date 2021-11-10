[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 18`](../README.md) > `Ejemplo 4`

## Ejemplo 4: La Función `memchr`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `memchr`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_memchr.c`](codigos/ejemplo_memchr.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 4, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función memchr                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *s = "Esta es una cadena";

    char *s2 = memchr(s,'d', 18);

    printf("%s\'%c\'%s\"%s\"\n",
        "El resto de s después de que el carácter ", 'd', " sea encontrado es ",
        s2);

    return 0;
}
```


   
[`Volver`](../README.md)
