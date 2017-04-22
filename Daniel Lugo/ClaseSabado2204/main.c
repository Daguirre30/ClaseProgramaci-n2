#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define E 5
#define C 10

int main()
{
    Eseries series[E];
    Ecliente cliente[C];
    int i;
    int c;

    cargarSerie(series);
    for(i=0; i<E; i++)
    {

        printf("%d\t%s\n",series[i].idSerie, series[i].titulo);

    }
    cargarCliente(cliente);
    for(i=0; i<C; i++)
    {

        printf("%d\t%\n", cliente[i].idCliente, cliente[i].nombre);
    }

 return 0;

}
