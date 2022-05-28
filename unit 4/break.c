/******************************************************************************

                            Break and Continue
                            DANIEL DIAZ PLATON
                              April 12, 2022

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x; // contador
    
    for( x =1; x <= 10; x++ ){
        
        // si x es 5 termina el ciclo
        if( x == 5 )
            break; // Termina el ciclo for, break sirve para ocacionar la salida inmediata de una instruccion
            
        printf( "%d", x ); // despliega el valor de x
        
    } // End for
    
    printf( "\nRompe el ciclo en x == %d", x );

    return 0; // indica que el programa termino bien
    
} // End main