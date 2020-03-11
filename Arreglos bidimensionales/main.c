#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos bidimensionales \n\n");

    // tipo de entero nombre filas columnas
        int           nombre  [4]   [4];

    // nombreVariable fila columna asigno valor
        nombre        [0]   [0]     =       11;
        nombre[0][1] = 13;
        nombre[0][2] = 14;
        nombre[0][3] = 15;

        nombre[1][0] = 21;
        nombre[1][1] = 22;
        nombre[1][2] = 23;
        nombre[1][3] = 24;

        nombre[2][0] = 31;
        nombre[2][1] = 32;
        nombre[2][2] = 33;
        nombre[2][3] = 34;

        nombre[3][0] = 41;
        nombre[3][1] = 42;
        nombre[3][2] = 43;
        nombre[3][3] = 44;

        printf("Valor en (0,1): %d \n",nombre [0][1]);
        printf("Valor en (1,1): %d \n",nombre [1][1]);
        printf("Valor en (2,2): %d \n",nombre [2][2]);
        printf("Valor en (3,3): %d \n",nombre [3][3]);
        printf("Valor en (3,0): %d \n",nombre [3][0]);



    return 0;
}
