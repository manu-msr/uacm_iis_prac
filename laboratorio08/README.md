[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 8`

## Laboratorio 8: Manejo Básico de Cadenas

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Definir el concepto de cadena.
1. Escribir programas que hagan uso de cadenas.

### 2. Contenido :blue_book:

--- 

#### <ins>Introducción</ins>

- A diferencia de otros lenguajes de programación que emplean un tipo denominado `String` (cadena) para manipular un conjunto de símbolos, en __C__, se debe realizar *artesanalmente* mediante arreglos de caracteres (`char`).

- La manipulación de estos arreglos de caracteres a los cuales llamaremos simplemente *cadenas*, es idéntica a todas las operaciones que hemos realizado con los arreglos hasta este momento, sin embargo, una característica de gran importancia es colocar siempre al final de la cadena un caracter *nulo*.

- Un caracter nulo se escribe como `'\0'`. Cuando se declare una cadena se debe considerar un caracter adicional a la cadena más larga que se vaya a guardar. 

- Por ejemplo, si se quiere declarar una cadena `s` de diez caracteres, se debe hacer como:

   ```c
   char s[11];
   ```

- Se pueden hacer también inicializaciones de arreglos de caracteres en donde automáticamente __C__ asigne el caracter nulo al final de la cadena.

   ```c
   char s[5] = "Hola";
   ```

   Este código es equivalente a 

   ```c
   char s[5] = {'H', 'o', 'l', 'a', '\0'};
   ```

**[`Ejemplo 1`](ejemplo01/README.md)** **[`Actividad 1`](actividad01/README.md)**

---

#### <ins>Manipulación de caracteres</ins>

Una biblioteca que permite operar con los caracteres que conforman a una cadena y que es de gran utilidad es `ctype`. Para importarla en nuestros programas basta con añadir la línea:

```c
#include <ctype.h>
```

Funciones más comunes para revisar caracteres son:

| Función | Descripción |
| ------- | ----------- |
| `isalnum` | Indica si un caracter es alfanumérico |
| `isalpha` | Indica si un caracter es una letra |
| `isascii` | Indica si un caracter es ASCII |
| `iscntrl` | Indica si un caracter es de control |
| `isdigit` | Indica si un caracter es un dígito decimal |
| `isgraph` | Indica si un caracter es imprimible, exceptuando el espacio en blanco |
| `islower` | Indica si un caracter es una letra minúscula |
| `isprint` | Indica si un caracter es imprimible, incluyendo el espacio en blanco |
| `ispunct` | Indica si un caracter es un signo de puntuación |
| `isspace` | Indica si un caracter es un espacio. |
| `isupper` | Indica si un caracter es una letra mayúscula |
| `isxdigit` | Indica si un caracter es un dígito hexadecimal |

Las funciones anteriores pueden usarse en condiciones. Adicionalmente se tienen funciones para conversión de caracteres:

| Función | Descripción |
| ------- | ----------- |
| `toascii` | Convierte un caracter a ASCII |
| `tolower` | Convierte un caracter a minúsculas, si es posible |
| `toupper` | Convierte la letra c a mayúsculas, si es posible |

---

#### <ins>Funciones sobre cadenas</ins>

Al ser arreglos, podemos definir funciones sobre cadenas de manera muy sencilla. A manera de ejemplo, construyamos un programa que manipule algunas cadenas.

**[`Actividad 2`](actividad02/README.md)**

---


<br/>

[`Anterior`](../laboratorio07/README.md) | [`Siguiente`](../laboratorio09/README.md)
