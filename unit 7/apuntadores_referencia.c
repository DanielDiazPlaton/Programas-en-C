/******************************************************************************

                            OPERATOR PASS FOR REFERENCE
                                Daniel Diaz Platon
                               Saturday June 11, 2022

*******************************************************************************/

#include <stdio.h>

void cuboPorReferencia( int *ptrN );                    // Prototipo

int main(){

    int numero = 5;  // inicializa numero

    printf( "El valor original de numero es %d", numero );

    // Pasa la direccion de numero a cuboPorReferencia
    cuboPorReferencia( &numero );

    printf( "\nEl nuevo valor de numero es %d", numero );

    return 0;

}  // End main

void cuboPorReferencia( int *ptrN ){

    *ptrN = *ptrN * *ptrN * *ptrN;  // cubo de *ptrN

} // End function CuboPorreferencia





