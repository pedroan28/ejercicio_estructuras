#include <stdio.h>
#include "funciones.h"




void mostrar_fraccion(fracciones fres){

   printf("%d\n---\n%d\n", fres.numerador, fres.denominador); 

}

void pedir_fraccion(fracciones *fraccion) {
    printf("Dime el numerador: ");
    fflush(stdout);
    scanf("%d", &(fraccion->numerador));

    printf("Dime el denominador: ");
    fflush(stdout);
    scanf("%d", &(fraccion->denominador));
}

fracciones multiplicar(fracciones f1, fracciones f2){
    fracciones fres;

    fres.numerador=f1.numerador*f2.numerador;
    fres.denominador=f1.denominador*f2.denominador;

    return fres;
}

fracciones dividir (fracciones f1, fracciones f2){

    fracciones fres;

    fres.numerador = f1.numerador * f1.denominador;
    fres.denominador = f1.denominador * f2.numerador;

    return fres;
}
