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

fracciones sumar_fraccion(fracciones f1, fracciones f2){

    fracciones fres;

    fres.numerador = f1.numerador + f2.numerador;
    fres.denominador = f1.denominador + f2.denominador;

    return fres;
}

fracciones restar_fracciones(fracciones f1, fracciones f2){

    fracciones fres;

    if (f1.denominador == f2.denominador)
    {

        fres.numerador = f2.numerador - f1.numerador;
        fres.denominador = f2.denominador;
        
        
        
    }else{

        fres.numerador = (f1.numerador * f2.denominador) - (f1.denominador* f2.numerador);
        fres.denominador = f1.denominador * f2.denominador;
    }
    

    return fres;
}

int mcd(int n1, int n2) {
		int dividendo=n1;
		int divisor=n2;
		int resto=1;

		while(resto!=0) {
			printf("%d-%d-%d\n",dividendo, divisor, resto);
			resto=dividendo%divisor;
			dividendo=divisor;
			divisor=resto;
		}
		return dividendo;
	}

	int mcm(int n1, int n2) {
		return (n1*n2)/mcd(n1,n2);
	}


fracciones simplificar(fracciones fres){

    fracciones resul;

    resul.numerador = mcm(resul.numerador , resul.denominador);
}

