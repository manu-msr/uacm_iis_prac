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
