#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

/** \brief  Valido numero ISDIGIT
  * \param  buscar el array del productoArray
  * \param  indica longitud del array
  * \param  Recibe parametro Importe
  * \param tam es el valor que se le asignara al estado
  * \return -
  */


/** \brief  Inicializo el estado de un array de productos
  * \param  buscar el array del productoArray
  * \param  indica longitud del array
  * \param  Recibe parametro Importe
  * \param tam es el valor que se le asignara al estado
  * \return -
  */

    void estadoProducto(productos productoArray[],  int tam)
    {
        int i;
        for(i=0;i<tam;i++)
        {
            productoArray[i].estado = tam;
        }


    }



/** \brief  Carga de un nuevo producto
  * \param  Recibe parametro codigo
  * \param  Recibe parametro descripcion
  * \param  Recibe parametro Importe
  * \return array para la estructura
  *
  */

  void altaProducto(productos productoArray[], int tam)
  {
    int flagEncontro =0, i;
    for(i=0; i<tam; i++)

    {
        if(productoArray[i].estado==0)
        {
            printf("Ingrese codigo del prodcuto\n");
            scanf("%d", &productoArray[i].codigo);
            printf("Ingrese descripcion\n");
            scanf("%s", productoArray[i].descripcion);
            printf("Ingrese precio del producto\n");
            scanf("%f", &productoArray[i].importe);
         
           productoArray[i].estado=1;
           flagEncontro =1;
          
  
            system("cls");
            break;
        }
        if(!flagEncontro)
        {
         printf("No hay espacio suficiente");
        } 
    }
  }

/** \brief modificar un producto
  * \param  Recibe parametro codigo
  * \param  Recibe parametro descripcion
  * \param  Recibe parametro Importe
  * \return array para la estructura
  *
  */

    void bajaProducto (productos productoArray[], int tam)
    {


    int flagEncontro =0, i;
    int auxiliar;
    char respuesta;
    printf("Ingrese codigo de producto");
    scanf("%d", &auxiliar);

    for(i=0; i<tam; i++)

     {
        if(productoArray[i].estado==1)
        {
            {
                if(auxiliar == productoArray[i].codigo)
                {
                    printf("%d\t%s\t%.2f\n", productoArray[i].codigo, productoArray[i].descripcion, productoArray[i].importe);
                    printf ("Esta seguro de eliminar el producto s/n");
                    respuesta = scanf("%s", respuesta);
                    if(respuesta == 's')
                    {
                        productoArray[i].estado =0;
                    }
                    else
                    {
                        printf("Accion cancelada por el usuario");
                    }
                    flagEncontro=1;
                    break;

                }
            }

        }
        if(flagEncontro == 0)
        {
            printf("Dato inexistente");
        }
    }
}

