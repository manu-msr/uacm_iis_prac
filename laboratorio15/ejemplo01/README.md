[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 15`](../README.md) > `Ejemplo 1`

## Ejemplo 1: La Función `strchr`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strchr`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strchr.c`](codigos/ejemplo_strchr.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strchr                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena = "Esta es una prueba";
    char caracter1 = 'a';
    char caracter2 = 'z';

    // Si el caracter1 es encontrado en la cadena. */
    if (strchr(cadena, caracter1) != NULL)
        printf("\'%c\' fue encontrado en \"%s\".\n", caracter1, cadena);
    else
        printf("\'%c\' no fue encontrado en \"%s\".\n", caracter1, cadena);

    // si el caracter2 es encontrado en la cadena.
    if (strchr(cadena, caracter2) != NULL)
        printf("\'%c\' fue encontrado en \"%s\".\n", caracter2, cadena);
    else
        printf("\'%c\' no fue encontrado en \"%s\".\n", caracter2, cadena);

    return 0;
}
```

   
[`Volver`](../README.md)
