/******************************************************************************

                 ARRAY ORDERED ASCENDEN(ORDENAMIENTO BURBUJA).
                                Daniel Diaz Platon
                               Saturday June 04, 2022

*******************************************************************************/

#include <stdio.h>
#define TAMANIO 10


int main(){

    // Inicializa a
    int a[ TAMANIO ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int pasadas; // Contador de pasadas
    int i; // Contador de comparaciones
    int almacena; // ubicacion temporal utilizada para el intercambio de elementos

    printf( "Elementos de datos en el orden original\n" );

    // Muestra el arreglo original
    for( i = 0; i < TAMANIO; i++ ){
        printf( "%4d", a[ i ] );
    }  // End for

    // Ordenamiento de burbuja
    // Ciclo para controlar el numero de pasos
    for( pasadas = 1; pasadas < TAMANIO; pasadas++ ){

        // Ciclo para controlar el numero de comparacionespor pasada
        for( i = 0; i < TAMANIO -1; i++){

            // Compara los elementos adyacentes y los intercambia si el primer elemento
            // es mayor que el segundo
            if( a[ i ] > a[ i + 1 ] ){
                almacena = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = almacena;
            } // End if

        } // End for inside 

    }  // End for outside

    printf( "\nElementos de datos en orden ascendente\n" );

    // Muestra el arreglo ordenadp
    for( i = 0; i < TAMANIO; i++ ){
        printf( "%4d", a[ i ] );
    } // End for

    printf( "\n" );

    return 0;

} // End main





