/*
 * functions_v1.15.4.2022.h
 *
 *  Created on: 16 abr. 2022
 *      Author: ivan alejandro hermo
 */

#ifndef FUNCTIONS_V1_15_4_2022_H_INCLUDED
#define FUNCTIONS_V1_15_4_2022_H_INCLUDED

/** \brief crea un menú de 6 opciones
 *
 * \return int entrega 6 printf con texto hardcodiado
 *
 */
void menuPrincipal();

/** \brief genera los cálculos de distintos costos y los muestra en pantalla
 *
 * \param int recibe un valor de una variable "x"
 * \param int recibe un valor de una variable "y"
 * \return int entrega los resultados de distintos calculos y los muestra en pantalla
 *
 */
int calculoMultiple(int, int);

/** \brief calcula la diferencia entre el resultado de la multiplicación de dos variables diferentes
que comparten una variable como multiplicador de la misma
 *
 * \param x int variable compartida multiplicadora
 * \param y int variable independiente que recibe su valor en el código principal
 * \param z int variable independiente que recibe su valor en el código principal
 * \return int retorna una variable con el resultado de la operación matemática
 *
 */
int calculoDiferencia(int x, int y, int z);



#endif // FUNCTIONS_V1_15_4_2022_H_INCLUDED
