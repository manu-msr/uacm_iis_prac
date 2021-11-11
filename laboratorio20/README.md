[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 20`

## Laboratorio 20: Definición de Estructuras

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Presentar el concepto de Estructura y mostrar cómo se realiza su definición.

### 2. Contenido :blue_book:

Una *Estructura* es una colección de variables, de distintos tipos, relacionadas bajo un nombre específico. Las 
estructuras usualmente se usan para definir registros que puedan ser almacenados en archivos (como verémos más adelante).
Adicionalmente, en combinación con los apuntadores, antes estudiados, permiten la implementación de estructuras de datos
más complejas tales como listas ligadas, colas, pilas y árboles.

---

#### <ins>Introducción</ins>
  
- La estructuras son *tipos de datos derivados* construidos a partir de objetos de otros tipos.

- Consideremos la definición de la siguiente estructura:

    ```c
    struct carta {
    	char *valor;
    	char *palo;
    };
    ```

- La palabra reservada `struct` permite la definición de una estructura.

- El identificador `carta` es el nombre de la estructura y se usa en combinación con `struct` para declarar variables de 
  tipo estructura.

- En este ejemplo, el tipo de la estructura es `struct carta`.

- Las variables declaradas dentro de las llaves de la estructura, son llamados *campos, atributos* o *miembros*.

- Los campos de una misma estructura, deben tener nombres distintos, pero pueden ser compartidos por más de una 
  estructura.

- La definición de una estructura debe terminar con un punto y coma.

- La definición de la estructura `carta` contiene dos campos: `valor` y `palo` de tipo `char *`.

- Los campos de una estructura pueden ser variables de los tipos primitivos, arreglos e incluso otras estructuras.

- Los campos de una estructura, a diferencia de los arreglos, no deben ser todos del mismo tipo.

- Por ejemplo, la siguiente estructura contiene campos de tipo cadena para el nombre y apellidos de un empleado, `int`
  para su edad, `char` para su género y `double` para el salario.

  ```c
  struct empleado {
  	char nombre[20];
  	char apellidop[20];
  	char apellidom[20];
  	int edad;
  	char genero;
  	double salario;
  };
  ```

---

#### <ins>Estructuras auto-referenciables</ins>

- Una estructura, no puede contener un campo del tipo que define la misma.

- Por ejemplo, una variable de tipo `struct empleado` no puede ser declarada en la definición de la estructura 
  `empleado`.

- Sin embargo, un apuntador a la estructura `empleado` sí es aceptado. 

```c
struct empleado2 {
	char nombre[20];
	char apellidop[20];
	char apellidom[20];
	int edad;
	char genero;
	double salario;
	struct empleado2 persona; /* ERROR. */
	struct empleado2 *eAp; /* Apuntador. */
};
```

- La estructura `empleado2` contiene un campo a sí mismo (`persona`) que genera un error.

- Dado que `eAp` es un apuntador, se permite en la definición de la estructura.

- Llamamos a este tipo de estructura *autoreferenciables*.

---

#### <ins>Variables de tipo Estructura</ins>

- La definiciones de estructuras no gastan espacio de memoria; en su lugar, cada definición crea un nuevo tipo de dato
  que puede ser usado para definir variables.

- Las variables de tipo estructura se definen como con cualquier otro tipo.

- La siguiente definición:

   ```c
   struct carta unaCarta, baraja[52], *cartaAp;
   ```

   declara `unaCarta` como una estructura de tipo `carta`, `baraja` como un arreglo para almacenar 52 estructuras de tipo carta y finalmente, definir el apuntador de tipo estructura de `carta`.

- También pueden declararse elementos colocando los identificadores inmediatamente después de la definición de una estructura:

   ```c
   struct carta {
    char *valor;
    char *palo;
   } unaCarta, baraja[52], *cartaAp;
   ```
---

---

> :warning: **Observación.** Los identificadores de las estructuras son opcionales. Si la definición de la estructura no contiene uno, las variables sólo pueden ser declaradas, después de la definición.

---

#### <ins>Operaciones sobre estructuras</ins>

- Las únicas operaciones permitadas sobre estructuras son: (1) asignar variables de tipo estructura a otras del mismo tipo, (2) obtener la dirección en memoria de una estructura por medio de `&`, (3) acceder a los campos de la estructura y (4) usar el operador `sizeof` sobre una estructura.

- Las estructuras, además no pueden ser comparada con los operadores `==` y `!=`, debido a que los campos, no se encuentran necesariamente en direcciones de memoria consecutivas.

---

#### <ins>Inicialización de estructuras</ins>

- Las estructuras pueden inicializarse de forma muy parecida a los arreglos.

- Para inicializar una estructura, se delimitan los valores de los campos entre llaves y se separa cada uno de éstos por una coma. Por ejemplo:

   ```c
   struct carta unaCarta = {"Tres", "Corazones"};
   ```

- Si no se coloca el número de valores adecuado para inicializar el resto de campos se inicializa con `0` o `NULL`.

- Otra forma de manipular las estructuras es con la *notación punto* que veremos en otra sesión.


[`Anterior`](../laboratorio18/README.md) | [`Siguiente`](../laboratorio20/README.md)
