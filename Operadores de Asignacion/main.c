#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Imprmir testo
    printf("Operadores de asignacion\n");

    //Declaramos variables
    int valor;

    // Asignamos valor a la variable
    valor = 10;

    //imprimir mensaje y salto de linea
    printf("Resultado (+=):\t %d \n", valor);
    // += suma y asigna
    valor += 1;

    // -= resta y asigna
    valor -= 2;
    // Imprimo resultado
    printf("Resulado (-=):\t %d \n", valor);

    valor *= 4;
    printf("Resuldato (*=):\t %d \n", valor);

    valor /= 5;
    printf("Resultado (/=):\t %d \n", valor);

    valor %= 6;
    printf("Resultado (%=):\t %d \n", valor);


    return 0;
}
