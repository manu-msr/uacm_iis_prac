[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 1`](../README.md) > Ejemplo 2

## Ejemplo 2: Solución de una Ecuación de Primer Grado

### 1. Objetivos :dart:

- Repasar el concepto de programa secuencial.
- Repasar el uso de variables y tipos.
- Repasar el uso de los operadores aritméticos.

### 2. Requisitos :clipboard:

- Contar con un compilador para __C__.

### 3. Desarrollo :rocket:

---

**Problema:**

Escribir un programa que calcule la solución de una ecuación de primer grado partiendo de la forma:

*ax + b = 0*

---

1. Comencemos realizando un análisis del problema.

   *Veamos esto en el pizarrón.*

   - ¿Cuál es la entrada?
   - ¿Cuál es la salida?
   - ¿Qué calculos necesito hacer?
   - ¿Puedo modularizar?
   - ¿Necesito estructuras de datos?
   - ¿Qué lenguaje puedo usar?

1. Ahora realicemos el diseño de la solución.

   *Veamos esto en el pizarrón.*

   - Diagrama de flujo.
   - Algoritmo.
   - Prueba de escritorio.

1. Desarrollo de la solución.

   *Escribe este código en tu compilador y observa los resultados.*

   `ecuaciones.c`

   ```c
   /* Programa que resuelve una ecuación de primer grado.
      ax + b = 0. */

   #include <stdio.h>

   // Función main que lleva la ejecución del programa.
   int main(void)
   {
     // Declaración de variables.
     int a, b, sol;

     // Pedir datos al usuario.
     printf("Introduce el valor de a: ");
     scanf("%d", &a);

     printf("\nIntroduce el valor de b: ");
     scanf("%d", &b);

     // Calcula el valor de la ecuación.
     sol = (b * -1) / a;

     // Muestra el resultado.
     printf("\nEl valor de x es: %d\n", sol);

     return 0;
   }
   ```

   ```bash
   > gcc ecuaciones.c -o ecuaciones
   > ./ecuaciones
   Introduce el valor de a: 3

   Introduce el valor de b: -15

   El valor de x es: 5
   >
   ```
   

[`Volver`](../README.md)
