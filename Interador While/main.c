#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Interado looper While \n");
    printf("\n Digite un numero \n\n");

        // declaro varibale
     int limit;

        // capturo los datos por teclado y los guardo en una varibale
     scanf("%i", &limit);

        // asignar un valor a una variable
     int i = 1;

        // Iniciamos el ciclo | loopes con while
                //condicion
     while(i <= limit)
        {
            // Imprimir el valor
        printf("\n Numero: %i \n", i);

          // suma uno a la varibale
        i++;
        }

    return 0;
}
