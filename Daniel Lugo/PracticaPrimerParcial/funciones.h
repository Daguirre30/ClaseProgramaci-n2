#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct{
int idAbonado;
char telefono[15];
char nombre[50];
char apellido[50];
int estado;

}Eabonado;

typedef struct{
int idLlamada;
int idAbonado;
char motivo[20];
char duracion [100];
char estadoReclamo[50];
int estado;

}Ereclamos;

typedef struct {
int idAbonado;
int contadorLlamada=0;

}Econtador;


void altaAbonado (Eabonado abonado[], int)
void modificaAbonado(Eabonado abonado[],int)
void bajaAbonado(Eabonado abonado[], int)
void nuevaLlamada();



int validarNumero(char str[]);
int validarLetra(char str[]);
int validarFloat(char str[]);
int validarTelefono(char str[]);
int validarAlfaNume(char str[]);





#endif // FUNCIONES_H_INCLUDED
