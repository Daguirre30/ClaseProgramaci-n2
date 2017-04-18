#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define E 5

int main()
{
    struct Eempleado empleado[E];
    int opcion;

    do
    {
        printf("1. Alta de empleado\n 2. Modificaciòn \n 3. Baja \n 4. Ordenar \n, 5. Mostrar\n 6. Salir \n);
        printf("Seleccione una opciòn");
        scanf("%d",&opcion);
    }while (opcion != 6);


    return 0;
}
