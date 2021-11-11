[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 19`](../README.md) > `Ejemplo 2`

## Ejemplo 2: Función `strlen`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strlen`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strlen.c`](codigos/ejemplo_strlen.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strlen                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *cadena1 = "abcdefghijklmnopqrstuvwxyz";
    const char *cadena2 = "cuatro";
    const char *cadena3 = "Ciudad de México";

    printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
        "La longitud de ", cadena1, " es ", strlen(cadena1),
        "La longitud de ", cadena2, " es ", strlen(cadena2),
        "La longitud de ", cadena3, " es ", strlen(cadena3));

    return 0;
}
```

   
[`Volver`](../README.md)
