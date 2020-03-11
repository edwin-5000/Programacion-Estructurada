#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos e interadores bidimensionales \n\n");

    int numero [4][5];

    for (int i = 0; i < 4; i++)
    {
        for(int j =0; j < 5; j++)
        {
            numero[i][j] = ((i + 1)*100) + j;
            printf("(%d, %d): %d \n", i, j, numero[i][j]);
        }
    }
    return 0;
}
