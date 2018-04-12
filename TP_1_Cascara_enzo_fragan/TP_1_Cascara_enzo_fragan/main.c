#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir;
    int opcion=0;
    float numeroUno=0;
    float numeroDos=0;
    float resultado;
    float segundoFactor;

    do{

        opcion=menu(numeroUno, numeroDos);

        scanf("%d",&opcion);
        fflush(stdin);

        switch(opcion)
        {
            case 1:
                numeroUno=valNum("ingrese el primer numero: ");
                fflush(stdin);
                break;
            case 2:
                numeroDos=valNum("ingrese el segundo numero: ");
                fflush(stdin);
                break;
            case 3:
                resultado=sumar(numeroUno,numeroDos);
                printf("\nel resultado de la suma es: %f \n\n",resultado);
                break;
            case 4:
                resultado=restar(numeroUno,numeroDos);
                printf("\nel resultado de la resta es: %f \n\n",resultado);
                break;
            case 5:
                resultado=dividir(numeroUno,numeroDos);
                printf("\nel resultado de la divicion es: %f \n\n",resultado);
                break;
            case 6:
                resultado=multiplicar(numeroUno,numeroDos);
                printf("\nel resultado de la multiplicacion es: %f \n\n",resultado);
                break;
            case 7:
                resultado=factores(numeroUno);
                segundoFactor=factoresDos(numeroDos);
                printf("\nel resultado del factor del primer numero es: %f \n\n y del segundo numero es: %f \n\n",resultado);
                break;
            case 8:
                resultado=operadores(numeroUno,numeroDos);
                break;
            case 9:
                fflush(stdin);
                printf("Desea ingresar otro dato S/N?");
                scanf("%c",&seguir);
                break;
        }

    }while(seguir!='n');
    return 0;
}
