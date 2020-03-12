#include <stdio.h>
#include <stdlib.h>

// asigacion de una varibale desde unapuntador
int main()
{
    printf("Apuntadores \n\n");

    //variable que vamos a modificar desde su posicion en memora
    float val;

    //varibal del apuntador
    float *apval;

    //gaurdamos la posicion de memoria de la variable val en el apuntador
    apval = &val;

    //asigna valor
    *apval = 3.1416;


    //comprobamos que la variable se lleno desde el apuntador.
    printf("El valor de la variable es: %f\n", val);

    return 0;
}
