[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 11`](../README.md) > `Ejemplo 3`

## Ejemplo 3: Tamaño de los tipos básicos

### 1. Objetivos :dart:

- Mostrar el tamaño de los tipos básicos por medio del operador `sizeof`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

El siguiente código calcula y muestra el tamaño de distintos identificadores y tipos.

**[`sizeof_tipos.c`](codigos/sizeof_tipos.c)**

```c
#include <stdio.h>

int main(void)
{
   char c;
   short s;
   int i;
   long l;
   float f;
   double d;
   long double ld;
   int arreglo[20];
   int *ap = arreglo;

   printf("      sizeof c = %ld\tsizeof(char) = %ld"
          "\n      sizeof s = %ld\tsizeof(short) = %ld"
          "\n      sizeof i = %ld\tsizeof(int) = %ld"
          "\n      sizeof l = %ld\tsizeof(long) = %ld"
          "\n      sizeof f = %ld\tsizeof(float) = %ld"
          "\n      sizeof d = %ld\tsizeof(double) = %ld"
          "\n     sizeof ld = %ld\tsizeof(long double) = %ld"
          "\nsizeof arreglo = %ld"
          "\n     sizeof ap = %ld\n",
          sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i,
          sizeof(int), sizeof l, sizeof(long), sizeof f,
          sizeof(float), sizeof d, sizeof(double), sizeof ld,
          sizeof(long double), sizeof arreglo, sizeof ap);

   return 0;
}
```
   
[`Volver`](../README.md)
