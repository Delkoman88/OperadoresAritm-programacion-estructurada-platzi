#include <stdio.h>
#include <stdlib.h>
//Conversion de farenheit a celcius
int main()
{
    printf("Vamos a transformar de grados Farenheit a grados Celcius! \n \n");

    //Se declaran las variables
    float Gfarenheit;
    float Gcelcius;

    //Se pide ingresar el valor a convertir al usuario
    printf("Ingresa la temperatura en grados Farenheit: ");
    scanf("%f", &Gfarenheit);

    //Se realiza la conversion
    Gcelcius = ((Gfarenheit - 32) * 5 / 9);

    //Se muestra el resultado en pantalla
    printf("\n La temperatura en grados Celcius  es: %f \n", Gcelcius);

    return 0;
}
