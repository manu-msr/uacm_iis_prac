[`Introducción a la Ingeniería de Software`](../../README.md) > [`Laboratorio 8`](../README.md) > `Actividad 2`

## Actividad 2: Manipulación de Cadenas

### 1. Objetivos :dart:

- Escribir un programa que simule el envío de mensajes con un formato específico.

### 2. Requisitos :clipboard:

- Contar con un compilador para __C__.
- Revisar el **[`Ejemplo 1`](../ejemplo01/README.md)**

### 3. Desarrollo :rocket:

---

El programa necesita los siguientes datos que serán proporcionados por el usuario:

- Nombre Completo (Remitente)
- Nombre de la persona a quien va dirigido (Destinatario)
- Dirección (En el formato: calle.número.ciudad.CP)
- Mensaje que enviará.

El programa supondrá que el usuario siempre igresará todo correctamente y realizará las siguientes tareas:

- Quitar espacios en blanco al inicio y al final de la cadena que contiene el remitente.
- Convetir el nombre del remitente a mayúsculas y agregar comillas dobles al inicio y final.
- Quitar espacios en blanco al inicio y al final de la cadena que contiene al destinatario.
- Convertir el nombre del destinatario a mayúsculas y agregar comillas dobles al inicio y al final.
- Reemplazar los puntos (.) contenidos en la dirección por comas (,).
- Incluir un tabulador (`\t`) al inicio de la dirección.
- Contar cuántos caracteres tiene el mensaje, sin contar los espacios en blanco.

Después de compilar y ejecutar, se tendrá una salida similar a la siguiente:

```bash
Bienvenido ...
Escribe tu nombre completo: Karla Pérez González
A quien va dirigido tu mensaje: Diego Vera Juárez
Escribe la dirección de Diego Vera Juárez : Oriente 14.#12.México.56844
Escribe el mensaje que le quieres enviar:
Es importante que te comuniques conmigo lo antes posible. Nos vemos.
Dándole formato al mensaje...
**********************************************************************
De: “ KARLA PÉREZ GONZÁLEZ ”
Para: “ DIEGO VERA JUÁREZ ”
Dirección: Ote 14 , #12 , México , 56844
2Introducción a Ciencias de la Computación
Es importante que te comuniques conmigo lo antes posible. Nos vemos.
***********************************************************************
Cantidad de caracteres = 58, sin contar espacios en blanco.
```

---

[`Volver`](../README.md)
