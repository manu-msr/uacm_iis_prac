/*******************************************************************************
 * Programa:      Ejemplo 1, Laboratorio 19                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         09 / 11 / 2021                                               *
 * Descripción:                                                                *
 * Programa que muestrta los mensajes de error del sistema.                    *
 ******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{

    puts("Errores de mensaje del sistema: ");
    for(int i = 1; i < 134; i++)
        printf("%3d: %s\n",i,strerror(i));

    return 0;
}
