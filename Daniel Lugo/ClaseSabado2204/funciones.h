typedef struct
{
    int idSerie;
    char titulo[50];
    int temporadas;
    char genero[50];
}Eseries;

typedef struct
{
    int idCliente;
    char nombre[50];
    int idSerie;
}Ecliente;

void cargarSerie(Eseries series[]);
void cargarCliente(Ecliente cliente[]);
void mostrarSerieCliente(Eseries series[], Ecliente cliente[], int, int);
