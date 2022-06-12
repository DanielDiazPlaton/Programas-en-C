/******************************************************************************

                             ARRAY TRHOUGH HISTOGRAM.
                                Daniel Diaz Platon
                               Sunday May 29, 2022

*******************************************************************************/

#include <stdio.h>
#define TAMANIO 10

int main(){

    int n[ TAMANIO ] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int i; // Contador for externo para los elementos del arreglo
    int j; // contador for interno cuenta *s en cada barra del histograma

    printf( "%s%13s%17s\n", "Elemento", "Valor", "Histograma" );

    for ( i = 0; i < TAMANIO; i++ ){
        printf( "%7d%13d        ", i, n[ i ]);

        for ( j = 1; j <= n[ i ]; j++ ){
            printf( "%c", '*' );
        } // end for inside

            printf( "\n" );
    } // end for outside

    return 0;

} // End main function



