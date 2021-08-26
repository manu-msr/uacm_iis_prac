[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 2`](../README.md) > Ejemplo 2

## Ejemplo 2: Estructura de Decisión `switch`

### 1. Objetivos :dart:

- Repasar la estructura de control `switch`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

1. El siguiente programa pide un número al usuario y calcula la cadena del mes que le corresponde.

   [`meses.c`](codigos/meses.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      // Declaración de variables.
      int m;

      // Pedir datos al usuario.
      printf("Introduce un número: ");
      scanf("%d", &m);

      // Decidir el valor del mes.
      switch (m)
      {
         case 1:
            printf("\nEnero.");
            break;
         case 2:
            printf("\nFebrero.");
            break;
         case 3:
            printf("\nMarzo.");
            break;
         case 4:
            printf("\nAbril.");
            break;
         case 5:
            printf("\nMayo.");
            break;
         case 6:
            printf("\nJunio.");
            break;
         case 7:
            printf("\nJulio.");
            break;
         case 8:
            printf("\nAgosto.");
            break;
         case 9:
            printf("\nSeptiembre.");
            break;
         case 10:
            printf("\nOctubre.");
            break;
         case 11:
            printf("\nNoviembre.");
            break;
         case 12:
            printf("\nDiciembre.");
            break;
         default:
            printf("\nNúmero incorrecto.");
      }

      return 0;
   }
   ```

   ```bash
   > gcc meses.c -o meses
   > ./meses
   > Introduce un mes: 10
   Octubre.
   ```

   ```bash
   > ./meses
   > Introduce un mes: 18
   Número incorrecto.
   ```

[`Volver`](../README.md)
