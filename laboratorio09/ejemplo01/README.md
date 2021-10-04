[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 9`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Uso de los operadores `&` y `*`

### 1. Objetivos :dart:

- Ejemplificar la definición y uso de apuntadores.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

El siguiente programa muestra el uso de los operadores `&` y `*` sobre apuntadores.

**[`op_apuntadores.c`](codigos/op_apuntadores.c)**

```c
#include <stdio.h>

int main(void)
{
   
   int a; // a es un entero
   int *aAp; // aAp es un apuntador a un entero

   a = 7;
   aAp = &a; // aAp se asigna con la dirección de a

   printf("La dirección de a es %p\nEl valor de aAp es %p", &a, aAp);

   printf("\n\nEl valor de a es %d\nEl valor de *aAp es %d", a, *aAp);

   printf("\n\nLos operadores se complementan uno al otro...\n");
   printf("&*aAp = %p\n*&aAp = %p\n", &*aAp, *&aAp);

   return 0;
}
```

- El especificador de formato `%p` muestra la dirección en memoria como un número hexadecimal. 

- Notemos que la **dirección** de `a` y el **valor** de `aAp` son iguales. Lo mismo para el valor de `a` y el valor al que apunta `aAp`.

- Al ver los complementos quizá resulte la duda... ¿qué operador aplico primero? Esto muestra la necesidad de definir la precedencia y asociatividad de ambos operadores.
   
[`Volver`](../README.md)
