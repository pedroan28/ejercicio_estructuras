#include <stdio.h>
#include "funciones.c"
#include "funciones.h"
#include <string.h>

int main(void) {
    int opcion;
    fracciones F1, F2, F3;

    pedir_fraccion(&F1);
    pedir_fraccion(&F2);

    do {
        
        printf("Dime qu quieres hacer con la fraccion:\n%d\n---\n%d\n", F1.numerador, F1.denominador);
        printf("1- Multiplicar.\n");
        printf("2- Dividir.\n");
        printf("3- Salir\n");
        fflush(stdout);
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Dime otra fraccion para multiplicarla por la anterior: \n");
                
                F3 = multiplicar(F1, F2);
                mostrar_fraccion(F3);

                break;
            case 2:

                printf("Dime otra fraccion para dividir por la anterior: \n");
                
                F3 = dividir(F1,F2);
                mostrar_fraccion(F3);
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Inténtalo de nuevo.\n");
        }
    } while (opcion != 3);

    
}