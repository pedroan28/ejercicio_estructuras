#define MAX 2
typedef struct {
    char nombre[50];
    int dia_nacimiento;
    int mes_nacimiento;
    int year_nacimiento;
} persona;

void pedir_datos(persona *P);
void mostrar_datos(persona *P);
// persona buscar_mes(persona *P, int mes);
