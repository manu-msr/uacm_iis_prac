/*******************************************************************************
 * Programa:      Ejemplo 4, Laboratorio 16                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strtod                        *
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Inicializa la cadena. */
    const char *cadena = "51.2% es admitido";

    /* Variable que guardará el valor convertido. */
    double d;

    /* Apuntador que guardará el resto. */
    char *cadenaAp;

    d = strtod(cadena, &cadenaAp);

    printf("La cadena \"%s\" fue convertida al\n", cadena);
    printf("valor double %.2f y la cadena restante es: \"%s\"\n", d, cadenaAp);

    return 0;
}