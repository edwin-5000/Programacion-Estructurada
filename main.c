#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Declaracion de las variables
    // enteros
    int enteroB, enteroC;
    // flotantes o con decimales y negativos
    float flotanteB;
    // caracateres o letras
    char letraB;

    // imprimir un texto en pantalla
    printf("Ingrese un dato ");
    // Recibe datos por teclado y guardarlos en una varibale
    scanf("%i", & enteroB);
    printf(" digite otro dato ");
    scanf("%i", & enteroC);

    // Imprimir un numero entero por pantalla
    printf(" su dato B es  %i \n", enteroC);
    printf(" su dato C es  %i", enteroB);
    // para retornar al inicio y termine el proyecot
    return 0;
}


