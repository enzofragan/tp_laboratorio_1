#include "funciones.h"
#include <stdio.h>
#include <ctype.h>

int menu(float numeroUno, float numeroDos)
{
        printf("1- Ingresar 1er operando (A= %f)\n",numeroUno);
        printf("2- Ingresar 2do operando (B= %f)\n",numeroDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
}
float valNum(char error())
{
    float numero;
    printf("%s", error);
    setbuf(stdin,NULL);
    while(scanf("%f", &numero) ==0)
    {
        printf("Error, ingrese un numero valido %s", error);
        scanf("%f", &numero);
    }
    return numero;
}

float sumar(float numeroUno, float numeroDos)
{
    float suma;

    suma= numeroUno + numeroDos;

    return suma;
}
float restar(float numeroUno, float numeroDos)
{
    float resta;

    resta= numeroUno - numeroDos;

    return resta;
}
float multiplicar(float numeroUno, float numeroDos)
{
    float multiplicacion;

    multiplicacion= numeroUno * numeroDos;

    return multiplicacion;
}
float dividir(float numeroUno, float numeroDos)
{
    float divicion;

    divicion= numeroUno / numeroDos;

    return divicion;
}
float factores(float numero)
{
    float factor;
    if(numero==0)
    {
        factor = 1;
    }
    else
    {
        factor=numero * factores(numero-1);
    }

    return factor;
}
float factoresDos(float numeroDos)
{
    float factorDos;
    if(numeroDos==0)
    {
        factorDos = 1;
    }
    else
    {
        factorDos=numeroDos * factoresDos(numeroDos-1);
    }

    return factorDos;
}

float operadores(float numeroUno, float numeroDos)
{
    float suma;
    float resta;
    float multiplicacion;
    float divicion;
    float factorial;
    float factorialDos;

    suma=sumar(numeroUno,numeroDos);
    resta=restar(numeroUno,numeroDos);
    multiplicacion=multiplicar(numeroUno,numeroDos);
    divicion=dividir(numeroUno,numeroDos);
    factorial=factores(numeroUno);
    factorialDos=factoresDos(numeroDos);

    printf("\nel resultado de la suma es: %f \nel resultado de la resta es: %f",suma,resta);
    printf("\nel resultado de la multiplicacion es: %f \nel resultado de la divicion es: %f",multiplicacion,divicion);
    printf("\nel resultado del factorial de primer numero es: %f \ny del segundo numero es: %f \n\n",factorial,factorialDos);
}
