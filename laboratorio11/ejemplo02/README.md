[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 11`](../README.md) > `Ejemplo 2`

## Ejemplo 2: Funciones sobre arreglos (de nuevo...)

### 1. Objetivos :dart:

- Mostrar una nueva forma de obtener el tamaño de un arreglo que nos permita programa de una forma lo más general posible.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

En el **[Laboratorio 6](../laboratorio06/README.md)** definimos un archivo `funciones_arreglos` que incluía funciones para:

- Leer un arreglo.
- Imprimir un arreglo.
- Inicializar un arreglo.
- Buscar un elemento en un arreglo.

**[`funciones_arreglos.c`](codigos/funciones_arreglos.c)**

```c
#include <stdio.h>

void leerArreglo(int[], int);
void imprimirArreglo(int[], int);
void inicializarArreglo(int[], int, int);
int buscarArreglo(int[], int, int);

int main(void)
{
   int arreglo1[10];
   int arreglo2[10];

   leerArreglo(arreglo1,10);
   imprimirArreglo(arreglo1,10);
   inicializarArreglo(arreglo2,10,7);
   imprimirArreglo(arreglo2,10);

   int b = buscarArreglo(arreglo1,10,20);
   int c = buscarArreglo(arreglo2,10,8);

   if (b != -1)
      printf("El número 20 se encuentra en el arreglo 1\n");
   else
      printf("El número 20 no se encuentra en el arreglo 1\n");

   if (c != -1)
      printf("El número 8 se encuentra en el arreglo 2\n");
   else
      printf("El número 8 no se encuentra en el arreglo 2\n");

   return 0;
}

void leerArreglo(int arreglo[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("Introduce el elemento %d: ", i);
      scanf("%d", &arreglo[i]);
   }
}

void imprimirArreglo(int arreglo[], int n)
{
   for (int i = 0; i < n; i++)
      printf("%d ", arreglo[i]);
   printf("\n");
}

void inicializarArreglo(int arreglo[], int n, int v)
{
    for(int i = 0; i < n; i++)
    {
        arreglo[i] = v;
    }
}

int buscarArreglo(int arreglo[], int n, int v)
{
    for(int i = 0; i < n; i++)
    {
        if (arreglo[i] == v)
            return i;
    }
    return -1;
}
```

Podemos usar el operador `sizeof` para dejar de depender del parámetro `int n` que acompaña a cada función que representa el tamaño del arreglo. Por ejemplo, las funciones `leerArreglo` e `imprimirArreglo` se modifican como sigue:

```c
void leerArreglo(int arreglo[])
{
   int n = sizeof(arreglo) / sizeof(arreglo[0]);

   for (int i = 0; i < n; i++)
   {
      printf("Introduce el elemento %d: ", i);
      scanf("%d", &arreglo[i]);
   }
}

void imprimirArreglo(int arreglo[])
{
   int n = sizeof(arreglo) / sizeof(arreglo[0]);

   for (int i = 0; i < n; i++)
      printf("%d ", arreglo[i]);
   printf("\n");
}
```

Al ejecutar y compilar el programa, notaremos que no funciona como esperábamos. Esto ocurre debido a la forma en que __C__ maneja las funciones que reciben arreglos, recordemos que este paso se realiza por referencia, se forma tal que nuestras funciones en realidad se ven así:

```c
void leerArreglo(int *arreglo)
{
   ...
}
```

al ser un apuntador, lo único que hace, en este caso, es apuntar al primer elemento del arreglo. De forma tal que **no estamos obteniendo el tamaño del arreglo realmente**.

Para modificar esto, lo haremos en su lugar, desde la creación del arreglo:

```c
int main(void)
{
   int t;
   printf("Introduce el tamaño de los arreglos: ");
   scanf("%d",&t);

   int arreglo1[t];
   int arreglo2[t];

   // Podemos usar t para mandar a llamar a nuestras funciones
   // o usar sizeof.

   int n = sizeof(arreglo1) / sizeof(arreglo1[0]);

   leerArreglo(arreglo1,n);
   imprimirArreglo(arreglo1,n);
   inicializarArreglo(arreglo2,n,7);
   imprimirArreglo(arreglo2,n);

   int b = buscarArreglo(arreglo1,n,20);
   int c = buscarArreglo(arreglo2,n,8);

   if (b != -1)
      printf("El número 20 se encuentra en el arreglo 1\n");
   else
      printf("El número 20 no se encuentra en el arreglo 1\n");

   if (c != -1)
      printf("El número 8 se encuentra en el arreglo 2\n");
   else
      printf("El número 8 no se encuentra en el arreglo 2\n");

   return 0;
}
```
   
[`Volver`](../README.md)
