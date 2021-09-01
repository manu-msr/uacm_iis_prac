#include <stdio.h>

int main(void)
{
   // Declaración de variables.
   int b, e;
   int potencia = 1;

   // Pedir datos al usuario.
   printf("Introduce la base: ");
   scanf("%d", &b);
   printf("Introduce el exponente: ");
   scanf("%d", &e);

   // Calcular potencia.
   for (int i = 1; i <=e; i++)
      potencia *= b;

   // Mostrar resultados.
   printf("\nResultado: %d\n", potencia);

   return 0;
}
