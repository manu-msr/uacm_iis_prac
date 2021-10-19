[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 13`](../README.md) > `Ejemplo 2`

## Ejemplo 2: Mapeos y filtros

### 1. Objetivos :dart:

- Hacer uso de apuntadores a funciones con el fin de aplicar una función a cada elemento de un arreglo o filtrar los elementos del mismo por medio de funciones sin necesidad de implementar una función distinta cada vez.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

- El siguiente código muestra la implementación de dos funciones sobre arreglos. 

- La primera función suma uno a cada elemento del mismo. La segunda filtra aquellos números que sean negativos.

**[`mapeos_filtros.c`](codigos/mapeos_filtros.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 13                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         18 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de mapeos y filtros sobre arreglos.         *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Sumar un uno a cada elemento de un arreglo. */
void sumaUno(int[], int);
/* Filtrar los elementos pares en un arreglo. */
void filtraPares(int[], int);
/* Llenar un arreglo con números aleatorios. */
void llenaArreglo(int[], int);
/* Mostrar los elementos de un arreglo. */
void muestraArreglo(int[],int);

int main(void)
{
    /* Arreglo con 10 elementos para mostrar los ejemplos. */
    int a[10];
    llenaArreglo(a,10);

    printf("Arreglo inicial:\n");
    muestraArreglo(a,10);

    printf("\nArreglo suma uno:\n");
    sumaUno(a,10);
    muestraArreglo(a,10);

    printf("\nArreglo filtra pares:\n");
    filtraPares(a,10);

}

/* Función que suma uno a cada elemento del arreglo.
   Entradas:
   - a - Arreglo a modificar.
   - n - Tamaño del Arreglo.
   Salida:
   - void - Modifica por referencia el arreglo. */
void sumaUno(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] += 1;
}

/* Función que filtra aquellos elementos que sean pares en un arreglo.
   Entradas:
   - a - Arreglo a filtrar.
   - n - Tamaño del Arreglo.
   Salida:
   - void - Imprime en pantalla los números pares. */
void filtraPares(int a[], int n)
{
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    printf("\n");
}

/* Función que llena un arreglo con números aleatorios.
   Entradas:
   - a - Arreglo a llenar.
   - n - Tamaño del Arreglo.
   Salida:
   - void - Llena el arreglo por referencia. */
void llenaArreglo(int a[], int n)
{
    srand(time(0)); // Para generar números aleatorios.
    for (int i = 0; i < n; i++)
        a[i] = (rand() % 11);
}

/* Función que muestra los elementos de un arreglo.
   Entradas:
   - a - Arreglo a mostrar.
   - n - Tamaño del Arreglo.
   Salida:
   - void - Imprime en pantalla los elementos del arreglo. */
void muestraArreglo(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
```

- **Pregunta:** ¿Qué cambios tengo que hacer si ahora debo sumar 5 o filtrar los números impares? ¿Cambia la estructura de la función?

- Podemos utilizar apuntadores para lograr *generalizar* el programa. **Recuerda:** Un programador o programadora siempre generaliza lo más que puede.

**[`mapeos_filtros2.c`](codigos/mapeos_filtros2.c)**

```c
/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 13                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         18 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de mapeos y filtros sobre arreglos usando   *
 * apuntadores.                                                                *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Aplica una función a cada elementos de un arreglo. */
void mapeo(int[], int, int (*)(int));
/* Suma uno a un número entero. */
int suma1(int);
/* Eleva al cuadrado un número entero. */
int elevarCuadrado(int);
/* Filtrar los elementos de un arreglo con respecto a una predicado. */
void filtra(int[], int, int (*)(int));
/* Indica si un número es par. */
int esPar(int);
/* Indica si un número es impar. */
int esImpar(int);
/* Llenar un arreglo con números aleatorios. */
void llenaArreglo(int[], int);
/* Mostrar los elementos de un arreglo. */
void muestraArreglo(int[],int);

int main(void)
{
    /* Arreglo con 10 elementos para mostrar los ejemplos. */
    int a[10];
    llenaArreglo(a,10);

    printf("Arreglo inicial:\n");
    muestraArreglo(a,10);

    printf("\nArreglo suma uno:\n");
    mapeo(a,10,suma1);
    muestraArreglo(a,10);

    printf("\nArreglo elevar cuadrado:\n");
    mapeo(a,10,elevarCuadrado);
    muestraArreglo(a,10);

    printf("\nArreglo filtra pares:\n");
    filtra(a,10, esPar);

    printf("\nArreglo filtra impares:\n");
    filtra(a,10, esImpar);

}

/* Función que aplica una función a cada elemento de un arreglo.
   Entradas:
   - a - Arreglo a modificar.
   - n - Tamaño del Arreglo.
   - funcion - Función a aplicar.
   Salida:
   - void - Modifica por referencia el arreglo. */
void mapeo(int a[], int n, int(*funcion)(int a))
{
    for (int i = 0; i < n; i++)
        a[i] = (*funcion)(a[i]);
}

/* Función que suma uno a un número entero.
   Entradas:
   - a - Número a sumar.
   Salida:
   - int - Número sumado. */
int suma1(int a)
{
    return a+1;
}

/* Función que eleva al cuadrado un número entero.
   Entrada:
   - a - Número a elevar al cuadrado.
   Salida:
   - int - Número elevado al cuadrado. */
int elevarCuadrado(int a)
{
    return a*a;
}

/* Función que filtra aquellos elementos que cumplan con la condición recibida
   como argumento.
   Entradas:
   - a - Arreglo a filtrar.
   - n - Tamaño del Arreglo.
   - predicado - Función para filtrar.
   Salida:
   - void - Imprime en pantalla los números que cumplan con la propiedad. */
void filtra(int a[], int n, int(*predicado)(int a))
{
    for (int i = 0; i < n; i++)
        if ((*predicado)(a[i]))
            printf("%d ", a[i]);
    printf("\n");
}

/* Función que indica si un número es par.
   Entrada:
   - n - Entero a verificar.
   Salida:
   - int - 1 si es par, 0 en otro caso. */
int esPar(int n)
{
    return n % 2 == 0;
}

/* Función que indica si un número es impar.
   Entrada:
   - n - Entero a verificar.
   Salida:
   - int - 1 si es par, 0 en otro caso. */
int esImpar(int n)
{
    return n % 2 != 0;
}

/* Función que llena un arreglo con números aleatorios.
   Entradas:
   - a - Arreglo a llenar.
   - n - Tamaño del Arreglo.
   Salida:
   - void - Llena el arreglo por referencia. */
void llenaArreglo(int a[], int n)
{
    srand(time(0)); // Para generar números aleatorios.
    for (int i = 0; i < n; i++)
        a[i] = (rand() % 11);
}

/* Función que muestra los elementos de un arreglo.
   Entradas:
   - a - Arreglo a mostrar.
   - n - Tamaño del Arreglo.
   Salida:
   - void - Imprime en pantalla los elementos del arreglo. */
void muestraArreglo(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

```

   
[`Volver`](../README.md)
