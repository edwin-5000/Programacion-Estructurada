#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaramos las varibales
    float farenheitTemp, celsiusTemp;

    //Imprimir un mensaje para pedir los datos
    printf("Ingrese la temperatura en grados farenheis: \n");
    scanf("%f", & farenheitTemp);

    //Opreacion con las variables
    celsiusTemp = ((farenheitTemp -32)*5)/9;

    printf("\nLa temperatura en grados celsius es: %f", celsiusTemp);
    return 0;
}
