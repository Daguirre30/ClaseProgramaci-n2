#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define E 5

int main()
{
    /*legajo nombre sueldo*/
    Eempleado empleado[E];

    int legajos[E], estado[E]= {0}, i, j;
    int auxInt, flagEncontro=0;
    char nombres[E][20], auxString[20];
    float sueldos[E], auxFloat;
    int opcion;
    char seguir ='s', respuesta;

    init(empleado, E);

    do
    {
        printf("1.Alta\n2.Baja\n3.Modificacion\n4.ordenar\n5. mostrar\n6.salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarEmpleado(empleado, E);
            break;
        case 2:
            eliminarEmpleado(empleado, E);
            break;
        case 3:

            modificarEmpleado(empleado, E);
            break;
        case 4:
            ordenarEmpleado(empleado, E);
            break;

        case 5:

            printf("Legajo\tnombre\tsueldo\n");
            for(i=0; i<E; i++)
            {
                if(estado[i]!=0)
                    printf("%d\t%s\t%.2f\n", legajos[i],nombres[i],sueldos[i]);
            }

            break;
        case 6:
            seguir='n';
            break;
        }
    }
    while(seguir=='s');

    printf("Hello world!\n");
    return 0;
}


