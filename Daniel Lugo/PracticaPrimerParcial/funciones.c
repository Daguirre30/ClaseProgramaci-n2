#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"





/** \brief función para dar de alta a una abonado
  * \param1 recibe un array de la estructura abonado
  * \param2 recibe la cantidad definida
  * \return void
  *
  */

//funcion para dar de alta una abonado

void altaAbonado(Eabonado abonado[], int cantidad)
{
    system("clear");
    int flagEncontro=0;
    int i;


    for(i=0; i<cantidad; i++)
    {
        if(abonado[i].estado == 0) // si esta desocupada esa posicion
        {
            abonado[i].idAbonado == i+1;
            printf("ID del abonado\n");
            abonado[i].estado = 1;
            printf("Ingrese nombre del abonado\n");// ingreso nombre, edad, etc.
            gets(abonado[i].nombre);
            while(strlen(abonado[i].nombre)>=51)
            {
                printf("Error, el nombre  debe ser menor a 50\n");
                printf("Ingrese nombre del abonado\n");
                fflush(stdin);
                gets(abonado[i].nombre);
            }
            while(ValidarLetra(abonado[i].nombre)==0)
            {
                printf("Error, el nombre  debe ser solo letra\n");
                printf("Ingrese nombre de la abonado\n");
                fflush(stdin);
                gets(abonado[i].nombre);
            }
            fflush(stdin);
            printf("Apellido\n");
            gets(abonado[i].apellido);
           while(ValidarLetra(abonado[i].apellido)==1)
            {
                printf("Error, el apellido debe ser solo letra\n");
                printf("Ingrese apellido del abonado\n");
                fflush(stdin);
                gets(abonado[i].apellido);
            }

            break;
        }
    }
    if(flagEncontro == 0)
    {
        printf("No hay espacio suficiente\n");
    }

}


/** \brief función para dar de baja a un ID
  * \param1 recibe un array de la estructura
  * \param2 recibe la cantidad definida
  * \return void
  *
  */
// funcion que da de baja la persona

void bajaAbonado(Eabonado abonado[], int cantidad)
{
    system("clear");

    int flagEncontro =0;
    int i;
    int auxiliar;
    char respuesta;
    printf("Ingrese ID del abonado\n");
    scanf("%d",&auxiliar);
    system("clear");

    for(i=0; i<cantidad; i++)
    {
       if(auxiliar == atoi(abonado[i].idAbonado)&& (abonado[i].estado==1))
        {
            printf("ID   \tnombre + apellido\n");
            printf("%s\t%s\t%s\n",abonado[i].idAbonado, abonado[i].nombre, abonado[i].apellido);
            printf("Estas seguro de eliminar este dato s/n\n");
            scanf("%s",&respuesta);
            system("clear");
            if(respuesta == 's')
            {
                abonado[i].estado = 0;
                printf("Se ha eliminado correctamente\n");

            }
            if(respuesta == 'n')
            {
             printf("Accion cancelada por el usuario\n");
            }
            flagEncontro = 1;
            break;
            }
    }
    if(flagEncontro ==0)
    printf("El ID no existe\n");


}




/** \brief función para validar que lo ingresado sea letras
  * \param1 recibe un array de char
  * \return true o false (1 o 0)
  *
  */
//Validar letras
ValidarLetra(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
        if((str[i] <'a' || str[i] >'z') && (str[i] !=' ') && (str[i] <'A' || str[i] >'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;

}

/** \brief función para validar que lo ingresado sean numeros
  * \param1 recibe un array de char
  * \return true o false (1 o 0)
  *
  */
//validar Numeros
int ValidarNumero(char str[])
{
 int i=0;

    while(str[i] != '\0')
    {
        if(str[i]<'0' || str[i] >'9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}

/** \brief función para validar que lo ingresado sean numeros de tipo flotante
  * \param1 recibe un array de char
  * \return true o false (1 o 0)
  *
  */

int validarFloat(char str[])

{
    int i =0;
    int contadorPuntos=0;

    while(srt[i]!= '\0')
    {
        if(i==0 && str[i]=='-')
        {
            i++;
            continue;
        }
        if(srt[i]== '-' && contadorPuntos ==0)
        {
            contadorPuntos++;
            continue;
        }
        if(str[i]<'0' || str[i] >'9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}

/** \brief función para validar que lo ingresado sea solo alfa numerico
  * \param1 recibe un array de char
  * \return true o false (1 o 0)
  *
  */

int validarAlfaNume(char str[]);
{
   int i=0;

    while(str[i] != '\0')
    {
        if((str[i] <'a' || str[i] >'z') && (str[i] !=' ') && (str[i] <'A' || str[i] >'Z') && (str[i]<'0' || str[i] >'9'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}


/** \brief función para validar que lo ingresado sea solo numeros, + y -
  * \param1 recibe un array de char
  * \return true o false (1 o 0)
  *
  */
int validarTelefono(char str[]);

{
    int i=0;
    int contadorGuiones=0;

     while(srt[i]!= '\0')
    {
        if((srt[i]!= ' ') && (str[i]!='-') && (str[i]<'0' || str[i] >'9'))
        {
            return 0;
        }
        if(str[i]== '-')
        {
            contadorGuiones++;
        }
        i++;
    }

    if(contadorGuiones==1)
    {
        return 1;
    }

    return 0;
}

/** \brief función para validar que unicidad del ID
  * \param1 recibe un array de la estructura
  * \param2 recibe la cantidad definida
  * \return true o false (1 o 0)
  *
  */
int validarUnicidad(Eabonado abonado[], int cantidad)
{
    int i=0;
    for(i=0; i<cantidad; i++)
    {
        if(abonado[i].idAbonado==dato && abonado[i].estado==1)
        {
            return 1;
        }
    }
    return 0;
}


/** \brief inicializa el array .
*
* \param numero entero para recorrer el for .
* \param
* \param  .
* \return
*
*/

void inicializar(Eabonado abonado[], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {

        abonado[i].estado=0;

    }

}

/** \brief inicializa el array .
*
* \param1 recibe un array de estructura .
* \param2 recibe ña cantidad definida del array
* \return retorna el id que corresponde a la casilla
*
*/
void asignarID(Eabonado abonado [], int cantidad)
{
  int i;
 
  for(i=0; i<cantidad; i++)
  {
   
    if(abonado[i].estado == 0)
    {
      abonado[i].idAbonado == i+1;
    }

  }


}
