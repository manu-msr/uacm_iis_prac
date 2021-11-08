[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 17`](../README.md) > `Ejemplo 2`

## Ejemplo 2: Funciones `getchar` y `puts`

### 1. Objetivos :dart:

- Ejemplificar el uso de las funciones `getchar` y `puts`

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_getchar_puts.c`](codigos/ejemplo_getchar_puts.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de las funciones `getchar` y `puts`        *
 ******************************************************************************/
#include <stdio.h>

int main(void)
{
    char c;
    char enunciado[80];
    int i = 0;

    puts("Introduce una línea de texto: ");

    while((c = getchar()) != '\n')
    {
        enunciado[i++] = c;
    }

    enunciado[i] = '\0';

    puts("\nLa línea ingresada es: ");
    puts(enunciado);

    return 0;
}
```

   
[`Volver`](../README.md)
