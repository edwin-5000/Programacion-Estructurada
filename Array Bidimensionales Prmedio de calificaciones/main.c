#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Array Bidimensionales Promedio de calificaciones \n\n");


    /* Crea arreglos de 5 filas por 6 columnas donde:

    1. Los primerso 5 elementos de cada fila tengan calificacoiones aprobatorias entre 6 y 10.
    2. el sexto elemento de cada fila debe ser 0.

    Despues:

    3. calcularaa el promedio de los primeros 5 elementos de cada fila y asignalo al sexto elemento.
    4. Imprime el promedio de cada fila de calificaciones.
    */

    float nombre[5][6] = {{6, 7, 6, 8, 0},
                            {8, 8, 9, 7, 0},
                            {10, 10, 9, 8, 0},
                            {10, 9, 9, 8, 0},
                            {8, 7, 6, 7,0}};
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
           {
            if(j < 5)
            {
            nombre[i][5] += nombre[i][j];
            printf("La sumatoria de calificaciones [%d][5], es: %f \n", i, nombre[i][5]);
            }
            else
            {
                nombre[i][j] /= 5;
                printf("\n\tEl promedio de la fila %d, es: %f\n\n", i, nombre[i][j]);
            }
        }
    }
    return 0;
}
