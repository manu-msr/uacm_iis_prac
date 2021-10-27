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