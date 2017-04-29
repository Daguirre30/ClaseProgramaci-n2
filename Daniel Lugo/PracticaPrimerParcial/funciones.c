#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"












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

