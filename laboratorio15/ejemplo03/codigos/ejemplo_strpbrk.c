/*******************************************************************************
 * Programa:      Ejemplo 3, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strpbrk                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "Esta es una prueba";
    const char *cadena2 = "cuidado";

    printf("%s\"%s\"\n\'%c\'%s\n\"%s\"\n", "De los caracteres en ", cadena2,
        *strpbrk(cadena1, cadena2), " aparecen al principio en ", cadena1);

    return 0;
}