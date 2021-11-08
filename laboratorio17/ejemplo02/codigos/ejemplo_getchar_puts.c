/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de las funciones `getchar` y `puts`        *
 ******************************************************************************/
#include <stdio.h>

int main(void)
{
    char c;
    char enunciado[80];
    int i = 0;

    puts("Introduce una línea de texto: ");

    while((c = getchar()) != '\n')
    {
        enunciado[i++] = c;
    }

    enunciado[i] = '\0';

    puts("\nLa línea ingresada es: ");
    puts(enunciado);

    return 0;
}