[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 4`](../README.md) > `Ejemplo 3`

## Ejemplo 3: Arreglos

### 1. Objetivos :dart:

- Repasar la sintaxis y uso de arreglos, enfatizando su recorrido por medio de la estructura de repetición `for`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

1. El siguiente programa inicializa un arreglo con la tabla de multiplicar del 2 (del 0 al 9) y muestra los resultados en un formato amigable para el usuario. El arreglo se inicializa especificando la lista de elementos.

   [`tabla2arreglos.c`](codigos/tabla2arreglos.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      int tabla[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};

      printf("%s%13s\n", "Elemento", "Valor");

      for (int i = 0; i < 10; i++)
         printf("%8d%13d\n", i, tabla[i]);

      return 0;
   }
   ```

   ```bash
   > gcc tabla2arreglos.c -o tabla2arreglos
   > ./tabla2arreglos 
   Elemento        Valor
          0            0
          1            2
          2            4
          3            6
          4            8
          5           10
          6           12
          7           14
          8           16
          9           18
   ```

1. El siguiente programa inicializa un arreglo con la tabla de multiplicar del 2 (del 0 al 9) y muestra los resultados en un formato amigable para el usuario. El arreglo se inicializa con el apoyo de una estructura `for`.

   [`tabla2arreglos2.c`](codigos/tabla2arreglos2.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      int tabla[10];

      for (int i = 0; i < 10; i++)
         tabla[i] = 2*i;

      printf("%s%13s\n", "Elemento", "Valor");

      for (int i = 0; i < 10; i++)
         printf("%8d%13d\n", i, tabla[i]);

      return 0;
   }
   ```

   ```bash
   > gcc tabla2arreglos2.c -o tabla2arreglos2
   > ./tabla2arreglos2 
   Elemento        Valor
          0            0
          1            2
          2            4
          3            6
          4            8
          5           10
          6           12
          7           14
          8           16
          9           18
   ```

1. El siguiente programa muestra cómo sumar los elementos de un arreglo.

   [`sumaarreglo.c`](codigos/sumaarreglo.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      int tabla[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

      int suma = 0;

      for (int i = 0; i < 10; i++)
         suma += tabla[i];

      printf("La suma de los elementos es: %d\n", suma);

      return 0;
   }
   ```

   ```bash
   > gcc sumaarreglo.c -o sumaarreglo
   > ./sumaarreglo 
   La suma de los elementos es: 45
   ```
   
[`Volver`](../README.md)
