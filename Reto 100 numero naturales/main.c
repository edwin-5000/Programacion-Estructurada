#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    // imprimir por pantalla lo que necitamos
    printf("Reto imprimir 100 numero naturales \n\n");

    // Declaramos una variable de un numero entero
    int numero = 0;

    //Iniciamos el cilco do while 
    do{
       numero++;
        if (numero%2 == 0)
            printf("%i \n", numero);


    }
    while (numero < 100);
    printf("\n %i",numero);

    return 0;
}
