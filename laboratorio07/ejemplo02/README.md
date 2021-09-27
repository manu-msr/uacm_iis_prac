[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 7`](../README.md) > `Ejemplo 2`

## Ejemplo: Diseño modular con matrices

### 1. Objetivos :dart:

- Ejemplificar el uso de matrices.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

El siguiente programa define una biblioteca para realizar operaciones entre matrices. Observa la definición de prototipos y funciones.

**[`matrices.c`](codigos/matrices.c)**

```c
#include <stdio.h>

/* Definición de prototipos. */
void inicializarMatriz(int[2][2]);
void suma(int[2][2], int[2][2]);
void producto(int[2][2], int[2][2]);
void productoEscalar(int, int[2][2]);
void imprimir(int[2][2]);
int mostrarMenu();


int main(void)
{
   int o = 0; // Variable de control.

   do
   {
      // Variables requeridas para el programa.
      int matriz1[2][2];
      int matriz2[2][2];
      int escalar;
      o = mostrarMenu();

      switch(o)
      {
         case 1: // Suma
            printf("\nMatriz 1\n");
            inicializarMatriz(matriz1);
            printf("\n");
            imprimir(matriz1);

            printf("\nMatriz 2\n");
            inicializarMatriz(matriz2);
            printf("\n");
            imprimir(matriz2);

            printf("\nSuma:\n\n");
            suma(matriz1,matriz2);
            break;
         case 2: // Producto
            printf("\nMatriz 1\n");
            inicializarMatriz(matriz1);
            printf("\n");
            imprimir(matriz1);

            printf("\nMatriz 2\n");
            inicializarMatriz(matriz2);
            printf("\n");
            imprimir(matriz2);

            printf("\nProducto:\n\n");
            producto(matriz1,matriz2);
            break;
         case 3: // Producto x escalar
            printf("\nMatriz 1\n");
            inicializarMatriz(matriz1);
            printf("\n");
            imprimir(matriz1);

            printf("Introduce un escalar: ");
            scanf("%d",&escalar);

            printf("\nProducto x escalar:\n\n");

            productoEscalar(escalar,matriz1);
            break;
         case 4: // Salir
            printf("\nSaliendo...\n");
            break;
         default: // Caso contrario
            printf("\nOpción incorrecta. Vuelve a intentarlo.\n");
            break;
      } 
   } while (o != 4);

   return 0;
}

/* Función encargada de mostrar el menú de opciones al usuario. 
   Regresa un entero indicando la opción dada por el usuario. */
int mostrarMenu()
{
   printf("Elige una operación.\n");
   printf("[1] Suma.\n");
   printf("[2] Producto.\n");
   printf("[3] Producto x escalar.\n");
   printf("[4] Salir...\n");
   printf("Opción: ");
   int o;
   scanf("%d",&o);
   return o;
}

/* Función encargada de leer los valores que se almacenarán en la matriz.
   Pide los usuarios del teclado. */
void inicializarMatriz(int m[2][2])
{
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         printf("Introduce el valor de la celda (%d,%d): ",i,j);
         scanf("%d",&m[i][j]);
      }
   }
}

/* Función que suma los elementos de dos matrices. */
void suma(int m[2][2], int n[2][2])
{
   int s[2][2];
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         s[i][j] = m[i][j] + n[i][j];
      }
   }
   imprimir(s);
}

/* Función que multiplica los elementos de dos matrices. */
void producto(int m[2][2], int n[2][2])
{
   printf("Foo");

}

/* Función que multiplica una matriz por un escalar. */
void productoEscalar(int k, int m[2][2])
{
   printf("Foo");

}

/* Función que imprime los elementos de una matriz. */
void imprimir(int m[2][2])
{
   printf("⎛%2d %2d⎞\n", m[0][0],m[0][1]);
   printf("⎝%2d %2d⎠\n\n", m[1][0],m[1][1]);
}

```
   
[`Volver`](../README.md)
