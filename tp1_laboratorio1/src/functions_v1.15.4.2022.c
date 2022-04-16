/*
 * functions_v1.15.4.2022.c
 *
 *  Created on: 16 abr. 2022
 *      Author: ivana
 */
#include <stdio.h>
#include <stdlib.h>

void menuPrincipal(){
        system("cls");
        printf("*** Menu de Opciones ***\n");
        printf("1 - Ingresar Precio de Vuelos :\n");
        printf("2 - Indicar precio x km segun Empresa\n");
        printf("3 - Calcular Costos\n");
        printf("4 - Informe de Resultados\n");
        printf("5 - Carga Forzada de Datos\n");
        printf("6 - Finalizar Programa\n");
        printf("\nIndique Opcion:\n");

}

int calculoMultiple(int x, int y){

    int total;
    int precioDeb;
    int precioCred;
    float bitC = 4606954.55;
    float precioBit;
    float precioXkm;

    total = x * y;
    precioDeb = total - ((total/100) * 10);
    precioCred = total + ((total/100) * 25);
    precioBit = total / bitC;
    precioXkm = y / x;

    printf("\nKilometros ingresados: %d\n", x);
    printf("A)Precio Total: $%d\n", total);
    printf("B)Precio con tarjeta de debito: $%d\n", precioDeb);
    printf("C)Precio con tarjeta de credito: $%d\n", precioCred);
    printf("D)Precio con pagando con bitcoin: $%.2f\n", precioBit);
    printf("E)Mostrar precio unitario: $%.2f\n", precioXkm);

    return 0;
}

int calculoDiferencia(int x, int y, int z){

    int diferencia = (x * y) - (x * z);

    return diferencia;
}



