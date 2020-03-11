#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaramos las variables
    int suma;
    float resta;
    float division;
    float multiplicacion;
    int modulo;


    // Hacemos las operaciones

    suma = 7+3;
    resta = 7.1-3.2;
    division = 7.0 -3.0;
    multiplicacion = 7*3;
    modulo = 7%3;


    printf("suma %i \n", suma);
    printf("resta %f \n", resta);
    printf("division %f \n", division);
    printf("multiplicacion %f \n", multiplicacion);
    printf("modulo %i ", modulo);
    return 0;
}
