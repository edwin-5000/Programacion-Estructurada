#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales \n\n");

    int enteros [3];
    enteros[0] = 4;
    enteros[1] = 5;
    enteros[2] = 6;

    float flotantes[] = {22.5, 15.3, 16.5, 50.50};

    char caracter[6];
    caracter[0] = 'E';
    caracter[1]= 'd';
    caracter[2]= 'w';
    caracter[3]= 'i';
    caracter[4]= 'n';



    printf("\n Primer enterio: \t\t %d",enteros[0]);
    printf("\n Ultimos flotante: \t %f",flotantes[3]);
    printf("\n caracteres: \t %c%c%c%c%c%c. \n",caracter[0],caracter[1],caracter[2],caracter[3],caracter[4],caracter[5]);
    printf("\n");
    return 0;
}
