/*******************************************************************************
 * Programa:      Ejemplo 4, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función memchr                        *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *s = "Esta es una cadena";

    char *s2 = memchr(s,'d', 18);

    printf("%s\'%c\'%s\"%s\"\n",
        "El resto de s después de que el carácter ", 'd', " sea encontrado es ",
        s2);

    return 0;
}
