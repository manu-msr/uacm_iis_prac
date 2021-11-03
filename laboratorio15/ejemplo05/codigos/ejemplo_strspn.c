/*******************************************************************************
 * Programa:      Ejemplo 5, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strspn                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "El valor es 3.14159";
    const char *cadena2 = "aEloe lrsv";

    printf("%s%s\n%s%s\n\n%s\n%s%lu\n", "cadena1 = ", cadena1, "cadena2 = ",
        cadena2, "La longitud del segmento inicial de la cadena1",
        "conteniendo sólo caracteres de la cadena2 = ", strspn(cadena1,cadena2));

    return 0;
}