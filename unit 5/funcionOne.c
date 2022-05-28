/******************************************************************************

            Creacion y uso de una funcion definida por el usuario
                            DANIEL DIAZ PLATON
                              April 12, 2022

*******************************************************************************/

#include <stdio.h>

int cuadrado( int y ); // Prototipo de la funcion

int main()
{
    
    int x; // Contador
    
    for( x = 1; x <= 10; x++ ){
        
        printf( "%d ", cuadrado( x ) ); // Imprime el cuadrado de los valores
        
    } // End for
    
    printf("\n");

    return 0;
} // End main

// Definicion de la funcion cuadrado, devuelve el cuadrado del parametro
int cuadrado( int y ){
    
    return y * y; // Retorna el cuadrado de el parametro y como entero
    
} // End cuadrado