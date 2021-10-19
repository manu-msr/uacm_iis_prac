/*******************************************************************************
 * Programa:      Ejemplo 3, Laboratorio 13                                    *
 * Desarrollador: Manuel Soto Romero                                           *
 * Fecha:         18 / 10 / 2021                                               *
 * Descripción:                                                                *
 * Programa que ejemplifica el uso apuntadores en la implementación de menús.  *
 ******************************************************************************/
#include <stdio.h>

/* Mostrar el menú de opciones al usuario. */
void muestraMenu();
/* Sumar dos números pedidos al usuario. */
int suma();
/* Restar dos números pedidos al usuario. */
int resta();

int main(void)
{
    muestraMenu();
    return 0;

}

/* Función que muestra un menú de opciones y manda llamar a la función 
   correspondiente.
   Entradas:
   - void
   Salida:
   - void - Imprime el menú, pide una opción y la procesa. */
void muestraMenu()
{
    int (*f[2])() = {suma, resta};
    int o;
    printf("Introduce una opción: \n");
    printf("[1] Suma.\n");
    printf("[2] Resta.\n");
    printf("Opción: ");
    scanf("%d", &o);

    printf("\n");
    int resultado = (*f[o-1])();

    printf("\nEl resultado es: %d\n", resultado);    
}

/* Función que pide dos números al usuario y los suma.
   - void
   Salida:
   - int - Suma de los números dados por el usuario. */
int suma()
{
    int n, m;
    printf("Introduce un número: ");
    scanf("%d", &n);
    printf("Introduce otro número: ");
    scanf("%d", &m);

    return n + m;
}

/* Función que pide dos números al usuario y los resta.
   - void
   Salida:
   - int - Resta de los números dados por el usuario. */
int resta()
{
    int n, m;

    printf("Introduce un número: ");
    scanf("%d", &n);
    printf("Introduce otro número: ");
    scanf("%d", &m);

    return n - m;
}
