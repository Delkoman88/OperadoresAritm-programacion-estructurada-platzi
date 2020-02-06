#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef MPI
#define M_PI 3.14159265358979323846
#endif
//Ingresar los valores necesarios para calcular el area de un cilindro
int main()
{
    //Se declaran variables
    float radio;
    float altura;
    float rArea;
    float rVolumen;

    //Se piden los valores al usuario
    printf("Ingresa el valor del radio: ");
    scanf("%f", &radio);
    printf("Ingresa el valor de la altura: ");
    scanf("%f", &altura);


    //Se realiza la operación para calcular área y volumen de cilindro
    rArea = ((2 * M_PI) * (radio * altura)) + ((2 * M_PI)* pow(radio,2));
    rVolumen = ((altura * M_PI) * pow(radio,2));

    //Se muestran los resultados en pantalla
    printf("El area del cilindro es: %f \n", rArea);
    printf("El volumen del cilindro es: %f \n", rVolumen);


    return 0;
}
