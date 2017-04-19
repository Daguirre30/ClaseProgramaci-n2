#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct{
    int codigo;
    char descripcion [51];
    float importe;
    int cantidad;
    int estado;
}productos;

void altaProducto (productos productoArray[], int );
void modificarProducto (productos productoArray[], int );
void bajaProducto (productos productoArray[], int );
void listarProducto (productos productoArray[], int );
void estadoProducto (productos productoArray[],int);


#endif // FUNCIONES_H_INCLUDED
