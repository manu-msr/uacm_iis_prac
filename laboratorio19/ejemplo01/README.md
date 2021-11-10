[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 19`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Función `strerror`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strerror`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strerror.c`](codigos/ejemplo_strerror.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 19                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strerror                      *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("%s\n", strerror(2));
    return 0;
}
```

**[`codigos_error.c`](codigos/codigos_error.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 19                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que muestrta los mensajes de error del sistema.                    *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{

    puts("Errores de mensaje del sistema: ");
    for(int i = 1; i < 134; i++)
        printf("%3d: %s\n",i,strerror(i));

    return 0;
}
```
 
[`Volver`](../README.md)
