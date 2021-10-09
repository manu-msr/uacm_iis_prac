[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 11`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Número de Bytes de un arreglo

### 1. Objetivos :dart:

- Mostrar el espacio ocupado por un arreglo en bytes.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

Las variables de tipo `float` son guardadas en 4 bytes, de forma que si declaramos un arreglo de tipo `float` con espacio para 20 valores, el tamaño total del arreglo será 80 bytes.

**[`size_arreglo.c`](codigos/size_arreglo.c)**

```c
#include <stdio.h>

int main(void)
{
   float arreglo[20];

   printf("El número de bytes en el arreglo es %ld\n", sizeof(arreglo));

   return 0;
}
```
```bash
El número de bytes en el arreglo es 80
```
   
[`Volver`](../README.md)
