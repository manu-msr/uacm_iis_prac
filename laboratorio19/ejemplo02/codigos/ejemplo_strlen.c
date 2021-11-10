/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strlen                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *cadena1 = "abcdefghijklmnopqrstuvwxyz";
    const char *cadena2 = "cuatro";
    const char *cadena3 = "Ciudad de México";

    printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
        "La longitud de ", cadena1, " es ", strlen(cadena1),
        "La longitud de ", cadena2, " es ", strlen(cadena2),
        "La longitud de ", cadena3, " es ", strlen(cadena3));

    return 0;
}
