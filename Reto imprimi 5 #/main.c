#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Imprimo 5 # \n\n");

    int numero;

    scanf("\n %i", &numero);

    int i = 0;

    while (i <= numero)
    {
        printf("\n #\n");
        i++;
    }
    return 0;
}
