typedef struct{
    int legajos, estado;
    char nombres[20];
    float sueldos;
}Eempleado;

void cargarEmpleado(Eempleado[], int);
void eliminarEmpleado(Eempleado[], int);
void modificarEmpleado(Eempleado[], int);
void ordenarEmpleado(Eempleado[], int);
void init(Eempleado[], int);
