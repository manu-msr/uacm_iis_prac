/*******************************************************************************
 * Programa:      Ejemplo 6, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strstr                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "abcdefabcdef";
    const char *cadena2 = "def";

    printf("%s%s\n%s%s\n\n%s\n%s%s\n", "cadena1 = ", cadena1, "cadena2 = ",
        cadena2, "El resto de la cadena1 comenzando con la",
        "primera ocurrencia de la cadena2 es: ", strstr(cadena1,cadena2));

    return 0;
}