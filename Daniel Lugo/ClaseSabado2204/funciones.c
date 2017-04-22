#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"



void cargarSerie(Eseries series[])
{
    int i;
    int id[5] = {1,2,3,4,5};
    char titulo [5][20]= {"TBBT", "GOT","Friends", "GOTHAN","BB"};
    int temporada[5][20]={1,2,3,4,5};
    char genero [5][20]= {"Comedia", "Drama", "Ficcion"};

    for(i=0; i<5; i++)
    {
        series[i].idSerie= id[i];
        strcpy(series[i].titulo, titulo[i]);
        strcmp(series[i].temporadas, temporada[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void cargarCliente(Ecliente cliente[])

{

    char nombre [10][20]= {"Juan", "Pedro", "Carlos", "Gaston",
    "Daniel", "Pablo", "Coraje", "Tarzan", "Bllanca", "Yani"};
    int i;
    int id[10] = {100,99,54,35,45,99,85,72,22,35};
    int idSerie[5] = {1,2,3,4,5,5,4,1,1,3};

    for(i=0; i<10; i++)
    {
        cliente[i].idCliente = id[i];
        strcpy(cliente[i].nombre, nombre[i]);
        cliente[i].idSerie = idSerie[i];

    }
}

void mostrarSerieCliente(Eseries series[], Ecliente cliente[], int tamS, int tamC);
{
    int i,j;
    int C
    int S;

    for(i=0; i<5; i++)
    {
        for(j=0;j<10;j++)
        {
            if(series[i].idSerie == cliente[j].idSerie)
            {

            }

        }
    }
}
