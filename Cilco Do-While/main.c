#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Interando con Do-While \n\n");

    // declaramos la variables son caracteres

    char respuesta = 'q';
    char valor;

    //inicio del ciclo do-while
    do
    {
        //primero preguntamos la letra tantas veces hasta que sea la correcta
        printf("Ingresa una letra: \n\n");

        //guardamos la varibale
        scanf(" %c", &valor);
    }
    //verificamos que se cumpla la condicion
    while(valor != respuesta);

    //si se cumple imprime las respuesta

    printf("\nLa condicion se cumple: %c == %c \n", valor, respuesta);
    return 0;
}
