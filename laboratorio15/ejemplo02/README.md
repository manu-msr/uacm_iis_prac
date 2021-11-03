[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 15`](../README.md) > `Ejemplo 3`

## Ejemplo 2: La Función `strcspsn`

### 1. Objetivos :dart:

- Ejemplificar el uso de la función `strchr`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

**[`ejemplo_strchr.c`](codigos/ejemplo_strcspsn.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strcspn                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "El valor es 3.14159";
    const char *cadena2 = "1234567890";

    printf("%s%s\n%s%s\n\n%s\n%s%u\n", "Cadena 1 = ", cadena1, "Cadena 2 = ",
        cadena2, "La longitud del segemento inicial de la cadena1", 
        "que no contiene caracteres de la cadena 2 = ", 
        strcspn(cadena1, cadena2));

    return 0;
}
```

   
[`Volver`](../README.md)
