#include <stdio.h>
#include <stdlib.h>

int main()
{
    // imprimimos un texto por pantalla
    printf("Condicion if else if \n");

    // decalramos las variables
    float valA, valB, valC;

    //asignan valor a las variables
    valA = 100;
    valB = 150;
    valC = 100;

    // imprimir texto
    printf("Condicinal: \n");

    // Primera condicion con if y pasamis los parametros
    if (valA == valB)
    {
        // Imprime el resultado
        printf("si se cumple la condicion");
    }

    // segunda condicion si no se cumple la anterior
    else if (valA == valC)
    {
            // imprimir resultado
        printf("si se cumple");
    }
    // tercera condicion si no se cumple ninguna de las anteriosres

    else
    {
        printf(" ninguna condicion se cumple");
        printf("el programa termina");
    }

    return 0;
}
