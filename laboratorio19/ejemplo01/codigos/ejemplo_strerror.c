/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 19                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strerror                      *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("%s\n", strerror(2));
    return 0;
}