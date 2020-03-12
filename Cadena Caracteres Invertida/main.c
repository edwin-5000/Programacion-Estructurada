#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Invertir la frace: \n\n");

    char frase[50];

    printf("Ingresar una frace: \n\n");

    gets(frase);

    for(int i = 0; i < strlen(frase); i++)
    {
        printf("%c",frase[(strlen(frase) - 1) - i]);
    }
    return 0;
}
