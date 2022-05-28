/*******************************************************************************************
 * 
 *                              Seleccion multiple do while
 *                                  DANIEL DIAZ PLATON
 *                                      April 9, 2022
 * 
 *******************************************************************************************/

#include <stdio.h>

int main() {

    int contador = 1; /* Inicializa el contador */

    do {
        printf( " %d ", contador ); /* Despliega el contador */
    } while( ++contador <= 10 );  // End do... while

    return 0;

} // End main

