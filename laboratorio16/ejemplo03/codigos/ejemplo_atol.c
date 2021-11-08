/*******************************************************************************
 * Programa:      Ejemplo 3, Laboratorio 16                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función atol                          *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Variable que guardará el resultado. */
    long l; 

    l = atol("1000000");

    printf("%s%ld\n%s%ld\n", "La cadena \"1000000\" convertida a long es ", l,
        "El valor convertido dividido entre 2 es ", l / 2);

    return 0;
}
