#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto imprimir 100 numero naturales \n\n");

    int numero = 0;

    do{
       numero++;
        if (numero%2 == 0)
            printf("%i \n", numero);


    }
    while (numero < 100);
    printf("\n %i",numero);

    return 0;
}
