#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores realcionales \n");

    float valA, valB;

    valA = 5;
    valB = 10;


    if (valA < valB)
        printf("Pregunta 1: cierto \n");

    else ("Pregunta 1: falso \n");


    if (valA <= valB)
        printf("Pregunta 2: cierto \n");

    else
        printf("Pregunta 2: falso \n");

    if (valA > valB)
        printf("Pregunta 3: cierto \n");
    else
        printf("Pregunta 3: falsa \n");

    if (valA >= valB)
        printf("Pregunta 4: cierta \n");

    else
        printf("Pregunta 4: Falso \n");


    if (valA == valB)
        printf("Pregunta 5: Cierta \n");
    else
        printf("Pregunta 5: Flaso \n");

    if(valA != valB)
        printf("Pregunta 6: Cierto \n");

    else
        printf("Pregunta 6: Falso \n");
    return 0;
}
