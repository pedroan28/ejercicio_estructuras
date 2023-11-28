#include <stdio.h>
#include "funciones.c"
#include "funciones.h"
#include <string.h>
 #include <stdlib.h>
 #include <windows.h>
int main(void) {
    int opcion;
    fracciones F1, F2, F3;

    pedir_fraccion(&F1);
    pedir_fraccion(&F2);

    do {
        
        printf("Dime qu quieres hacer con la fraccion: \n");
        printf("1- Multiplicar.\n");
        printf("2- Dividir.\n");
        printf("3- Sumar.\n");
        printf("4- Restar.\n");
        printf("5- Salir\n");
        fflush(stdout);
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Dime otra fraccion para multiplicarla por la anterior: \n");
                mostrar_fraccion(multiplicar(F1, F2));
                system("pause");

                break;
            case 2:
                printf("Este es el resultado: \n");
                F3 = dividir(F1,F2);
                mostrar_fraccion(F3);
                system("pause");
                break;
            case 3:
                printf("El resultado de la suma es¨: \n");
                mostrar_fraccion(sumar_fraccion(F1,F2));
                
            
            case 4:

                printf("El resultado de la resta es: \n");
                mostrar_fraccion(restar_fracciones(F1,F2));

            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intentalo de nuevo.\n");
        }
    } while (opcion != 5);

    
}