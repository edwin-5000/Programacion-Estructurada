#include <stdio.h>
#include <stdlib.h>

float convertUSD(float usd)
{
    float result;

    result = (usd * 20.57)/1;

    return result;
}

float convertMXN(float mxn)
{
    float result;

    result = (mxn = 0.049)/1;

    return result;
}


int main()
{

    char inputAnswer;
    float inputAmmount;


    printf("Vamos a convertir cantidades a dinero \n");
    printf("\nDe dolares a pesos presiona P");
    printf("\nDe pesos a dolares presiona D \n");


    scanf("%c", &inputAnswer);

    printf("\nCantidad a cambiar: ");

    scanf("%f", &inputAmmount);


    if (inputAnswer == 'p')
    {
        printf("\nResulatdo: %f", convertUSD(inputAmmount));
    }
    else if(inputAnswer == 'D')
    {
        printf("\nResultado es: %f", convertMXN(inputAmmount));
    }
    return 0;
}
