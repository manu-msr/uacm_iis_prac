[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 8`](../README.md) > `Ejemplo 1`

## Ejemplo 1: Nombre y apellidos de una persona

### 1. Objetivos :dart:

- Ejemplificar el manejo de cadenas desde teclado.

### 2. Requisitos :clipboard:

- Compilador de __C__.

### 3. Desarrollo :rocket:

El siguiente programa crea dos cadenas para guardar el nombre y apellidos de una persona. Es importante observar que no se requiere usar el operador `&` debido al paso por referencia de los arreglos.

**[`nombres.c`](codigos/nombres.c)**

```c
#include <stdio.h>

int main(void)
{
   
   char nombre[15], apellidos[30];

   printf("Introduce tu nombre: ");
   scanf("%s", nombre);

   printf("Introduce tus apellidos: ");
   scanf("%s", apellidos);

   printf("Usted es %s %s\n", nombre, apellidos);

   return 0;
}
```

Observemos que al ejecutar el programa, se pierde el segundo apellido de la persona que coloque sus datos. Esto ocurre debido a que al usar el especificador de formato `%s`, se considera que una cadena acabó de escribirse cuando encuentra un espacio en blanco o un salto de línea.

Para solucionar este problema, podemos usar el especificar de formato ` %[^\n]` que indica al compilador que necesita leer caracteres hasta encontrarse con un salto de línea. Se deja un espacio inicial para permitir múltiples lecturas.

```c
#include <stdio.h>

int main(void)
{
   
   char nombre[15], apellidos[30];

   printf("Introduce tu nombre: ");
   scanf("%s", nombre);

   printf("Introduce tus apellidos: ");
   scanf(" %[^\n]", apellidos);

   printf("Usted es %s %s\n", nombre, apellidos);

   return 0;
}
```
   
[`Volver`](../README.md)
