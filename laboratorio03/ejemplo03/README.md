[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 3`](../README.md) > Ejemplo 3

## Ejemplo 3: Estructura de Repetición `for`

### 1. Objetivos :dart:

- Repasar la sintaxis y usos de la estructura `for`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

1. El siguiente programa eleva un base a un exponente por medio de la estructura `for`. Ejecútalo y observa los resultados.

   [`potencias.c`](codigos/potencias.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      // Declaración de variables.
      int b, e;
      int potencia = 1;

      // Pedir datos al usuario.
      printf("Introduce la base: ");
      scanf("%d", &b);
      printf("Introduce el exponente: ");
      scanf("%d", &e);

      // Calcular potencia.
      for (int i = 1; i <=e; i++)
         potencia *= b;

      // Mostrar resultados.
      printf("\nResultado: %d\n", potencia);

      return 0;
   }
   ```

   ```bash
   > gcc potencias.c -o potencias
   > ./potencias
   Introduce la base: 2
   Introduce el exponente: 3

   Resultado: 8
   ```

[`Volver`](../README.md)
