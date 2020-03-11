#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores relacionales 2 \n");

    float valA, valB, valC;

    valA =5;
    valB = valC = 10;


    if ((valA < valB)&& (valB == valC))

        printf(" Se cumplieron las dos condiciones \n")

    else
        printf("No se cumlieron las dos condiciones \n");

    if ((valA > valB)|| (valB <= valC))
        printf("Se cumple una de las condiciones \n");

    else
        printf("No se cumple ninguna condicion \n");
    return 0;
}
