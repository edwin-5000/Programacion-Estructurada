#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if else if \n");

    float valA, valB, valC;

    valA = 50;
    valB = 100;
    valC = 150;


    printf("condicion: \n");

    if(valA == valB)
    {
        printf(" no se cumplen las condicionesl \n");
    }

    else if (valB == valC)
        printf("Tammpoco se cumple la condiciones \n");

    else
    {
        printf("Ninguna condcion se cumplio \n");
        printf("Despues de eta linea el programa termina \n");
    }
    return 0;
}
