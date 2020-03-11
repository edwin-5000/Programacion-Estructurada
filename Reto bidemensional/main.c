#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto bidimensional \n\n");

    int nombre [3][4];

    nombre [0][0]= 1;
    nombre [0][1]= 1;
    nombre [0][2]= 1;
    nombre [0][3]= 1;

    nombre [1][0]= 2;
    nombre [1][1]= 4;
    nombre [1][2]= 2;
    nombre [1][3]= 4;

    nombre [2][0]= 6;
    nombre [2][1]= 6;
    nombre [2][2]= 6;
    nombre [2][3]= 8;


    printf("Suma de la primera fila es: %i \n\n", nombre[0][0]+nombre[0][1]+nombre[0][2]+nombre[0][3]);
    printf("Suma de la  segunda fila es: %i \n\n", nombre[1][0]+nombre[1][1]+nombre[1][2]+nombre[1][3]);
    printf("Suma de la tercera fila es: %i \n\n", nombre[2][0]+nombre[2][1]+nombre[2][2]+nombre[2][3]);

    return 0;
}
