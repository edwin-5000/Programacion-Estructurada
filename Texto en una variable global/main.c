#include <stdio.h>
#include <stdlib.h>


//declaracion de una varibale goblal.
char textPublic[] = {"Texto en una variable global. \n\n"};

// Funcion

void comprobar()
{
    printf("\n\n--Imprimir una fucion: comparar --\n\n");
    printf("%s", textPublic);

    //Proboca error, no pude compilar por que no encuentra la variable: textPrivado.
    //hay que comentar la linea para que el programa compile.

    printf("Variable loca: ");
//    puts(textPribado)
}


int main()
{
    printf("Varibles publciar y privadas \n");
    printf("-- Imprimir desde la funcion: main --\n\n");

    char textPrivado[] = {"Texto de una variable local.\n"};

    printf("Variable global: ");
    printf("%s", textPublic);

    printf("Variable local: ");
    printf("%s", textPrivado);

    comprobar();
    return 0;
}
