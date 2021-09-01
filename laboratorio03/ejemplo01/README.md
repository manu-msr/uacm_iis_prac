[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 3`](../README.md) > Ejemplo 1

## Ejemplo 1: Estructura de Repetición `while`

### 1. Objetivos :dart:

- Repasar la sintaxis y usos de la estructura `while`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

1. El siguiente programa determina si un número es par o impar mediante el método de restas sucesivas. Este método consiste en restar de dos en dos el número, si eventualmente obtenemos cero como resultado entonces el número es par, en caso contrario, es impar. Ejecútalo y observa los resultados.

   [`restas_sucesivas.c`](codigos/restas_sucesivas.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      // Declaración de variables.
      int n;

      // Pedir datos al usuario.
      printf("Introduce un número: ");
      scanf("%d", &n);

      // Restar el número hasta llegar a cero.
      while (n >= 2)
         n -= 2;

      // Mostrar resultados.
      if (n == 0)
         printf("\nEl número es par.\n");
      else
         printf("\nEl número es impar\n");

      return 0;
   }
   ```

   ```bash
   > gcc restas_sucesivas.c -o restas_sucesivas
   > ./restas_sucesivas
   > Introduce un número: 14
   El número es par
   ```

   ```bash
   > ./restas_sucesivas
   > Introduce un número: 13
   El número es impar
   ```

[`Volver`](../README.md)
