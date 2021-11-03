[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 15`

## Laboratorio 15: Búsqueda en Cadenas mediante `string.h`

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Conocer las principales funciones de búsqueda en cadenas y usarlas en la solución de problemas.

### 2. Contenido :blue_book:

En esta sesión presentamos las funciones de la biblioteca `string.h` que permiten buscar carácteres y cadenas dentro de
otras cadenas. 

---

#### <ins>Función `strchr`</ins>
  
Busca la primera ocurrencia de un caracter en una cadena. Si el caracter es encontrado, regresa un apuntador al caracter
en la cadena; en otro caso, regresa `NULL`.

**[`Ejemplo 1`](ejemplo01/README.md)**

---

#### <ins>Función `strcspsn`</ins>

Determina la longitud de la parte inicial del primer argumento que no contiene algún caracter de la cadena del segundo
argumento. La función regresa la longitud del segmento.

**[`Ejemplo 2`](ejemplo02/README.md)**

---

#### <ins>Función `strpbrk`</ins> 

Busca en el primer argumento la primera ocurrencia de cualquier caracter en su segundo argumento. Si un caracter es
encontrado, regresa un apuntador al caracter en el primer argumento; en otro caso regresa `NULL`.

**[`Ejemplo 3`](ejemplo03/README.md)**

---

#### <ins>Función `strrchr`</ins>

Busca la última ocurrencia de un caracter especificado en una cadena. Si el caracter es hallado, regresa un apuntador
a dicho caracter en la cadena; en caso contrario regresa `NULL`.

**[`Ejemplo 4`](ejemplo04/README.md)**

---

#### <ins>Función `strspn`</ins>

Determina la longitud de la parte inicial de la parte inicial del primer argumento  que contiene únicamente caracteres
de su segundo argumento. La función devuelve la longitud del segmento.

**[`Ejemplo 5`](ejemplo05/README.md)**

---

#### <ins>Función `strstr`</ins>

Busca la primera ocurrencia del segundo argumento en el primero. Si el segundo argumento es encontrado en el primero,
se devuelve un apuntador a la dirección del primer segumento.

**[`Ejemplo 6`](ejemplo06/README.md)**

---

#### <ins>Función `strok`</ins>

Es usada para partir una cadena en una serie de *lexemas (tokens)*. Un lexema es una secuencia de caracteres separada
por *delimitadores*. Por ejemplo, en una línea de texto, cada palabra puede ser considerada un lexema y los espacios y
signos de puntuación se considerarían delimitadores.

**[`Ejemplo 7`](ejemplo07/README.md)**

---


[`Anterior`](../laboratorio14/README.md) | [`Siguiente`](../laboratorio15/README.md)
