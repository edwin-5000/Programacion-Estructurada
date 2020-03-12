#include <stdio.h>
#include <stdlib.h>


float calcularExponente(float valorA, float valorB)
{
    float res = valorA;
    for (int i = 1; i < valorB; i++)
        res = res * valorA;
    return res;
}
int main()
{
    printf("Potencia de un numero.\n\n");
    float valA, valB, valC, res;

    printf("Base: ");
    scanf("%f", &valA);

    printf("\n\nExponente: \n\n");
    scanf("%f", &valB);


    res= calcularExponente(valA, valB);

    printf("\n\nResulatado: %f \n\n", res);

    return 0;
}
