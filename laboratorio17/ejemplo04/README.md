[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 17`](../README.md) > `Ejemplo 4`

## Ejemplo 4: La Función `sscanf`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `sscanf`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_sscanf.c`](codigos/ejemplo_sscanf.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 4, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función sscanf                        *
 ******************************************************************************/
#include <stdio.h>

int main(void)
{
    char s[] = "31298 87.375";
    int x;
    double y;

    sscanf(s, "%d%lf", &x, &y);
    printf("%s\n%s%6d\n%s%8.3f\n",
        "Los valores guardados en s son: ",
        "entero:", x, "double:", y);

    return 0;
}
```

   
[`Volver`](../README.md)
