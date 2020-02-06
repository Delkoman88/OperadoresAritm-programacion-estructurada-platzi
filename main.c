#include <stdio.h>
#include <stdlib.h>
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
    rArea = (2 * 3.1416) * (radio * radio);
    rVolumen = (rArea * altura);

    //Se muestran los resultados en pantalla
    printf("El area del cilindro es: %f \n", rArea);
    printf("El volumen del cilindro es: %f \n", rVolumen);


    return 0;
}
