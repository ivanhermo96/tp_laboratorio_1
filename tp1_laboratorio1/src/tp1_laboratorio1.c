/*
 ============================================================================
 Name        : tp1_laboratorio1.c
 Author      : Ivan Alejandro Hermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Functions_v1.15.4.2022.h" /*librer?a de funciones utilizadas en el programa para la ejecuci?n de
                                    distintas acciones seg?n se requieran en las distintas opciones ofrecidas*/


int main(){

    int opcion;             //variable de control para las iteraciones (si vale 6, el programa finaliza)
    int x; //kilometros
    int y; //aerolineas     //variables x, y, z declaradas y utilizadas para la carga de datos
    int z; //latam
    int flagSeguir = 0;
    int flagKm = 0;         // los tres flags son utilizados para verificar que el usuario no pueda ejecutar
    int flagEmpresa = 0;    //acciones consecuentes sin antes haber cargado los datos necesarios, por ejemplo
                            //no poder calcular costos sin antes haber ingresado la cantidad de kil?metros

    do{
        menuPrincipal();        //iteraci?n do while para que el programa se ejecute al menos una vez, y tantas
        fflush(stdin);          // veces como el usuario desea hasta que seleccione la opci?n indicada para finalizar
        scanf("%d", &opcion);

        switch(opcion){         //a trav?s del switch, el c?digo ejecutar? la acci?n deseada en correlaci?n
                                // a las opciones que ofrece el menu en base al d?gito (la opci?n) que el
            case 1:             // usuario introduce en la consola de comandos
                printf("\nIngresar Kilometros: ");
                fflush(stdin);
                scanf("%d", &x);
                printf("Ingreso %d km\n", x);
                flagKm = 1;
                system("pause");
                break;
            case 2:
                if(flagKm == 0){
                    printf("\nNo puede seleccionar una empresa sin antes indicar la cantidad de kilometros\n");
                    system("pause");
                }else{
                    printf("\nPrecio vuelo Aerolineas: ");
                    fflush(stdin);
                    scanf("%d", &y);
                    printf("\nPrecio vuelo Latam: ");
                    fflush(stdin);
                    scanf("%d", &z);
                    printf("\nIngreso $ %d para Aerolineas y $ %d para Latam\n", y, z);
                    system("pause");
                    flagEmpresa = 1;
                    }
                break;
            case 3: /*No entend? la diferencia entre la consigna 3 y 4, o sea, me pareci? que eran
                exactamente lo mismo, por ende, redundante mostrar dos veces la misma cosa
                en 2 men?s diferentes, en consecuencia solamente agreg? una l?nea de
                mensaje para la opci?n 3 del men? */
                if(flagKm == 1 && flagEmpresa == 1){
                printf("Cuentas ejecutadas, vaya al menu 4 para ver los resultados\n");
                }else{
                printf("Para generar los calculos debe haber ingresado los kilometros y los precios por empresas\n");
                }system("pause");
                break;
            case 4:
                fflush(stdin);
                if(flagKm == 1 && flagEmpresa == 1){
                printf("\nAerolineas\n");
                calculoMultiple(x, y);
                printf("\nLatam\n");
                calculoMultiple(x, y = z);}else{
                printf("\nPara Ejecutar los calculos debe haber ingresado los kilometros y luego los costos por empresa\n");}
                system("pause");
                break;
            case 5:
                fflush(stdin);
                x = 7090;
                y = 162965;
                z = 159339;
                printf("\nAerolineas\n");
                calculoMultiple(x, y);
                printf("\nLatam\n");
                calculoMultiple(x, y = z);
                int diferencia = calculoDiferencia(&x, &y, &z);
                printf("\nLa diferencia es %d\n", diferencia);
                system("pause");
                break;
            case 6:
                flagSeguir = 1;
                printf("\nPrograma Finalizado\n");
                break;
            default:
                printf("\nOpcion Invalida\n");
                system("pause");
        }

    }while(flagSeguir == 0);

    return 0;
}
