#include <stdio.h>
#include <stdlib.h>
#define 3G
#define 4G
#define equipo
#define cantidad



int main()
{ while(seguir=='s')
    {

        printf("\n1- Agregar abonado\n");
        printf("2- Modificar abonado\n");
        printf("3- Borrar abonado\n");
        printf("4- Nueva llamada\n");
        printf("5- Fin de llamada\n");
        printf("6- Informar");
        printf("7- Salir\n");
        scanf("%d",&opcion);
    while(opcion <=0 || opcion >=8)
    {
        printf("Error, seleccione opciones entre el 1 y el 7 \n");
        printf("\n1- Agregar abonado\n");
        printf("2- Modificar abonado\n");
        printf("3- Borrar abonado\n");
        printf("4- Nueva llamada\n");
        printf("5- Fin de llamada\n");
        printf("6- Informar");
        printf("7- Salir\n");
        scanf("%d",&opcion);
    }

        switch(opcion)
        {
            case 1:
                break;
            case 2:

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
                seguir = 'n';
                break;
        }
    }

    return 0;
}
