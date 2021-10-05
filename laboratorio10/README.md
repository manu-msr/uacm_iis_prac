[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 10`

## Laboratorio 10: Ordenamiento de Burbuja

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Seguir haciendo incapié en las diferencias entre el paso de parámetros por referencia y por valor.
1. Continuar escribiendo programas que hagan uso de apuntadores.
1. Conocer el problema de ordenamiento y dar una primera solución mediante un algoritmo de ordenamiento, Ordenamiento de Burbuja.

### 2. Contenido :blue_book:

En computación el ordenamiento de datos cumple un rol muy importante, ya sea como un fin en sí o como parte de un proceso más complejo, una prueba de esto, son los métodos de búsqueda que en ocasiones requieren como entrada secuencias ordenadas.

Un ordenamiento es la operación mediante la cual se organizan los elementos de una secuencia, basándonos en un criterio de orden. De esta forma, el problema de ordenamiento se define como:

**Problema de Ordenamiento** Sea *S = {s1, s2, ..., sn}* una secuencia no vacía y finita de elementos que tienen definido un criterio de orden. Ordenar la secuencia *S* de forma ascendente.

Existen en la actualidad distintos algoritmos de ordenamiento cada uno con diferentes complejidades. Sin embargo, dada la falta de dominio del tema para el nivel de este curso, estudiaremos únicamente El Ordenamiento de Burbuja.

<iframe width="560" height="315" src="https://www.youtube.com/embed/kPRA0W1kECg" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

---

#### <ins>Ordenamiento de Burbuja (Bubble Sort)</ins>

Comencemos con un vídeo ilustrativo:

<iframe width="560" height="315" src="https://www.youtube.com/embed/lyZQPjUT5B4" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

<br/>

- Este método es el más sencillo entre los algoritmos de ordenamiento. Es fácil de recordar y de programa, pero su desempeño computacional es bastante pobre, por lo cual es conveniente evitarlo.

- El algoritmo ordena una secuencia (arreglo en nuestro caso), intercambiando los elementos adyacentes que están en *desorden*, esto se repite hasta que todas las parejas adyacentes en el arreglo quedan en total orden. 

**[`Ejemplo 1`](ejemplo01/README.md)** **[`Actividad 1`](actividad01/README.md)**

---

<br/>

[`Anterior`](../laboratorio09/README.md) | [`Siguiente`](../laboratorio11/README.md)
