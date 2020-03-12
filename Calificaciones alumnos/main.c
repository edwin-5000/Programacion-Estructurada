#include <stdio.h>
#include <stdlib.h>

char nombreAlumno[50];
float calif;

void evaluar()
{
    if(calif >= 7.0)
        printf("El alumnu %s ha sido aprobrado.\n\n", nombreAlumno);
    else
        printf("EL alumno  %s a sidio reprobado. \n\n", nombreAlumno);
}
int main()
{
    printf("Califiacion. \n\n");
    printf("Ingresa el nombre: \n");

    gets(nombreAlumno);

    printf("Ingresa la calificacion: \n");
    scanf("%f", &calif);


    evaluar(nombreAlumno, calif);

    return 0;
}
