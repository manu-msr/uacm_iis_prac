[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 18`

## Laboratorio 18: Operaciones de Memoria mediante `string.h`

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Presentar algunas funciones de la biblioteca `string.h` relacionados con el manejo de la memoria al manipular 
   cadenas.

### 2. Contenido :blue_book:

---

La biblioteca de manejo de cadenas `string.h` contiene funciones que permiten manipular, comparar y buscar bloques de
memoria. Estas funciones tratan a los bloques de memoria como arreglos de caracteres y pueden manipular cualquier bloque
de datos.

---

> :information_source: **Nota:** Algunos parámetros se encuentran declarados como `void *`, esto quiere sedicr que 
> pueden ser usados para manipular memoria de cualquier tipo de dato. 

---

#### <ins>Función `memcpy`</ins>
  
```c
void *memcpy(void *s1, const void *s2, size_t n);
```

- Copia `n` caracteres del objeto apuntado por `s2` en el objeto apuntado por `s1`.

- Regresa un apuntador al objeto resultante.

- El resultado de esta función es *indefinido* si los dos objetos comparten partes de la memoria. En dichos casos se 
  sugiere usar `memmove`.

**[`Ejemplo 1`](ejemplo01/README.md)**

---

#### <ins>Función `memmove`</ins>

```c
void *memmove(void *s1, const void *s2, size_t n);
```

- Copia `n` caracteres del objeto apuntado por `s2` en el objeto apuntado por `s1`.

- La copia se realiza como si los caracteres fueran copiados primero desde el objeto apuntado por `s2` en un arreglo
  temporal y a partir de ahí son copiados hacia el objeto apuntado por `s1`.

- Regresa un apuntador al objeto resultante.

**[`Ejemplo 2`](ejemplo02/README.md)**

---

#### <ins>Función `memcmp`</ins> 

```c
int memcmp(const void *s1, cont void *s2, size_t n);
```

- Compara los primeros `n` caracteres de los objetos apuntados por `s1` y `s2`.

- La función regresa 0 si son iguales, un valor menor a cero si `s1` es menor a `s2` o un valor mayor a 0 si `s1` es
  mayor a `s2`.

**[`Ejemplo 3`](ejemplo03/README.md)**

---

#### <ins>Función `memchr`</ins>

```c
void *memchr(const void *s, int c, size_t n);
```

- Encuentra la primera aparición de `c` en los primeros `n` caracteres del objeto apuntado por `s`.

- Si `c` es encontrado, regresa un apuntador a `c` en el objeto.

- En otro caso se obtiene `NULL`.

**[`Ejemplo 4`](ejemplo04/README.md)**

---

#### <ins>Función `memset`</ins>

```c
void *memset(void *s, int c, size_t n);
```

- Copia `c` en los primeros `n` caracteres del objeto apuntado por `s`.

- Regresa un apuntador al resultado.

**[`Ejemplo 5`](ejemplo05/README.md)**

[`Anterior`](../laboratorio17/README.md) | [`Siguiente`](../laboratorio19/README.md)
