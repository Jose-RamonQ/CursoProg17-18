/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Main.c
 * Author: pc05
 *
 * Created on 17 de noviembre de 2017, 13:46
 */

//#include <stdio.h>
//#include <stdlib.h>

/*
 * 
 */
/*int NumRomanos (void); // Le decimos que hay una función llamada NumRomanos
int LetraDNI (void); // Le decimos que hay una función llamada LetraDNI
int main(void) 
{
int eleccion, menu;
menu = 3;
while (menu != 0)
{
printf ("Elige una opción:\n"); // "\n" es el salto de linea.
printf ("\t1.- Calcular letra DNI.\n"); // "\t" es el tabulado.
printf ("\t2.- Convertir número a romano.\n"); // "\t" es el tabulado.
printf ("\t0.- Finalizar.\n");
scanf ("%i", &eleccion);

switch (eleccion)
    {
    case 1:
        printf ("Has elegido la opción 1.- Calculo DNI.\n");
        LetraDNI(); // Llamamos a la función
        printf("Pulsa Intro para continuar\n");
        system("read pause"); // Esta opcion es solo valido para intro.
        break;
    case 2: 
        printf ("Has elegido la opción 2.- Convertir número a romano.\n");
        NumRomanos ();
        printf("Pulsa Intro para continuar\n");
        system("read pause"); // Esta opcion es solo valido para intro.
        break; 
    case 0: 
        //printf ("Has elegido la opción 0.- Finalizar.\n");
        menu=0;
        break;         
    }
}
printf ("Has elegido la opción 0.- Finalizar.\n");
return 0;
}*/

