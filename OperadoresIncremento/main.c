#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de incremento y decremento \n\n");


    // incremento  - sujfijo ------
    int val, res;

    // delcaracion de variables
    val = 25;
    res = val++;

    // impimir el resultado

    printf("Resuladao: %i \n", res);

    // incremento prefijo
    val = 25;
    res = ++val;

    printf("Resultado: %i \n", res);


    // Decremento - prefijo
    val = 25;
    res= --val;

    printf("Resultado: %i \n", res);


    return 0;
}
