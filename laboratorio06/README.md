[`Introducción a la Ingeniería de Software`](../README.md) > `Laboratorio 6`

## Laboratorio 6: Funciones sobre Arreglos

<img src="../imagenes/pizarron.png" align="right" height="100" width="100" hspace="10">

### 1. Objetivos :dart:

1. Continuar con el repaso de uso de arreglos.

1. Definir funciones que recibes arreglos y alterar su estado usando paso por referencia.

### 2. Contenido :blue_book:

En __C__ se pueden definir funciones que reciban como parámetro arreglos, con la peculiaridad de que son pasados por referencia. La razón principal de hacer esto es no desperdiciar memoria, si un arreglo se pasara por valor cada vez que se haga una llamada a una función se realizaría una copia del arreglo, lo cual implicaría un uso excesivo de memoria.

---

#### <ins>Sintaxis</ins>

- La sintaxis general es la misma que la de cualquier otra función, con la diferencia de que debemos agregar los corchetes cuadrados después del identificador del arreglo para que el compilador sepa que estamos trabajando con otro tipo de parámetro.

   ```c
   <tipo> <nombre> (<tipo_arreglo> <nombre_parámetro>[])
   {
   	   <cuerpo>
   }
   ```

- Para llamar a una función que recibe un arreglo sólo se escribe el nombre de la variable, sin necesidad de colocar los corchetes.

   ```c
   <nombre> (<nombre_arreglo>);
   ```

- En este laboratorio completaremos el cuerpo del siguiente programa de forma tal que al finalizar tengamos un programa con cuatro funciones sobre arreglos: leer, imprimir, inicializar y buscar.

   **[`funciones_arreglos.c`](codigos/funciones_arreglos.c)**

   ```c
   #include <stdio.h>

   void leerArreglo(int arreglo[], int n);
   void imprimirArreglo(int arreglo[], int n);
   void inicializarArreglo(int arreglo[], int n, int valor);
   int buscarArreglo(int arreglo[], int n, int elemento);

   int main(void)
   {
      int arreglo1[10];
      int arreglo2[10];

      leerArreglo(arreglo1,10);
      imprimirArreglo(arreglo1,10);
      inicializarArreglo(arreglo2,10);
      imprimirArreglo(arreglo2,10);

      int b = buscarArreglo(arreglo1,10,1);
      int c = buscarArreglo(arreglo2,10,7);

      if (b != -1)
         printf("El número 1 se encuentra en el arreglo 1\n");
      else
         printf("El número 1 no se encuentra en el arreglo 1\n");

      if (c != -1)
         printf("El número 7 se encuentra en el arreglo 2\n");
      else
         printf("El número 7 no se encuentra en el arreglo 2\n");

      return 0;
   }

   ...
   ```

- Lectura de un arreglo: [**`Ejemplo 1`**](ejemplo01/README.md)
- Impresión de un arreglo: [**`Ejemplo 2`**](ejemplo02/README.md)
- Inicialización de un arreglo: [**`Actividad 1`**](actividad01/README.md)
- Búsqueda en un arreglo: [**`Actividad 2`**](actividad02/README.md)

---


<br/>

[`Anterior`](../laboratorio05/README.md) | [`Siguiente`](../laboratorio07/README.md)
