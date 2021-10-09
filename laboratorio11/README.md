[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 11`

## Laboratorio 11: El operador `sizeof`

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Conocer la sintaxis y uso de la función `sizeof` que proporciona __C__.
1. Usar la función `sizeof` para obtener el tamaño de un arreglo.
1. En general, conocer el tamaño que se usa para guardar los distintos tipos de datos soportados por __C__.

### 2. Contenido :blue_book:

---

#### <ins>Introducción</ins>

- __C__ provee un operador unario especial llamado `sizeof` para determinar el tamaño en bytes de un arreglo (de cualquier otro tipo de dato en realidad) durante la fase de compilación. 

- Cuando se aplica al identificador de un arreglo, el operador `sizeof` regresa el número total de bytes en el arreglo como un número entero (`long`). 

- El formato en que la operación `sizeof` depende del compilador. Para estos ejemplos, supondremos que el compilador hace uso del tipo `long`, de forma que el especificador de formato a usar es `%ld`.

**[`Ejemplo 1`](ejemplo01/README.md)**

---

#### <ins>Tamaño de un arreglo</ins>

- El número de elementos en un arreglo (tamaño) también puede ser determinado con ayuda de `sizeof`. Por ejemplo, consideremos la siguiente declaración:

   ```c
   double real[22];
   ```

   Las variables de tipo `double` normalmente son almacenadas en 8 bytes de memoria. Por lo tanto, el arreglo `real` contiene un total de 176 bytes.

- Para determinar el número de elementos en el arreglo, podemos usar la siguiente expresión:

   ```c
   sizeof(real) / sizeof(real[0]);
   ```

   La expresión determina el número de bytes del arreglo y divide dicho valor entre el número de bytes usado para almacenar el primer elemento.

- Podemos usar esta estrategia con las funciones sobre arreglos que hemos definido a lo largo de nuestro curso.

**[`Ejemplo 2`](ejemplo02/README.md)**

---

#### <ins>Tamaño de los tipos de datos básicos</ins>

- El operador `sizeof` se puede aplicar a cualquier identificador, tipo o valor (incluyendo el valor de una expresión).

- Cuando es aplicado a una identificador (que no pertenece a un arreglo), se obtiene el númeero de bytes necesarios para el almacenar una variable de ese tipo.

- Los paréntesis de `sizeof` no siempre son requeridos, pueden omitirse cuando usamos identificadores o tipos que no requieren mas que una palabra resservada. 

- Para tipos como `long double` es obligatorio poner paréntesis.

**[`Ejemplo 3`](ejemplo03/README.md)**

<br/>

[`Anterior`](../laboratorio10/README.md) | [`Siguiente`](../laboratorio12/README.md)
