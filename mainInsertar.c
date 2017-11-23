/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   insertar.c
 * Author: Programación
 *
 * Created on 23 de noviembre de 2017, 9:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void leer(int);
void main() 
{
    int numeroInsertado;
    printf("Introduzca un numero: \n");
    scanf("%d", &numeroInsertado);
    printf("Dentro de main vale %d \n",numeroInsertado); //Valor de numeroInsertado ingresado dentro de la función 'mainInsertar' 
    leer(numeroInsertado);
    printf("Dentro de main al final vale %d",numeroInsertado); //Valor de numeroInsertado ingresado dentro de la función 'leer'
    //printf("%d",leer(int)); 
}

