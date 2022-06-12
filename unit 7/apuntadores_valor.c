/******************************************************************************

                             OPERATOR PASS FOR VALUE
                                Daniel Diaz Platon
                               Saturday June 11, 2022

*******************************************************************************/

#include <stdio.h>

int cuboPorValor( int n );                          // Prototipo

int main(){

    int numero = 5; // inicializa numero

    printf( "el valor original de numero es %d", numero );

    // pasa numero por valor a cuboPorValor
    numero = cuboPorValor( numero );

    printf( "\nEl nuevo valor de numero es %d\n", numero );

    return 0;

}  // End main


int cuboPorValor( int n ){

    return n * n * n; // eleva al cubo la variable local n y devuelve el
                        // resultado

}  // End function cuboPorValor





