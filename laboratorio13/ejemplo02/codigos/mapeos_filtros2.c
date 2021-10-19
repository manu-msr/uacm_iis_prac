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
