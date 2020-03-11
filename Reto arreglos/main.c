#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto arreglos \n");

    int num[5];
    num [0] = 1;
    num [1] = 2;
    num [2] = 5;
    num [3] = 10;
    num [4] = 11;

    int res;
     res = num[0]*num[1]*num[2]*num[3]*num[4];
    printf("La respuesta es: %i \n", res);

    return 0;
}
