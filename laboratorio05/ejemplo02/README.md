[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 5`](../README.md) > `Ejemplo 2`

## Ejemplo 1: Paso por referencia

### 1. Objetivos :dart:

- Analizar un código que use el llamado paso de parámetros por referencia.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

Sea el siguiente código:

[`paso_referencia.c`](codigos/paso_referencia.c)

```c
#include <stdio.h>

void f(int*);

int main (void)
{
   int a = 3;
   f(&a);
   printf("%d\n", a);

   return 0;
}

void f(int* x)
{
   *x = 4;
}
```

```bash
> gcc paso_referencia.c -o paso_referencia
> ./paso_referencia
4
```

- Notamos que la definición del programa es equivalente al anterior, sin embargo estamos usando paso de parámetros por referencia.

- La sintaxis `int*` le indica a __C__ que en lugar de recibir el valor de una variable, debe recibir una dirección en memoria, a la cual llamamos *apuntador* porque justamente apunta al registro donde se encuentra almacenado el valor de la variable.

- Para pasar la dirección en memoria de la variable `a` a nuestra función `f` usamos el operador `&` que obtiene el apuntador correspondiente. Justo como lo hacemos con la función `scanf` que justamente hace uso de este paso de parámetros.

- Este tipo de paso de parámetros puede ser muy útil, por ejemplo, cuando necesitamos hacer una función que regrese más de un valor: la función puede regresar un valor de la manera usual y el resto asignarlos a algunos de sus parámetros que fueron pasados por referencia.
   
[`Volver`](../README.md)
