[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 19`

## Laboratorio 19: Manejo de errores y longitud de cadenas

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Presentar algunas funciones de la biblioteca `string.h` relacionados con el manejo de errores y longitud de cadenas.

### 2. Contenido :blue_book:

---

#### <ins>Función `strerror`</ins>
  
```c
char *strerror(int numerror);
```

- Mapea `numerror` en un texto de error que dependen del compilador y/o el sistema operativo.

- Regresa un apuntador a la cadena.

**[`Ejemplo 1`](ejemplo01/README.md)**

---

#### <ins>Función `strlen`</ins>

```c
size_t strlen(const char *s);
```

- Determina la longitud de la cadena `s`.

**[`Ejemplo 2`](ejemplo02/README.md)**

---

[`Anterior`](../laboratorio18/README.md) | [`Siguiente`](../laboratorio20/README.md)
