#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Interando con FOR \n\n");

    // Declaramos varibales
    int limSup, limInf;

    // imprimir texto
    printf("Ingresa limite superior \n\n");

    // gardo en una variable lo que se ingresa por taclado
    scanf("%i", &limSup);

    // Presgunat ingrese datos por teclado
    printf("Ingrese limite inferior \n\n");

    //Guardo los datos en una variable
    scanf("%i", &limInf);

    //Imprimimos un salto de linea
    printf("\n");

    // Inicio ciclo for
    // si limpSuo es mayor o igual a liminf entonces le restamos uno
    for(int i = limSup; i >= limInf; i--)
    {
        printf("Numero: %d \n", i);
    }


    return 0;
}
