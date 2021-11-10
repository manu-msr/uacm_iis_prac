/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función memmove                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char x[] = "Hogar dulce hogar";

    printf("%s%s\n", "La cadena en el arreglo x antes de memmove: ", x);

    memmove(x, &x[6], 11);

    printf("%s%s\n", "La cadena en el arreglo x después de memmove: ", x);

    return 0;
}
