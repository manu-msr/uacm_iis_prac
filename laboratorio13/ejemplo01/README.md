[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 13`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Distintas formas de referenciar los elementos de un arreglo

### 1. Objetivos :dart:

- Mostrar algunas de las distintas formas de acceder a los elementos de un arreglo y entender su significado.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

El siguiente código muestra algunas operaciones sobre apuntadores.

**[`acceso_arreglos.c`](codigos/acceso_arreglos.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 13                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         16 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica las distintas formas de acceder a los elementos de *
 * un arreglo.                                                                 *
 ******************************************************************************/
#include <stdio.h>

/* Módulo principal. */
int main(void)
{
    /* Arreglo con cuatro elementos. */
    int b[] = {10, 20, 30, 40};
    /* Apuntar al arreblo b. */
    int *bAp = b;

    printf("Notación de indexación sobre el arreglo:\n");

    for (int i = 0; i < 4; i++)
        printf("b[%d] = %d\n", i, b[i]);

    printf("\nNotación de desplazamiento sobre el arreglo:\n");

    for (int i = 0; i < 4; i++)
        printf("*(b + %d) = %d\n", i, *(b + i));

    printf("\nNotación de indexación sobre el apuntador:\n");

    for (int i = 0; i < 4; i++)
        printf("bAp[%d] = %d\n", i, bAp[i]);

    printf("\nNotación de desplazamiento sobre el apuntador:\n");

    for (int i = 0; i < 4; i++)
        printf("*(bAp + %d) = %d\n", i, *(bAp + i));

    return 0;
}
```

   
[`Volver`](../README.md)
