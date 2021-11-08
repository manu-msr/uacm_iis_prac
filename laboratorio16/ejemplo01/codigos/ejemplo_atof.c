/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 16                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función atof                        *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Variable que guardará la conversión. */
    double d;

    d = atof("99.0");

    printf("%s%.3f\n%s%.3f\n", "La cadena \"99.0\" convertida a double es ", d,
        "El valor convertido dividido entre 2 es ", d / 2.0);

    return 0;
}