#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

struct Eempleado
{
    int legajos;
    char nombre[50];
    float sueldos;
    int estados;
};

void cargarEmpleado (struct Eempleado[], int tam);
void eliminarEmpleado (struct Eempleado[], int tam);
void modificarEmpleado (struct Eempleado[], int tam);
void ordenarEmpleado (struct Eempleado[], int tam);


#endif // FUNCIONES_H_INCLUDED


