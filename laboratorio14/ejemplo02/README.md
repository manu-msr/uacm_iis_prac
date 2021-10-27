[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 14`](../README.md) > `Ejemplo 2`

## Ejemplo 2: Manipulación de cadenas

### 1. Objetivos :dart:

- Ejemplificar el uso de funciones que permiten manipular cadenas.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`copia_cadenas.c`](codigos/copia_cadenas.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 14                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         27 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica la copia de cadenas.                               *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main (void)
{
    char x[] = "Feliz cumple";
    char y[25];
    char z[6];

    printf("%s%s\n%s%s\n", "La cadena x es: ", x, "La cadena y es: ", 
        strcpy(y,x));

    // Copia los primeros 5 caracteres de x en z. No copia el caracter nulo.
    strncpy(z,x,5);

    z[6] = '\0';

    printf("La cadena z es %s\n", z);

    return 0;

}
```

**[`concatenacion_cadenas.c`](codigos/concatenacion_cadenas.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 14                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         27 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica la concatenación de cadenas.                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main (void)
{
    char s1[20] = "Feliz ";
    char s2[] = "Año Nuevo";
    char s3[40] -= "";

    printf("s1 = %s\ns2 = %s\n", s1, s2);

    // Concatena s2 a s1
    printf("strcat(s1,s2) = %s\n", strcat(s1,s2));

    // Concatena los primeros 6 caracteres de s1 a s3. Coloca \0 después del
    // último carácter.
    printf("strncat(s3,s1,6) = %s\n", strncat(s3,s1,6));

    // Concatena s1 a s3
    printf("strcat(s3,s1) = %s\n", strcat(s3,s1));

    return 0;

}
```

   
[`Volver`](../README.md)
