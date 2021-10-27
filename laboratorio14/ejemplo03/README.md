[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 14`](../README.md) > `Ejemplo 3`

## Ejemplo 3: Comparación de cadenas

### 1. Objetivos :dart:

- Hacer uso de las distintas funciones para comparar cadenas.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`compara_cadenas.c`](codigos/compara_cadenas.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 3, Laboratorio 14                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         27 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica la comparación de cadenas.                         *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *s1 = "Feliz año nuevo";
    const char *s2 = "Feliz año nuevo";
    const char *s3 = "Felices fiestas";

    printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n","s1 = ", s1, "s2 = ", 
        s2, "s3 = ", s3, "strcmp(s1, s2) = ", strcmp(s1, s2) , 
        "strcmp(s1, s3) = ", strcmp(s1, s3) , "strcmp(s3, s1) = ", 
        strcmp(s3, s1));

    printf("%s%2d\n%s%2d\n%s%2d\n", "strncmp(s1, s3, 6) = ", 
        strncmp(s1, s3, 6) ,"strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7) ,
        "strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7));

    return 0;
}
```
   
[`Volver`](../README.md)
