#include <stdio.h>

int main(void)
{
    int v[5] = {1, 2, 3, 4, 5};
    int *vAp1 = v;
    int *vAp2 = &v[0];

    printf("Direcciones del arreglo: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("&v[%d] = %p\n", i, &v[i]);
    }

    printf("\nEl apuntador 1 se encuentra en la dirección: %p\n", vAp1);
    printf("El apuntador 2 se encuentra en la dirección: %p\n", vAp2);

    printf("\nMoviendo el apuntador 1...\n");

    for (int i = 0; i < 5; i++)
    {
        printf("El apuntador 1 se encuentra en la dirección: %p\n", vAp1++);
    }

    printf("\nMoviendo el apuntador 1 de regreso...\n");

    for (int i = 4; i >= 0; i--)
    {
        printf("El apuntador 1 se encuentra en la dirección: %p\n", --vAp1);
    }

    printf("\nMoviendo el apuntador 2 dos posiciones...\n");
    vAp2 += 2;

    printf("El apuntador 2 se encuentra en la dirección: %p\n", vAp2);

    printf("\nApuntador 2 - Apuntador 1:\n");
    printf("Apuntador1: %p\n", vAp1);
    printf("Apuntador2: %p\n", vAp2);
    printf("%ld\n", vAp2 - vAp1);

    return 0;
}
