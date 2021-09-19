[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 6`](../README.md) > `Ejemplo 1`

## Ejemplos: Lectura de un arreglo

### 1. Objetivos :dart:

- Ejemplificar el uso de funciones que reciben arreglos.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

El siguiente programa define la función `leeArreglo` que lee de la entrada estándar cada uno de los elementos del arreglo, recibiendo como parámetros el arreglo y el tamaño del mismo. No regresa ningún resultado, cambia el estado del arreglo por referencia.

```c
void leeArreglo(int arreglo[], int n)
{
   for (int i = 0; i < n; i++)
   {
      printf("Introduce el elemento %d: ", i);
      scanf("%d", &arreglo[i]);
   }
}
```
   
[`Volver`](../README.md)
