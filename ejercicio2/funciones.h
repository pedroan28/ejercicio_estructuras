#ifndef __funciones_h_
#define __funciones_h_
#define MAX 2

typedef struct 
{
    int denominador ;
    int numerador;

}fracciones;

int menu (void);
void pedir_fraccion(fracciones *fraccion);
void mostrar_fraccion(fracciones faccion);
fracciones multiplicar(fracciones f1, fracciones f2);
fracciones sumar_fraccion(fracciones f1, fracciones f2);
fracciones dividir (fracciones f1, fracciones f2);
fracciones restar_fracciones(fracciones f1, fracciones f2);
fracciones simplificar(fracciones f1, fracciones f2);
int mcd(int n1, int n2);

#endif // __funciones_h_