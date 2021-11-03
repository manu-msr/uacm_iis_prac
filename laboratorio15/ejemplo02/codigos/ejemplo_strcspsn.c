/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 15                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         03 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función strcspn                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

/* Función principal. */
int main (void)
{
    const char *cadena1 = "El valor es 3.14159";
    const char *cadena2 = "1234567890";

    printf("%s%s\n%s%s\n\n%s\n%s%lu\n", "Cadena 1 = ", cadena1, "Cadena 2 = ",
        cadena2, "La longitud del segmento inicial de la cadena1", 
        "que no contiene caracteres de la cadena2 = ", 
        strcspn(cadena1, cadena2));

    return 0;
}
