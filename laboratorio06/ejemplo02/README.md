[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 6`](../README.md) > `Ejemplo 2`

## Ejemplos: Impresión de un arreglo

### 1. Objetivos :dart:

- Ejemplificar el uso de funciones que reciben arreglos.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

El siguiente programa define la función `leeArreglo` que imprime en la salida estándar cada uno de los elementos del arreglo. Los parámetros de entrada de la función son el arreglo y el tamaño del mismo. Se altera el estado del arreglo por referencia.

```c
void imprimirArreglo(int arreglo[], int n)
{
   for (int i = 0; i < n; i++)
      printf("%d ", arreglo[i]);
}
```
   
[`Volver`](../README.md)
