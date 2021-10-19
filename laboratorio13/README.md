[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 13`

## Laboratorio 13: Apuntadores, Arreglos y Funciones

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Revisar las distintas similitudes al trabajar con arreglos y apuntadores.
1. Hacer énfasis en las cuatro formas posibles de manipular arreglos y mostrar que al trabajar con funciones definidas sobre los mismos estamos usando una de estas cuatro formas.
1. Simular funciones de orden superior por medio de apuntadores.

### 2. Contenido :blue_book:

---

#### <ins>Introducción</ins> 

Como hemos visto, los arreglos y los apuntadores se encuentran bastante relacionados en __C__ y en muchas ocasiones podemos ocuparlos indistintamente. Veamos un ejemplo.

- Declaremos un arreglo `b` de tamaño 5.

   ```c
   b[5];
   ```

- Declaremos un apuntador `bAp` a dicho arreglo.

   ```c
   bAp = b;
   ```

- Tenemos tres formas de acceder al primer elemento del arreglo:

   ```c
   // Usando el arreglo directamente.
   b[0];

   // Usando el operador * sobre el apuntador.
   *bAp;

   // Usando indexación sobre el apuntador.
   bAp[0];
   ```

- Tenemos cuatro formas de acceder al elemento en el índice 3:

   ```c
   // Usando el arreglo directamente.
   b[3];

   // Usando aritmética de apuntadores sobre el apuntador.
   *(bAp + 3);

   // Usando aritmética de apuntadores sobre el arreglo.
   *(b + 3);

   // Usando indexación sobre el apuntador.
   bAp[3];
   ```

**[`Ejemplo 1`](ejemplo01/README.md)**

---

#### <ins>Arreglos de apuntadores</ins>

- Es posible definir arreglos que almacenen apuntadores.

- Su principal uso se centra en la definición de *arreglos de cadenas*.

- Cada entrada del arreglo es una cadena, pero en __C__ una cadena es esencialmente un apuntador al primer caracter de la misma. 

   ```c
   char *baraja[4] = {"Corazones", "Diamantes", "Tréboles", "Espadas"};
   ```

- El símbolo `*` en la declaración indica que el arreglo `baraja` es de tipo apuntador. 

- Esto también podría hacerse con matrices pero sería un desperdicio de memoria.

---

#### <ins>Apuntadores a funciones</ins>

- En __C__ es posible manejar otro nivel de abstracción con las funciones de manera que *de cierto modo* las manipulemos como si fueran valores en el lenguaje, esto es: guardarlas en variables, pasarlas como argumento a otras funciones o devolverlas como resultado. Usaremos apuntadores para esto.

- El apuntador a una función contiene la dirección en memoria donde se encuentra el código que implementa una determinada función. 

- Los apuntadores a función pueden ser pasados a otras funciones, ser regresados dentre otras funciones, almacenarse en arreglos y asignarse a otros apuntadores.

**[`Ejemplo 2`](ejemplo02/README.md)** **[`Actividad 1`](actividad01/README.md)**

---

#### <ins>Menús usando arreglos de apuntadores</ins>

- Un uso común de los apuntadores a funciones es en la definición de menús.

- El usuario elige una opción del menú escribiendo el número de la opción y cada opción es procesada por una función diferente.

- Sin embargo, por facilidad, podemos guardar las funciones en un arreglo y mandar a llamar simplemente la función de acuerdo a la posición de la misma en el arreglo.

**[`Ejemplo 3`](ejemplo03/README.md)**

<br/>

[`Anterior`](../laboratorio12/README.md) | [`Siguiente`](../laboratorio14/README.md)
