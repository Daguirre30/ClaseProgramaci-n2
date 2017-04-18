#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

/** \brief Carga de un nuevo empleado
  * \param  primer numero ingresado
  * \param  segundo numero ingresado
  * \return resultado de la suma
  *
  */

  void cargarEmpleado(struct Eempleado empleado[], int tam)
  {
    int flagEncontro =0, i;
    for(i=0; i<tam; i++)

    {
        if(empleado[i].estados==0)
        {
            printf("Ingrese legajo");
            scanf("%d", &empleado[i].legajos);
            printf("Ingrese nombre");
            scanf("%s", empleado[i].nombre);
            printf("Ingrese sueldo");
            scanf("%f", &empleado[i].sueldos);
        }

    }
  }


  /** \brief Carga de un nuevo empleado
  * \param  primer numero ingresado
  * \param  segundo numero ingresado
  * \return resultado de la suma
  *
  */

  void eliminarEmpleado(struct Eempleado empleado[], int tam)
  {
    int flagEncontro =0, i;
    int auxiliar;
    char respuesta;
    printf("Ingrese legajo");
    scanf("%d", &auxiliar);

    for(i=0; i<tam; i++)

    {
        if(empleado[i].estados==1)
        {
            {
                if(auxiliar == empleado[i].legajos)
                {
                    printf("%d\t%s\t%.2f\n", empleado[i].legajos, empleado[i].nombres, empleado[i].sueldos)
                }
            }
            printf("Ingrese legajo");
            scanf("%d", &empleado[i].legajos);
            printf("Ingrese nombre");
            scanf("%s", empleado[i].nombre);
            printf("Ingrese sueldo");
            scanf("%f", &empleado[i].sueldos);
        }

    }
  }


