/** float matriz[2][3];
    int i,j;
    float matAux;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("M[%d][%d]: ",i,j);
            scanf("%f",&matAux);
            matriz[i][j] = matAux;

        }
    }
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {

                printf("\n%f", matriz[i][j]);
            }
        }

 printf(sizeof(void));*/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define cantidadMaxima 1001
int main()
{
    int opcion;
    productos productoArray[cantidadMaxima];
    productos productoAux;
    do
    {
        printf(" 1. Alta de producto\n 2. Modificacion \n 3. Baja \n 4. Listar \n 5. Salir \n");
        printf("Seleccione una opcion \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
            altaProducto(productoArray, cantidadMaxima);
            break;
            case 2:
            bajaProducto(productoArray, cantidadMaxima);
            break;
        }


    }while(opcion != 5);



}
