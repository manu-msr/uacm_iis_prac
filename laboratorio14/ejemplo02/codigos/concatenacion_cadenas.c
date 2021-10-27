/*******************************************************************************
 * Programa:      Ejemplo 2, Laboratorio 14                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         27 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica la concatenación de cadenas.                       *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main (void)
{
    char s1[20] = "Feliz ";
    char s2[] = "Año Nuevo";
    char s3[40] -= "";

    printf("s1 = %s\ns2 = %s\n", s1, s2);

    // Concatena s2 a s1
    printf("strcat(s1,s2) = %s\n", strcat(s1,s2));

    // Concatena los primeros 6 caracteres de s1 a s3. Coloca \0 después del
    // último carácter.
    printf("strncat(s3,s1,6) = %s\n", strncat(s3,s1,6));

    // Concatena s1 a s3
    printf("strcat(s3,s1) = %s\n", strcat(s3,s1));

    return 0;

}