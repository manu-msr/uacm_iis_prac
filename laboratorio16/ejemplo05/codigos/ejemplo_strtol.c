/*******************************************************************************
 * Programa:      Ejemplo 5, Laboratorio 16                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strtol                        *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Inicializa la cadena. */
    const char *cadena = "-1234567abc";

    /* Resto de la cadena. */
    char *restoAp; 

    /* Conversión. */
    long x;

    x = strtol(cadena, &restoAp, 0);

    printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
        "La cadena original es ", cadena,
        "El valor convertido es ", x,
        "El resto de la cadena es ", restoAp,
        "El valor convertido más 567 es ", x + 567);

    return 0;
}