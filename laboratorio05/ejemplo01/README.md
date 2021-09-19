[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 5`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Paso por valor

### 1. Objetivos :dart:

- Analizar un código que use el llamado paso de parámetros por valor.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

Sea el siguiente código:

[`paso_valor.c`](codigos/paso_valor.c)

```c
#include <stdio.h>

void f(int);

int main (void)
{
   int a = 3;
   f(a);
   printf("%d\n", a);

   return 0;
}

void f(int x)
{
   x = 4;
}
```

```bash
> gcc paso_valor.c -o paso_valor
> ./paso_valor
3
```

- La función `f` altera el valor al que apunta su parámetro formal `x`, pero como éste es sólo una copia del valor al que apunta la variable `a`, el programa muestra un `3` en panbtalla, ya que el cambio a `x` no afecta a `a`.

- Esta es una regla general que se aplica a todos los programas escritos en un lenguaje que usa paso por valor: **cuando una función cambia el valor de alguno de sus parámetros formales, este cambio no afecta a los parámetros reales**.

- Puesto de otra forma, un cambio dentro de una función a *cualquiera de sus parámetros* no puede ser visto por la expresión que hizo la llamada a la función.

**_Lo que pasa en la función se queda en la función_**.
   
[`Volver`](../README.md)
