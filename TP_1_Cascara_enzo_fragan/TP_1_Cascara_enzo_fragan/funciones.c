#include "funciones.h"
#include <stdio.h>

float valNum(char error(), float max, float min)
{
    float numero;
    printf("%s", error);
    scanf("%f", &numero);
    while(numero<min ||numero>max)
    {
        printf("Error, ingrese un numero valido %s", error);
        scanf("%f", &numero);
    }
    return numero;
}
