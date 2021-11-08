[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 17`

## Laboratorio 17: Biblioteca Estándar de Entrada/Salida sobre cadenas

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Presentar algunas funciones de la biblioteca estándar de entrada y salida (`stdio.h`) para manipular caracteres y 
cadenas.

### 2. Contenido :blue_book:

---

#### <ins>Funciones `fgets` y `putchar`</ins>
  
```c
char *fgets(char *s, int n, FILE *stream);
int putchar(int c);
```

- La función `fgets` lee caracteres de la entrada estándar en la cadena dada como primer argumento hasta que encuentra
  un salto de línea, el final de un archivo o hasta que el máximo número de caracteres sea leído. El número máximo de
  caracteres es indicado por el segundo argumento. El tercer argumento indica de dónde provienen los caracteres. Al 
  finalizar se añade el símbolo `\0`. Devuelve la cadena leída.

- La función `putchar` imprime el caracter pasado como argumento y lo devuelve como un entero.

**[`Ejemplo 1`](ejemplo01/README.md)**

---

#### <ins>Funciones `getchar` y `puts`</ins>

```c
int getchar(void);
int puts(const char *s);
```

- La función `getchar` lee el siguiente caracter de la entrada estándar y lo devuelve como un entero.

- La función `puts` imprime la cadena `s` seguida de un símbolo de salto de línea. Regresa un entero distinto de cero
  si todo sucede correctamente.

**[`Ejemplo 2`](ejemplo02/README.md)**

---

#### <ins>Función `sprintf`</ins> 

```c
int sprintf(char *s, const char *formato, ...);
```

Equivalente a `printf`, excepto por el hecho de que la salida es guardada en la cadena `s` en lugar de imprimirse en la
pantalla. Regresa el número de caracteres escritos en `s`.

**[`Ejemplo 3`](ejemplo03/README.md)**

---

#### <ins>Función `sscanf`</ins>

```c
int sscanf(char *s, const char *fomato, ...);
```

Equivalente a `scanf`, excepto por el hecho de que la lectura es hecha desde s en lugar de la pantalla. Regresa el 
número de caracteres que fueron leídos correctamente.

**[`Ejemplo 4`](ejemplo04/README.md)**

---

[`Anterior`](../laboratorio16/README.md) | [`Siguiente`](../laboratorio18/README.md)
