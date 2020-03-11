#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicionales Switch \n\n");

    int option;

    scanf("%i", &option);

    switch(option)
    {
        case 1:
        printf("\n Elegiste el numero 1 \n");
        break;

        case 2:
        printf("\n Elegiste el numero 2 \n");
        break;

        case 3:
        printf("\n Elegiste el numero 3 \n");
        break;

        // Si no cimple ninguna de las condiciones anterioes con else
        default:
        printf("\n Numero incorrectov \n");
        break;
    }
    return 0;
}
