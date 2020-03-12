#include <stdio.h>
#include <stdlib.h>


// declarar la funcion calcularSuma() arriba de la funcion manin(). main() no puede encontrar funciones o varibales
// que desea declarar debajo de ella.

void calcularSuma()
{
    int res = 5 +8;
    printf("El resultado de l suma es: %d\n", res);
}
int main()
{
    printf("Funciones - Calcular parte 1.\n\n");
    calcularSuma();
    return 0;
}
