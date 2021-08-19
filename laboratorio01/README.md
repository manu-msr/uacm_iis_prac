[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 1`

## Sesión 1: Introducción a Haskell

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Conocer y configurar el compilador que se usará durante el curso.
1. Recordar la sintaxis y estructura básica de un programa en __C__.
1. Hacer un repaso generar sobre los tipos básicos de datos y la creación de variables.
1. Traducir fórmulas matemáticas a expresiones de __C__ recordando la precedencia de operadores.

### 2. Contenido :blue_book:

---

<img src="imagenes/slide1.png" align="right" height="200" width="260" hspace="10">

#### <ins>Repl.it</ins>

- Es un entorno de programación en línea.

- Sólo es necesario el lenguaje de programación. La plataforma ofrece entornos configurados con __C__, __Java__, __Haskell__, __Python__, entre otros.

- Uno de los usos es la enseñanza pues nos permite compartir los proyectos sin necesidad de descargar archivos o instalar software en sus equipo. 

[**`Ejemplo 1`**](ejemplo01/README.md)


---

#### <ins>Variables y Tipos Básicos</ins>

- En __C__ los programas tienen, en general, la siguiente estructura:

   ```c
   <Bibliotecas>

   <Prototipos>

   int main(void)
   {
      <Cuerpo del programa>
      return 0;
   }

   <Implementación de Funciones>
   ```

- Las variables almacenan valores de distintos tipos.

- Uno de sus principales propósitos es evitar la repetición de código.

- Los tipos básicos que maneja __C__ son:

   - Enteros (`short`, `int`, `long`)
   - Flotantes (`float`, `double`)
   - Carácteres (`char`)

- Para pedir estos datos, usamos direcciones de memoria por medio del operador `&`.

- Para mostrar estos datos usamos especificadores de formato por medio del operador `%`.

- C incluye los operadores básicos de la aritmética con la siguiente precedencia:

   1. Multiplicación / División / Módulo. Se evalúan de izquierda a derecha.

   1. Suma / Resta. Se evalúan de izquierda a derecha.

   1. Asignación. Se evalúa al último.

   ```c
   y = 2 * 5 * 5 + 3 * 5 + 7`

   y = ((2*5) * 5) + (3*5) + 7

   y = (10 * 5) + (3 * 5) + 7

   y = 50 + 15 + 7

   y = 65 + 7

   y = 72
   ```

- Adicionalmente tenemos la *biblioteca* __math.h__ que incluye funciones matemáticas más detalladas.

[**`Ejemplo 2`**](ejemplo02/README.md)  [**`Actividad 1`**](actividad01/README.md)

---

### 3. Ejercicios propuestos :memo:

[**`Ejercicios Laboratorio 1`**](ejercicios/README.md)

<br/>

[`Anterior`](../README.md) | [`Siguiente`](../laboratorio02/README.md)
