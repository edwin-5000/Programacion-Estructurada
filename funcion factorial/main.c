#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
printf("Entra en la funcion factorial, n vale: %d \t", n);

if(n > 1)
{
    //si n es mayor que 1, entonces se vuelve a llamar la funcion multiplicar a n ** (n-1
    printf("La funcion se llama a si mismo otrea vez. \n\n");
    return n * factorial(n-1);
}
else
{
    //si n es igual 1, ya nos se llama la  funcion a si misma para terminar la recursividad.
    printf("n es igual a 1, termina la recursividad. \n");
    return 1;
}
}

int main()
{
    printf("Recursividad - Factorial.\n\n\n");

    int res = factorial(10);
    printf("\nEl resultado es: %d \n\n", res);
    return 0;
}
