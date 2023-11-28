#include <stdio.h>
#include  "funciones.c"
#include <string.h>
#define TAM 20
typedef struct 
    {
        char nombre[TAM];
        char apellidos[TAM];
        int edad;
        float peso;
        float altura;

    }persona;

int main(){

    // struct persona P1;

    // printf("Dime tu nombre: \n");
    // fgets(P1.nombre,TAM, stdin);
    // P1.nombre[strlen(P1.nombre) - 1] = '\0';

    // printf("Dime tus apellidos: \n");
    // fgets(P1.apellidos,TAM,stdin);
    // P1.apellidos[strlen(P1.apellidos) - 1] = '\0';

    // printf("Dime tu edad: \n");
    // scanf("%d", &P1.edad);

    // printf("%s,%s,%d", P1.nombre , P1.apellidos, P1.edad);
    
    persona P1;
    
    printf("Dime tu nombre: ");
    fgets(P1.nombre,TAM,stdin);
    P1.nombre[strlen(P1.nombre)-1] = '\0';
    printf("Dime cuanto pesas en Kg: ");
    scanf("%f", &P1.peso);

    printf("Dime cuanto mides en m: ");
    scanf("%f", &P1.altura);
    
    
    printf("Tu masa corporal es de %.2f.", imc(P1.peso, P1.altura));
    printf("%s", P1.nombre);

    
}