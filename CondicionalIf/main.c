#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicional if \n");

    float valA, valB, valC;
    valA = valB = 100;

    printf("Primera condicion \n");

    if(valA == valB)
        printf("Ambas condiciones son  iguales \n");

    printf("Segunda condicion \n");
    if (valA == valB)
    {
        printf("Ambos valores son iguales \n");
        valC = valA +valB;
        printf("La suma de ambos numeros es: %f", valC);
    }


    return 0;
}
