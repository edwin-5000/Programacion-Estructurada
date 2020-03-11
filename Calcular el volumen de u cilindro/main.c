#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declaramos las variables
    float radio;
    float altura;
    float area;
    float volumen;

    // Imprimimos un testo para recibir los datos
    printf("Ingrese los datos para calcular el volumen de un cilindro \n\n");
    printf("radio de base:  ");
    scanf("%f", &radio);

    // calculamos el area operacion
    area = radio * 13.1486;

    // pedimos el siguinete dato
    printf("Altura del cilindro: ");
    scanf("%f", &altura);


    // Operacion

    volumen = area * altura;

    printf("\nEl area de la base es: %f", area);
    printf("\nEL voluman del cilindro es: %f", volumen);
    return 0;
}
