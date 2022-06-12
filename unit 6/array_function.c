/******************************************************************************

                ARRAY PASS AS A REFERENCE AND VALUE TO A FUNCTION.
                                Daniel Diaz Platon
                               Thuesday June 02, 2022

*******************************************************************************/

#include <stdio.h>
#define TAMANIO 5

// Prototipo de las funciones
void modificaArreglo( int b[], int tamanio );
void modificaElemento( int e );


int main(){

    int a[ TAMANIO ] =  { 0, 1, 2, 3, 4 };
    int i;

    printf( "Efectos de pasar arrgelos completos por referencia:\n\nlos "
            "valores del arreglo original son:\n" );

    // muestra el arreglo original
    for( i = 0; i < TAMANIO; i++ ){
        printf( "%3d", a[ i ] );
    } // End for

    printf( "\n" );

    // Pasa el arreglo a modificaArreglo por referencia
    modificaArreglo( a, TAMANIO );

    printf( "Los valores del arreglo modificado son:\n" );

    // muestra el arreglo original
    for( i = 0; i < TAMANIO; i++ ){
        printf( "%3d", a[ i ] );
    } // End for

    // Muestra el valor de a[3]
    printf( "\n\nEfectos de pasar un elemento del arreglo "
            "por valor:\n\nEl valor de a[ 3 ] es %d\n", a[ 3 ] );

    modificaElemento( a[ 3 ] ); // Pasa el elemento a [3] del arreglo por valor

    // Muestra el valor a[3]
    printf( "El valor de a[ 3 ] es %d\n", a[ 3 ] );

    return 0;

}  // End main

// en la funcion modificaArreglo, "b" apunta al arreglo original "a" en memoria
void modificaArreglo( int b[], int tamanio ){

    int j; // contador

    // Multiplica cada elemento del arreglo por 2
    for( j = 0; j < tamanio; j++ ){
        b[ j ] *= 2;
    } // End for

} // End function modificaArreglo

// en la funcion modificaElemento, "e" es una copia local del elemento a[ 3 ] del arreglo que
// se paso desde main
void modificaElemento( int e ){

    // Multiplica el parametro por 2
    printf( "El valor en modificaElemento es %d\n", e *= 2 );
    
}





