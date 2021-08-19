[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 1`](../README.md) > Actividad 1

## Actividad 1: Solución de una Ecuación de Segundo Grado

### 1. Objetivos :dart:

- Repasar el concepto de programa secuencial.
- Repasar el uso de variables y tipos.
- Repasar el uso de los operadores aritméticos.

### 2. Requisitos :clipboard:

- Contar con un compilador para __C__.
- Revisar el **[`Ejemplo 1`](../ejemplo01/README.md)**

### 3. Desarrollo :rocket:

---

**Problema:**

Escribir un programa que calcule la solución de una ecuación de segundo grado partiendo de la forma:

*ax^2 + bx + c = 0*

---

1. Realiza un análisis del problema.

   - ¿Cuál es la entrada?
   - ¿Cuál es la salida?
   - ¿Qué calculos necesitas hacer?
   - ¿Puedes modularizar?
   - ¿Necesitas estructuras de datos?
   - ¿Qué lenguaje puedes usar?

1. Realiza el diseño de la solución.

   - Diagrama de flujo.
   - Algoritmo.
   - Prueba de escritorio.

1. Desarrollo de la solución.

   Escribe el programa correspondiente en un archivo `ecuaciones2do.c`. Un ejemplo de ejecución es el siguiente:

   ```bash
   > gcc ecuaciones2do.c -o ecuaciones2do
   > ./ecuaciones2do
   Introduce el valor de a: 1

   Introduce el valor de b: 4

   Introduce el valor de c: 3

   El valor de x1 es: -1
   El valor de x2 es: -3
   >
   ```
   

[`Volver`](../README.md)
