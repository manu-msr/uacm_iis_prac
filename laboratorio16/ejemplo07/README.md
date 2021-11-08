[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 15`](../README.md) > `Ejemplo 7`

## Ejemplo 7: La Función `strtok`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strtok`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strok.c`](codigos/ejemplo_strtok.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 7, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strtok                         *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    char cadena[] = "Esta es una instrucción con 7 lexemas";
    char *lexemaAp;

    printf("%s\n%s\n\n%s\n\n", "La cadena a ser tokenizada es: ", cadena,
        "Los lexemas/tokens son: ");

    lexemaAp = strtok(cadena, " ");

    while(lexemaAp != NULL)
    {
        printf("%s\n", lexemaAp);
        lexemaAp = strtok(NULL, " ");
    }

    return 0;
}
```

   
[`Volver`](../README.md)
