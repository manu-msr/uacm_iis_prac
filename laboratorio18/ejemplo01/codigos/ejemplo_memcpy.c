/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 18                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de las funciones `fgets` y `putchar`        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[18];
    char s2[] = "Copia esta cadena";

    memcpy(s1, s2, 18);
    printf("%s\n\"%s\"\n", "Después de copiar s2 en s1, contiene:", s1);

    return 0;
}
