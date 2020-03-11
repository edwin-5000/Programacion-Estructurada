#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e Interadore \n\n");

// Variable y tamano de datos [4]
    int nombre [4];
// ciclo condicion
    for(int i =0; i < 4; i++)
        {
            // formula pra que
            nombre[i]= i * i;
            // imorimir datos y posicion del numero
            printf("Valor (%d): %d \n", i, nombre[i]);
        }

    return 0;
}
