/*******************************************************************************
 * Programa:      Ejemplo 3, Laboratorio 17                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         08 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso de la función sprintf                       *
 ******************************************************************************/
#include <stdio.h>

int main(void)
{
    char s[80];
    int x;
    double y;

    printf("Introduce un entero y un double:\n");
    scanf("%d%lf", &x, &y);

    sprintf(s, "entero:%6d\ndouble:%8.2f", x, y);

    printf("%s\n%s\n",
        "La cadena formateada y almacenada en s es: ", s);

    return 0;
}