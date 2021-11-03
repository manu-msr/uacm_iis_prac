/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strchr                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena = "Esta es una prueba";
    char caracter1 = 'a';
    char caracter2 = 'z';

    // Si el caracter1 es encontrado en la cadena. */
    if (strchr(cadena, caracter1) != NULL)
        printf("\'%c\' fue encontrado en \"%s\".\n", caracter1, cadena);
    else
        printf("\'%c\' no fue encontrado en \"%s\".\n", caracter1, cadena);

    // si el caracter2 es encontrado en la cadena.
    if (strchr(cadena, caracter2) != NULL)
        printf("\'%c\' fue encontrado en \"%s\".\n", caracter2, cadena);
    else
        printf("\'%c\' no fue encontrado en \"%s\".\n", caracter2, cadena);

    return 0;
}