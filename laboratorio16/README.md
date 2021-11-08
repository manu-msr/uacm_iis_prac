[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 16`

## Laboratorio 16: Funciones de Conversión de cadenas

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Presentar las funciones de conversión de cadenas de la biblioteca general de utilidades `stdlib`.

### 2. Contenido :blue_book:

En esta sesión presentamos las funciones de conversión de cadenas de la biblioteca general de utilidades `stdlib`. Estas
funciones convierte cadenas de dígitos a enteros y valores de punto flotante.

---

#### <ins>Función `atof`</ins>
  
```c
double atof(const char *nAp);
```

Convierte su argumento (una cadena que representa un número de punto flotante) a un valor de tipo `double`. Si el valor
no puede ser representado, el valor de la función es *indefinido*.

**[`Ejemplo 1`](ejemplo01/README.md)**

---

#### <ins>Función `atoi`</ins>

```c
int atoi(const char *nAp);
```

Convierte su argumento (una cadena que representa un número entero) a un valor de tipo `int`. Si el valor no puede ser
representado, el valor de la función es *indefinido*.

**[`Ejemplo 2`](ejemplo02/README.md)**

---

#### <ins>Función `atol`</ins> 

```c
long atol(const char *nAp);
```

Convierte su argumento (una cadena que representa un número entero *grande*) a un valor de tipo `long`. Si el valor no
puede ser representado, el valor de la función es *indefinido*. Cuando tanto `int` como `long` se guardan en 4 bytes,
las funciones `atoi` y `atol` trabajan de forma idéntica.

**[`Ejemplo 3`](ejemplo03/README.md)**

---

#### <ins>Función `strtod`</ins>

```c
double strod(const char *nAp, char **finAp);
```

Convierte una secuencia de caracteres representando un valor de punto flotante al tipo `double`. La función recibe dos
argumentos (una cadena y un apuntador a una cadena). La cadena contiene la secuencia de caracteres a convertir. El 
apuntador es asignado a la dirección del primer caracter después de convertir la cadena. 

**[`Ejemplo 4`](ejemplo04/README.md)**

---

#### <ins>Función `strtol`</ins>

```c
long strtol(const char *nAp, char **finAp, int base);
```

Convierte al tipo `long` una secuencia de caracteres que representan un entero. La función recibe tres argumentos: (1)
una cadena, (2) un apuntador a una cadena y (3) un entero. La cadena contiene la secuencia de caracteres a ser 
convertidos. El apuntador es asignado a la dirección del primer caracter después de realizar la conversión. El entero
especifica la base del valor a ser convertido.

La base puede ser especificada como 0 o cualquier valor entre 2 y 36. Si la base es 0 indica que el valor puede ser
octal, decimal o hexadecimal. 

**[`Ejemplo 5`](ejemplo05/README.md)**

---

[`Anterior`](../laboratorio15/README.md) | [`Siguiente`](../laboratorio17/README.md)
