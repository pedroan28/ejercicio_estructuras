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

#endif // __funciones_h_