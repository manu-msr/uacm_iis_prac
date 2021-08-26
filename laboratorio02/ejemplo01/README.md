[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 2`](../README.md) > Ejemplo 1

## Ejemplo 1: Estructura de Decisión `if`

### 1. Objetivos :dart:

- Repasar cada una de las variantes de la estructura de control `if`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

1. El siguiente programa determina si una persona puede votar en México con base en la edad del usuario para las próximas elecciones usando `if`. Ejecútalo y observa los resultados.

   [`votaciones.c`](codigos/votaciones.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      // Declaración de variables.
      int e;

      // Pedir datos al usuario.
      printf("Introduce tu edad: ");
      scanf("%d", &e);

      if (e >= 18)
         printf("\nPuede votar");
      if (e < 18)
         printf("\nNo puede votar");

      return 0;
   }
   ```

   ```bash
   > gcc votaciones.c -o votaciones
   > ./votaciones
   > Introduce tu edad: 29
   Puede votar
   ```

   ```bash
   > ./votaciones
   > Introduce tu edad: 8
   No puede votar
   ```

1. El siguiente código muestra la implementación de un programa que decide si un número es par o impar usando `if-else`. Ejecútalo y observa los resultados.

   [`parimpar.c`](codigos/parimpar.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      // Declaración de variables.
      int n;

      // Pedir datos al usuario.
      printf("Introduce un número: ");
      scanf("%d",&n);

      // Toma de decisiones y resultados.
      if (n % 2 == 0)
         printf("\nEl número es par.");
      else
         printf("\nEl número es impar.");

      return 0;
   }
   ```

   ```bash
   > gcc parimpar.c -o parimpar
   > ./parimpar
   > Introduce un número: 10
   El número es par.
   ```

   ```bash
   > ./parimpar
   > Introduce un número: 3
   El número es impar.
   ```   

1. El siguiente código describe las calificaciones de un alumno a partir de la siguiente información usando una estructura `if-else-if`. Ejecútalo y observa los resultados.

   | Calificación | Descripción |
   | ------------ | ----------- |
   | 10,9,8,7     | Aprobado    |
   | 6,5          | Reprobado   |
   | 4,3,2,1      | NP          |

   [`calificaciones.c`](codigos/calificaciones.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      // Declaración de variables.
      int c;

      // Pedir datos al usuario.
      printf("Introduce una Calificación: ");
      scanf("%d", &n);

      // Toma de decisiones y resultados.
      if (c >= 7)
         printf("\nAprobado");
      else if (c == 6 || c == 5)
         printf("\nReprobado");
      else
         printf("\nNP");

      return 0;
   }
   ```

   ```bash
   > gcc calificaciones.c -o calificaciones
   > ./calificaciones
   > Introduce una calificación: 8
   Aprobado.
   ```

   ```bash
   > ./calificaciones
   > Introduce una calificación: 5
   Reprobado.
   ```

   ```bash
   > ./calificaciones
   > Introduce una calificación: 2
   No se presentó.
   ```

[`Volver`](../README.md)
