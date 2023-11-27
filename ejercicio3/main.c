#include <stdio.h>
#include  "funciones.c"
#include <string.h>
#define TAM 20
typedef struct 
    {
        char nombre[TAM];
        float peso;
        float altura;

    }persona;

int main(){

    persona P1;
    
    printf("Dime tu nombre: ");
    fgets(P1.nombre,TAM,stdin);
    P1.nombre[strlen(P1.nombre)-1] = '\0';

    printf("Dime cuanto pesas en Kg: ");
    scanf("%f", &P1.peso);

    printf("Dime cuanto mides en m: ");
    scanf("%f", &P1.altura);
    
    
    printf("Tu masa corporal es de %.2f.", imc(P1.peso, P1.altura));

    
}