#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno=0;
    float numeroDos=0;

    while(seguir=='s')
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

        scanf("%d",&opcion);
        fflush(stdin);

        switch(opcion)
        {
            case 1:
                numeroUno=valNum("ingrese el primer numero: ",99999,-99999);
                //fflush(stdin);
                printf("el numero es %f",numeroUno);
                break;
            case 2:
                printf("segundo numero: ");
                scanf("%f", &numeroDos);
                fflush(stdin);
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }
    return 0;
    }
}
