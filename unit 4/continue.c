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
            continue; // Termina el ciclo for, continue sirve para ocacionar que se ignore las instrucciones
                      // siguientes y se vuelva a comparar el valor de salida
            
        printf( "%d ", x ); // despliega el valor de x
        
    } // End for
    
    printf( "\nUtiliza continue para ignorar la impresion del valor x == %d", x );

    return 0; // indica que el programa termino bien
    
} // End main