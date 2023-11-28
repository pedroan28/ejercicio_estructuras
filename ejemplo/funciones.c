#include "funciones.h"
#include <stdio.h>
#include <string.h>

void pedir_datos(persona *P) {
    for (int i = 0; i < MAX; ++i) {
        printf("Ingrese los datos para la persona %d:\n", i + 1);

        printf("Nombre: ");
        fgets(P[i].nombre, sizeof(P[i].nombre), stdin);

        printf("Día de nacimiento: ");
        scanf("%d", &P[i].dia_nacimiento);

        printf("Mes de nacimiento: ");
        scanf("%d", &P[i].mes_nacimiento);

        printf("Año de nacimiento: ");
        scanf("%d", &P[i].year_nacimiento);

        // Consume el carácter de nueva línea dejado en el búfer de entrada por scanf
        getchar();
    }
}

void mostrar_datos(persona *P) {
    for (int i = 0; i < MAX; ++i) {
        printf("Datos de la persona %d:\n", i + 1);
        printf("Nombre: %s\n", P[i].nombre);
        printf("Fecha de nacimiento: %d/%d/%d\n", P[i].dia_nacimiento, P[i].mes_nacimiento, P[i].year_nacimiento);
    }
}