[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 3`](../README.md) > Ejemplo 2

## Ejemplo 2: Estructura de Repetición `do-while`

### 1. Objetivos :dart:

- Repasar la sintaxis y usos de la estructura `do-while`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

1. El siguiente programa muestra la tabla de multiplicar del número ingresado por el usuario usando una estructura `do-while`. Ejecútalo y observa los resultados.

   [`tablas.c`](codigos/tablas.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      // Declaración de variables.
      int n;

      // Pedir datos al usuario.
      printf("Introduce un número: ");
      scanf("%d", &n);

      int i = 0;

      // Mostrar la tabla de multiplicar.
      do
      {
         printf("%d x %d = %d\n", n, i, n*i);
         i++;
      } while (i <= 10);

      return 0;
   }
   ```

   ```bash
   > gcc tablas.c -o tablas
   > ./tablas
   > Introduce un número: 2
   2 x 0 = 0
   2 x 1 = 2
   2 x 2 = 4
   2 x 3 = 6
   2 x 4 = 8
   2 x 5 = 10
   2 x 6 = 12
   2 x 7 = 14
   2 x 8 = 16
   2 x 9 = 18
   2 x 10 = 20
   ```

[`Volver`](../README.md)
