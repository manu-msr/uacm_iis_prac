[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 4`](../README.md) > `Ejemplo 2`

## Ejemplo 2: Protipos

### 1. Objetivos :dart:

- Repasar la sintaxis y usos de la estructura `while`.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

1. Modiquemos el programa del Ejemplo 1, poniendo la función después de `main`. Notemos que se obtiene una advertencia.

   [`sucesion2.c`](codigos/sucesion2.c)

   ```c
   #include <stdio.h>

   int main(void)
   {
      for (int i = 0; i < 100; i++)
         printf("%d", doble(i));

      return 0;
   }

   /* Función doble.
      Recibe un entero n y devuelve su elevación al cuadrado.
   */
   int doble(int n)
   {
      return n * n;
   }
   ```

   ```bash
   > gcc sucesion2.c -o sucesion2
   sucesion2.c: In function ‘main’:
   sucesion2.c:6:20: warning: implicit declaration of function ‘doble’ [-Wimplicit-function-declaration]
       printf("%d", doble(i));
   ```

1. Para corregir este error, podemos colocar prototipos que ayuden al compilador a conocer el tipo de las funciones evitando este tipo de errores.

   Basta con especificar:

   - Tipo de retorno de la función.
   - Nombre de la función.
   - Tipo de cada parámetro formal de la función.

   [`sucesion3.c`](codigos/sucesion3.c)

   ```c
   #include <stdio.h>

   int doble(int);

   int main(void)
   {
      for (int i = 0; i < 100; i++)
         printf("%d", doble(i));

      return 0;
   }

   /* Función doble.
      Recibe un entero n y devuelve su elevación al cuadrado.
   */
   int doble(int n)
   {
      return n * n;
   }
   ```

   ```bash
   > gcc sucesion3.c -o sucesion3
   > ./sucesion3 
   0 1 4 9 16 25 36 49 64 81 100 121 144 169 196 225 256 289 324 361 400 441 484 529 576 625 676 
   729 784 841 900 961 1024 1089 1156 1225 1296 1369 1444 1521 1600 1681 1764 1849 1936 2025 2116 
   2209 2304 2401 2500 2601 2704 2809 2916 3025 3136 3249 3364 3481 3600 3721 3844 3969 4096 4225 
   4356 4489 4624 4761 4900 5041 5184 5329 5476 5625 5776 5929 6084 6241 6400 6561 6724 6889 7056 
   7225 7396 7569 7744 7921 8100 8281 8464 8649 8836 9025 9216 9409 9604 9801
   ```   
   
[`Volver`](../README.md)
