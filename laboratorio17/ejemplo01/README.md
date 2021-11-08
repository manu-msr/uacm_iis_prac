[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 17`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Funciones `fgets` y `putchar`

### 1. Objetivos :dart:

- Ejemplificar el uso de las funciones `fgets` y `putchar`

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_fgets_putchar.c`](codigos/ejemplo_fgets_putchar.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de las funciones `fgets` y `putchar`        *
 ******************************************************************************/
#include <stdio.h>

void reversa(const char * const sAp);

int main(void)
{
    char enunciado[80];

    printf("Introduce una línea de texto:\n");

    fgets(enunciado, 80, stdin);

    printf("\nVolteando enunciado: \n");
    reversa(enunciado);
    printf("\n");
    return 0;
}

void reversa(const char * const sAp)
{
    if (sAp[0] == '\0')
        return;
    else
    {
        reversa(&sAp[1]);
        putchar(sAp[0]);
    }

}
```

   
[`Volver`](../README.md)
